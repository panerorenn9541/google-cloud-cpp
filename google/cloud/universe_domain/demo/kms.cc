// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//! [all]
#include "google/cloud/kms/v1/key_management_client.h"
#include "google/cloud/kms/v1/key_management_options.h"
#include "google/cloud/location.h"
#include "google/cloud/universe_domain.h"
#include "google/cloud/universe_domain_options.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id location-id\n";
    return 1;
  }
  namespace gc = ::google::cloud;
  namespace kms = ::google::cloud::kms_v1;
  auto const location = gc::Location(argv[1], argv[2]);

  // Interrogate credentials for universe_domain and add the value to returned
  // options.
  auto options = gc::AddUniverseDomainOption(gc::ExperimentalTag{});
  if (!options.ok()) throw std::move(options).status();

  // Override retry policy to quickly exit if there's a failure.
  options->set<kms::KeyManagementServiceRetryPolicyOption>(
      std::make_shared<kms::KeyManagementServiceLimitedErrorCountRetryPolicy>(
          3));

  auto client = kms::KeyManagementServiceClient(
      kms::MakeKeyManagementServiceConnection(*options));

  std::cout << "kms.ListKeyRings:\n";
  for (auto kr : client.ListKeyRings(location.FullName())) {
    if (!kr) throw std::move(kr).status();
    std::cout << kr->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
//! [all]
