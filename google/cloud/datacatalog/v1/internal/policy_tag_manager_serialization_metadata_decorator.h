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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_METADATA_DECORATOR_H

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerSerializationMetadata
    : public PolicyTagManagerSerializationStub {
 public:
  ~PolicyTagManagerSerializationMetadata() override = default;
  PolicyTagManagerSerializationMetadata(
      std::shared_ptr<PolicyTagManagerSerializationStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<PolicyTagManagerSerializationStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_METADATA_DECORATOR_H
