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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_MOCKS_MOCK_CLOUD_DEPLOY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_MOCKS_MOCK_CLOUD_DEPLOY_CONNECTION_H

#include "google/cloud/deploy/v1/cloud_deploy_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace deploy_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudDeployConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudDeployClient`. To do so,
 * construct an object of type `CloudDeployClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCloudDeployConnection : public deploy_v1::CloudDeployConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::DeliveryPipeline>),
              ListDeliveryPipelines,
              (google::cloud::deploy::v1::ListDeliveryPipelinesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::deploy::v1::DeliveryPipeline>,
      GetDeliveryPipeline,
      (google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDeliveryPipeline(Matcher<google::cloud::deploy::v1::CreateDeliveryPipelineRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>,
      CreateDeliveryPipeline,
      (google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateDeliveryPipeline(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateDeliveryPipeline,
      (NoAwaitTag,
       google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDeliveryPipeline(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>,
              CreateDeliveryPipeline,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateDeliveryPipeline(Matcher<google::cloud::deploy::v1::UpdateDeliveryPipelineRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>,
      UpdateDeliveryPipeline,
      (google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateDeliveryPipeline(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateDeliveryPipeline,
      (NoAwaitTag,
       google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateDeliveryPipeline(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>,
              UpdateDeliveryPipeline,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDeliveryPipeline(Matcher<google::cloud::deploy::v1::DeleteDeliveryPipelineRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
      DeleteDeliveryPipeline,
      (google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteDeliveryPipeline(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDeliveryPipeline,
      (NoAwaitTag,
       google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDeliveryPipeline(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
              DeleteDeliveryPipeline,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::Target>), ListTargets,
              (google::cloud::deploy::v1::ListTargetsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>,
              RollbackTarget,
              (google::cloud::deploy::v1::RollbackTargetRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::Target>, GetTarget,
              (google::cloud::deploy::v1::GetTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateTarget(Matcher<google::cloud::deploy::v1::CreateTargetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Target>>, CreateTarget,
              (google::cloud::deploy::v1::CreateTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateTarget(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateTarget,
              (NoAwaitTag,
               google::cloud::deploy::v1::CreateTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateTarget(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Target>>, CreateTarget,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateTarget(Matcher<google::cloud::deploy::v1::UpdateTargetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Target>>, UpdateTarget,
              (google::cloud::deploy::v1::UpdateTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateTarget(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateTarget,
              (NoAwaitTag,
               google::cloud::deploy::v1::UpdateTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateTarget(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Target>>, UpdateTarget,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteTarget(Matcher<google::cloud::deploy::v1::DeleteTargetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
              DeleteTarget,
              (google::cloud::deploy::v1::DeleteTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteTarget(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteTarget,
              (NoAwaitTag,
               google::cloud::deploy::v1::DeleteTargetRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteTarget(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
              DeleteTarget, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::CustomTargetType>),
              ListCustomTargetTypes,
              (google::cloud::deploy::v1::ListCustomTargetTypesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::deploy::v1::CustomTargetType>,
      GetCustomTargetType,
      (google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCustomTargetType(Matcher<google::cloud::deploy::v1::CreateCustomTargetTypeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>,
      CreateCustomTargetType,
      (google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCustomTargetType(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCustomTargetType,
      (NoAwaitTag,
       google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCustomTargetType(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>,
              CreateCustomTargetType,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCustomTargetType(Matcher<google::cloud::deploy::v1::UpdateCustomTargetTypeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>,
      UpdateCustomTargetType,
      (google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCustomTargetType(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCustomTargetType,
      (NoAwaitTag,
       google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCustomTargetType(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>,
              UpdateCustomTargetType,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCustomTargetType(Matcher<google::cloud::deploy::v1::DeleteCustomTargetTypeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
      DeleteCustomTargetType,
      (google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCustomTargetType(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCustomTargetType,
      (NoAwaitTag,
       google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCustomTargetType(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
              DeleteCustomTargetType,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::Release>), ListReleases,
              (google::cloud::deploy::v1::ListReleasesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::Release>, GetRelease,
              (google::cloud::deploy::v1::GetReleaseRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateRelease(Matcher<google::cloud::deploy::v1::CreateReleaseRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Release>>,
              CreateRelease,
              (google::cloud::deploy::v1::CreateReleaseRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateRelease(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateRelease,
              (NoAwaitTag,
               google::cloud::deploy::v1::CreateReleaseRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateRelease(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Release>>,
              CreateRelease, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>,
              AbandonRelease,
              (google::cloud::deploy::v1::AbandonReleaseRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>,
              ApproveRollout,
              (google::cloud::deploy::v1::ApproveRolloutRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>,
              AdvanceRollout,
              (google::cloud::deploy::v1::AdvanceRolloutRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>,
              CancelRollout,
              (google::cloud::deploy::v1::CancelRolloutRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::Rollout>), ListRollouts,
              (google::cloud::deploy::v1::ListRolloutsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::Rollout>, GetRollout,
              (google::cloud::deploy::v1::GetRolloutRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateRollout(Matcher<google::cloud::deploy::v1::CreateRolloutRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Rollout>>,
              CreateRollout,
              (google::cloud::deploy::v1::CreateRolloutRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateRollout(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateRollout,
              (NoAwaitTag,
               google::cloud::deploy::v1::CreateRolloutRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateRollout(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Rollout>>,
              CreateRollout, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>, IgnoreJob,
              (google::cloud::deploy::v1::IgnoreJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::RetryJobResponse>, RetryJob,
              (google::cloud::deploy::v1::RetryJobRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::JobRun>), ListJobRuns,
              (google::cloud::deploy::v1::ListJobRunsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::JobRun>, GetJobRun,
              (google::cloud::deploy::v1::GetJobRunRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>,
      TerminateJobRun,
      (google::cloud::deploy::v1::TerminateJobRunRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::Config>, GetConfig,
              (google::cloud::deploy::v1::GetConfigRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateAutomation(Matcher<google::cloud::deploy::v1::CreateAutomationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::Automation>>, CreateAutomation,
      (google::cloud::deploy::v1::CreateAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateAutomation(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateAutomation,
      (NoAwaitTag,
       google::cloud::deploy::v1::CreateAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateAutomation(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Automation>>,
              CreateAutomation,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateAutomation(Matcher<google::cloud::deploy::v1::UpdateAutomationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::Automation>>, UpdateAutomation,
      (google::cloud::deploy::v1::UpdateAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateAutomation(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateAutomation,
      (NoAwaitTag,
       google::cloud::deploy::v1::UpdateAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateAutomation(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::Automation>>,
              UpdateAutomation,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteAutomation(Matcher<google::cloud::deploy::v1::DeleteAutomationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
      DeleteAutomation,
      (google::cloud::deploy::v1::DeleteAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteAutomation(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteAutomation,
      (NoAwaitTag,
       google::cloud::deploy::v1::DeleteAutomationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteAutomation(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>,
              DeleteAutomation,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::deploy::v1::Automation>, GetAutomation,
              (google::cloud::deploy::v1::GetAutomationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::Automation>),
              ListAutomations,
              (google::cloud::deploy::v1::ListAutomationsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::deploy::v1::AutomationRun>, GetAutomationRun,
      (google::cloud::deploy::v1::GetAutomationRunRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::deploy::v1::AutomationRun>),
              ListAutomationRuns,
              (google::cloud::deploy::v1::ListAutomationRunsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>,
      CancelAutomationRun,
      (google::cloud::deploy::v1::CancelAutomationRunRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_MOCKS_MOCK_CLOUD_DEPLOY_CONNECTION_H
