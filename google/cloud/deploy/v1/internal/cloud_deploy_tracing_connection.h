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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_TRACING_CONNECTION_H

#include "google/cloud/deploy/v1/cloud_deploy_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudDeployTracingConnection : public deploy_v1::CloudDeployConnection {
 public:
  ~CloudDeployTracingConnection() override = default;

  explicit CloudDeployTracingConnection(
      std::shared_ptr<deploy_v1::CloudDeployConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
  ListDeliveryPipelines(
      google::cloud::deploy::v1::ListDeliveryPipelinesRequest request) override;

  StatusOr<google::cloud::deploy::v1::DeliveryPipeline> GetDeliveryPipeline(
      google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  CreateDeliveryPipeline(
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  CreateDeliveryPipeline(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  UpdateDeliveryPipeline(
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  UpdateDeliveryPipeline(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeliveryPipeline(
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDeliveryPipeline(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeliveryPipeline(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::deploy::v1::Target> ListTargets(
      google::cloud::deploy::v1::ListTargetsRequest request) override;

  StatusOr<google::cloud::deploy::v1::RollbackTargetResponse> RollbackTarget(
      google::cloud::deploy::v1::RollbackTargetRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::Target> GetTarget(
      google::cloud::deploy::v1::GetTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> CreateTarget(
      google::cloud::deploy::v1::CreateTargetRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> CreateTarget(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> UpdateTarget(
      google::cloud::deploy::v1::UpdateTargetRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> UpdateTarget(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>> DeleteTarget(
      google::cloud::deploy::v1::DeleteTargetRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteTarget(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>> DeleteTarget(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::deploy::v1::CustomTargetType>
  ListCustomTargetTypes(
      google::cloud::deploy::v1::ListCustomTargetTypesRequest request) override;

  StatusOr<google::cloud::deploy::v1::CustomTargetType> GetCustomTargetType(
      google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  CreateCustomTargetType(
      google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  CreateCustomTargetType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  UpdateCustomTargetType(
      google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
  UpdateCustomTargetType(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteCustomTargetType(
      google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCustomTargetType(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteCustomTargetType(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::deploy::v1::Release> ListReleases(
      google::cloud::deploy::v1::ListReleasesRequest request) override;

  StatusOr<google::cloud::deploy::v1::Release> GetRelease(
      google::cloud::deploy::v1::GetReleaseRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Release>> CreateRelease(
      google::cloud::deploy::v1::CreateReleaseRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateRelease(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateReleaseRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Release>> CreateRelease(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse> AbandonRelease(
      google::cloud::deploy::v1::AbandonReleaseRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse> ApproveRollout(
      google::cloud::deploy::v1::ApproveRolloutRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse> AdvanceRollout(
      google::cloud::deploy::v1::AdvanceRolloutRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::CancelRolloutResponse> CancelRollout(
      google::cloud::deploy::v1::CancelRolloutRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::Rollout> ListRollouts(
      google::cloud::deploy::v1::ListRolloutsRequest request) override;

  StatusOr<google::cloud::deploy::v1::Rollout> GetRollout(
      google::cloud::deploy::v1::GetRolloutRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Rollout>> CreateRollout(
      google::cloud::deploy::v1::CreateRolloutRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateRollout(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateRolloutRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Rollout>> CreateRollout(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::deploy::v1::IgnoreJobResponse> IgnoreJob(
      google::cloud::deploy::v1::IgnoreJobRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::RetryJobResponse> RetryJob(
      google::cloud::deploy::v1::RetryJobRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::JobRun> ListJobRuns(
      google::cloud::deploy::v1::ListJobRunsRequest request) override;

  StatusOr<google::cloud::deploy::v1::JobRun> GetJobRun(
      google::cloud::deploy::v1::GetJobRunRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse> TerminateJobRun(
      google::cloud::deploy::v1::TerminateJobRunRequest const& request)
      override;

  StatusOr<google::cloud::deploy::v1::Config> GetConfig(
      google::cloud::deploy::v1::GetConfigRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Automation>> CreateAutomation(
      google::cloud::deploy::v1::CreateAutomationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::CreateAutomationRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::Automation>> CreateAutomation(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::Automation>> UpdateAutomation(
      google::cloud::deploy::v1::UpdateAutomationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::UpdateAutomationRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::Automation>> UpdateAutomation(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteAutomation(google::cloud::deploy::v1::DeleteAutomationRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteAutomation(
      NoAwaitTag,
      google::cloud::deploy::v1::DeleteAutomationRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteAutomation(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::deploy::v1::Automation> GetAutomation(
      google::cloud::deploy::v1::GetAutomationRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::Automation> ListAutomations(
      google::cloud::deploy::v1::ListAutomationsRequest request) override;

  StatusOr<google::cloud::deploy::v1::AutomationRun> GetAutomationRun(
      google::cloud::deploy::v1::GetAutomationRunRequest const& request)
      override;

  StreamRange<google::cloud::deploy::v1::AutomationRun> ListAutomationRuns(
      google::cloud::deploy::v1::ListAutomationRunsRequest request) override;

  StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
  CancelAutomationRun(
      google::cloud::deploy::v1::CancelAutomationRunRequest const& request)
      override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

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
  std::shared_ptr<deploy_v1::CloudDeployConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<deploy_v1::CloudDeployConnection>
MakeCloudDeployTracingConnection(
    std::shared_ptr<deploy_v1::CloudDeployConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_TRACING_CONNECTION_H
