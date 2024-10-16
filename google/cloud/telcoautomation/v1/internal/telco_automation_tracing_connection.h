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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_CONNECTION_H

#include "google/cloud/telcoautomation/v1/telco_automation_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TelcoAutomationTracingConnection
    : public telcoautomation_v1::TelcoAutomationConnection {
 public:
  ~TelcoAutomationTracingConnection() override = default;

  explicit TelcoAutomationTracingConnection(
      std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::telcoautomation::v1::OrchestrationCluster>
  ListOrchestrationClusters(
      google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
  GetOrchestrationCluster(
      google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
  CreateOrchestrationCluster(
      google::cloud::telcoautomation::v1::
          CreateOrchestrationClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateOrchestrationCluster(
      NoAwaitTag,
      google::cloud::telcoautomation::v1::
          CreateOrchestrationClusterRequest const& request) override;

  future<StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>>
  CreateOrchestrationCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
  DeleteOrchestrationCluster(
      google::cloud::telcoautomation::v1::
          DeleteOrchestrationClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteOrchestrationCluster(
      NoAwaitTag,
      google::cloud::telcoautomation::v1::
          DeleteOrchestrationClusterRequest const& request) override;

  future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
  DeleteOrchestrationCluster(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::telcoautomation::v1::EdgeSlm> ListEdgeSlms(
      google::cloud::telcoautomation::v1::ListEdgeSlmsRequest request) override;

  StatusOr<google::cloud::telcoautomation::v1::EdgeSlm> GetEdgeSlm(
      google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request)
      override;

  future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>> CreateEdgeSlm(
      google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEdgeSlm(
      NoAwaitTag,
      google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request)
      override;

  future<StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>> CreateEdgeSlm(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
  DeleteEdgeSlm(google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteEdgeSlm(
      NoAwaitTag,
      google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request)
      override;

  future<StatusOr<google::cloud::telcoautomation::v1::OperationMetadata>>
  DeleteEdgeSlm(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> CreateBlueprint(
      google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> UpdateBlueprint(
      google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> GetBlueprint(
      google::cloud::telcoautomation::v1::GetBlueprintRequest const& request)
      override;

  Status DeleteBlueprint(
      google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request)
      override;

  StreamRange<google::cloud::telcoautomation::v1::Blueprint> ListBlueprints(
      google::cloud::telcoautomation::v1::ListBlueprintsRequest request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> ApproveBlueprint(
      google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> ProposeBlueprint(
      google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> RejectBlueprint(
      google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request)
      override;

  StreamRange<google::cloud::telcoautomation::v1::Blueprint>
  ListBlueprintRevisions(
      google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest request)
      override;

  StreamRange<google::cloud::telcoautomation::v1::Blueprint>
  SearchBlueprintRevisions(
      google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest
          request) override;

  StreamRange<google::cloud::telcoautomation::v1::Deployment>
  SearchDeploymentRevisions(
      google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
  DiscardBlueprintChanges(
      google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
          request) override;

  StreamRange<google::cloud::telcoautomation::v1::PublicBlueprint>
  ListPublicBlueprints(
      google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
  GetPublicBlueprint(
      google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> CreateDeployment(
      google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> UpdateDeployment(
      google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> GetDeployment(
      google::cloud::telcoautomation::v1::GetDeploymentRequest const& request)
      override;

  Status RemoveDeployment(
      google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
          request) override;

  StreamRange<google::cloud::telcoautomation::v1::Deployment> ListDeployments(
      google::cloud::telcoautomation::v1::ListDeploymentsRequest request)
      override;

  StreamRange<google::cloud::telcoautomation::v1::Deployment>
  ListDeploymentRevisions(
      google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
  DiscardDeploymentChanges(
      google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> ApplyDeployment(
      google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
  ComputeDeploymentStatus(
      google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> RollbackDeployment(
      google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  GetHydratedDeployment(
      google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
          request) override;

  StreamRange<google::cloud::telcoautomation::v1::HydratedDeployment>
  ListHydratedDeployments(
      google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  UpdateHydratedDeployment(
      google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  ApplyHydratedDeployment(
      google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
          request) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection>
MakeTelcoAutomationTracingConnection(
    std::shared_ptr<telcoautomation_v1::TelcoAutomationConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_CONNECTION_H
