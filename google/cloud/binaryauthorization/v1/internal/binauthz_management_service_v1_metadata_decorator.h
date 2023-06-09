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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_METADATA_DECORATOR_H

#include "google/cloud/binaryauthorization/v1/internal/binauthz_management_service_v1_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BinauthzManagementServiceV1Metadata
    : public BinauthzManagementServiceV1Stub {
 public:
  ~BinauthzManagementServiceV1Metadata() override = default;
  explicit BinauthzManagementServiceV1Metadata(
      std::shared_ptr<BinauthzManagementServiceV1Stub> child,
      std::multimap<std::string, std::string> fixed_metadata = {});

  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetPolicy(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::GetPolicyRequest const& request)
      override;

  StatusOr<google::cloud::binaryauthorization::v1::Policy> UpdatePolicy(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
          request) override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> CreateAttestor(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
          request) override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> GetAttestor(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::GetAttestorRequest const& request)
      override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> UpdateAttestor(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
          request) override;

  StatusOr<google::cloud::binaryauthorization::v1::ListAttestorsResponse>
  ListAttestors(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::ListAttestorsRequest const&
          request) override;

  Status DeleteAttestor(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
          request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<BinauthzManagementServiceV1Stub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_METADATA_DECORATOR_H
