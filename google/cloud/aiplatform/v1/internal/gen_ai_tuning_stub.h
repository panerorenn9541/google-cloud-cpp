// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/genai_tuning_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/genai_tuning_service.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GenAiTuningServiceStub {
 public:
  virtual ~GenAiTuningServiceStub() = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TuningJob> CreateTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTuningJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TuningJob> GetTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTuningJobRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListTuningJobsResponse>
  ListTuningJobs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTuningJobsRequest const& request) = 0;

  virtual Status CancelTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelTuningJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRebaseTunedModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> RebaseTunedModel(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultGenAiTuningServiceStub : public GenAiTuningServiceStub {
 public:
  DefaultGenAiTuningServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::GenAiTuningService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::aiplatform::v1::TuningJob> CreateTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TuningJob> GetTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTuningJobRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTuningJobsResponse>
  ListTuningJobs(grpc::ClientContext& context, Options const& options,
                 google::cloud::aiplatform::v1::ListTuningJobsRequest const&
                     request) override;

  Status CancelTuningJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CancelTuningJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRebaseTunedModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RebaseTunedModel(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::RebaseTunedModelRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

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

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::aiplatform::v1::GenAiTuningService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_GEN_AI_TUNING_STUB_H
