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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_TRACING_CONNECTION_H

#include "google/cloud/datacatalog/v1/policy_tag_manager_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PolicyTagManagerTracingConnection
    : public datacatalog_v1::PolicyTagManagerConnection {
 public:
  ~PolicyTagManagerTracingConnection() override = default;

  explicit PolicyTagManagerTracingConnection(
      std::shared_ptr<datacatalog_v1::PolicyTagManagerConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request)
      override;

  Status DeleteTaxonomy(
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::v1::Taxonomy> ListTaxonomies(
      google::cloud::datacatalog::v1::ListTaxonomiesRequest request) override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request)
      override;

  Status DeletePolicyTag(
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::v1::PolicyTag> ListPolicyTags(
      google::cloud::datacatalog::v1::ListPolicyTagsRequest request) override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<datacatalog_v1::PolicyTagManagerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<datacatalog_v1::PolicyTagManagerConnection>
MakePolicyTagManagerTracingConnection(
    std::shared_ptr<datacatalog_v1::PolicyTagManagerConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_TRACING_CONNECTION_H
