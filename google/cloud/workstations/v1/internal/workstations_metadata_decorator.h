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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_METADATA_DECORATOR_H

#include "google/cloud/workstations/v1/internal/workstations_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkstationsMetadata : public WorkstationsStub {
 public:
  ~WorkstationsMetadata() override = default;
  explicit WorkstationsMetadata(
      std::shared_ptr<WorkstationsStub> child,
      std::multimap<std::string, std::string> fixed_metadata = {});

  StatusOr<google::cloud::workstations::v1::WorkstationCluster>
  GetWorkstationCluster(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::GetWorkstationClusterRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::ListWorkstationClustersResponse>
  ListWorkstationClusters(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::ListWorkstationClustersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateWorkstationCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateWorkstationCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteWorkstationCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::WorkstationConfig>
  GetWorkstationConfig(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::GetWorkstationConfigRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::ListWorkstationConfigsResponse>
  ListWorkstationConfigs(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::ListWorkstationConfigsRequest const&
          request) override;

  StatusOr<
      google::cloud::workstations::v1::ListUsableWorkstationConfigsResponse>
  ListUsableWorkstationConfigs(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::
          ListUsableWorkstationConfigsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkstationConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkstationConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkstationConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
          request) override;

  StatusOr<google::cloud::workstations::v1::Workstation> GetWorkstation(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::GetWorkstationRequest const& request)
      override;

  StatusOr<google::cloud::workstations::v1::ListWorkstationsResponse>
  ListWorkstations(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::ListWorkstationsRequest const& request)
      override;

  StatusOr<google::cloud::workstations::v1::ListUsableWorkstationsResponse>
  ListUsableWorkstations(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::ListUsableWorkstationsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkstation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::CreateWorkstationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkstation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::UpdateWorkstationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkstation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::DeleteWorkstationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartWorkstation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::StartWorkstationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopWorkstation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workstations::v1::StopWorkstationRequest const& request)
      override;

  StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      grpc::ClientContext& context,
      google::cloud::workstations::v1::GenerateAccessTokenRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<WorkstationsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_INTERNAL_WORKSTATIONS_METADATA_DECORATOR_H
