// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IMPL_H

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_retry_traits.h"
#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_stub.h"
#include "google/cloud/datacatalog/v1/policy_tag_manager_serialization_connection.h"
#include "google/cloud/datacatalog/v1/policy_tag_manager_serialization_connection_idempotency_policy.h"
#include "google/cloud/datacatalog/v1/policy_tag_manager_serialization_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerSerializationConnectionImpl
    : public datacatalog_v1::PolicyTagManagerSerializationConnection {
 public:
  ~PolicyTagManagerSerializationConnectionImpl() override = default;

  PolicyTagManagerSerializationConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          datacatalog_v1_internal::PolicyTagManagerSerializationStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request)
      override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<datacatalog_v1_internal::PolicyTagManagerSerializationStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_IMPL_H
