// Copyright 2023 Google LLC
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
// source: google/cloud/workstations/v1/workstations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_TRACING_CONNECTION_H

#include "google/cloud/workstations/v1/workstations_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class WorkstationsTracingConnection
    : public workstations_v1::WorkstationsConnection {
 public:
  ~WorkstationsTracingConnection() override = default;

  explicit WorkstationsTracingConnection(
      std::shared_ptr<workstations_v1::WorkstationsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::workstations::v1::WorkstationCluster>
  GetWorkstationCluster(
      google::cloud::workstations::v1::GetWorkstationClusterRequest const&
          request) override;

  StreamRange<google::cloud::workstations::v1::WorkstationCluster>
  ListWorkstationClusters(
      google::cloud::workstations::v1::ListWorkstationClustersRequest request)
      override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  CreateWorkstationCluster(
      google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateWorkstationCluster(
      NoAwaitTag,
      google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  CreateWorkstationCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  UpdateWorkstationCluster(
      google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateWorkstationCluster(
      NoAwaitTag,
      google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  UpdateWorkstationCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  DeleteWorkstationCluster(
      google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteWorkstationCluster(
      NoAwaitTag,
      google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
  DeleteWorkstationCluster(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::workstations::v1::WorkstationConfig>
  GetWorkstationConfig(
      google::cloud::workstations::v1::GetWorkstationConfigRequest const&
          request) override;

  StreamRange<google::cloud::workstations::v1::WorkstationConfig>
  ListWorkstationConfigs(
      google::cloud::workstations::v1::ListWorkstationConfigsRequest request)
      override;

  StreamRange<google::cloud::workstations::v1::WorkstationConfig>
  ListUsableWorkstationConfigs(
      google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  CreateWorkstationConfig(
      google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateWorkstationConfig(
      NoAwaitTag,
      google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  CreateWorkstationConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  UpdateWorkstationConfig(
      google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateWorkstationConfig(
      NoAwaitTag,
      google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  UpdateWorkstationConfig(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  DeleteWorkstationConfig(
      google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteWorkstationConfig(
      NoAwaitTag,
      google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
  DeleteWorkstationConfig(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::workstations::v1::Workstation> GetWorkstation(
      google::cloud::workstations::v1::GetWorkstationRequest const& request)
      override;

  StreamRange<google::cloud::workstations::v1::Workstation> ListWorkstations(
      google::cloud::workstations::v1::ListWorkstationsRequest request)
      override;

  StreamRange<google::cloud::workstations::v1::Workstation>
  ListUsableWorkstations(
      google::cloud::workstations::v1::ListUsableWorkstationsRequest request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  CreateWorkstation(
      google::cloud::workstations::v1::CreateWorkstationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateWorkstation(
      NoAwaitTag,
      google::cloud::workstations::v1::CreateWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  CreateWorkstation(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  UpdateWorkstation(
      google::cloud::workstations::v1::UpdateWorkstationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateWorkstation(
      NoAwaitTag,
      google::cloud::workstations::v1::UpdateWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  UpdateWorkstation(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  DeleteWorkstation(
      google::cloud::workstations::v1::DeleteWorkstationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteWorkstation(
      NoAwaitTag,
      google::cloud::workstations::v1::DeleteWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  DeleteWorkstation(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StartWorkstation(
      google::cloud::workstations::v1::StartWorkstationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartWorkstation(
      NoAwaitTag,
      google::cloud::workstations::v1::StartWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StartWorkstation(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StopWorkstation(google::cloud::workstations::v1::StopWorkstationRequest const&
                      request) override;

  StatusOr<google::longrunning::Operation> StopWorkstation(
      NoAwaitTag,
      google::cloud::workstations::v1::StopWorkstationRequest const& request)
      override;

  future<StatusOr<google::cloud::workstations::v1::Workstation>>
  StopWorkstation(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::cloud::workstations::v1::GenerateAccessTokenRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

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
  std::shared_ptr<workstations_v1::WorkstationsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<workstations_v1::WorkstationsConnection>
MakeWorkstationsTracingConnection(
    std::shared_ptr<workstations_v1::WorkstationsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_TRACING_CONNECTION_H
