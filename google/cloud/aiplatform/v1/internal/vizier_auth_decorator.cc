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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/internal/vizier_auth_decorator.h"
#include <google/cloud/aiplatform/v1/vizier_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VizierServiceAuth::VizierServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<VizierServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceAuth::CreateStudy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateStudyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateStudy(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceAuth::GetStudy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetStudyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStudy(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListStudiesResponse>
VizierServiceAuth::ListStudies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListStudiesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListStudies(context, options, request);
}

Status VizierServiceAuth::DeleteStudy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::DeleteStudyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteStudy(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Study> VizierServiceAuth::LookupStudy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::LookupStudyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupStudy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VizierServiceAuth::AsyncSuggestTrials(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSuggestTrials(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> VizierServiceAuth::SuggestTrials(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SuggestTrials(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceAuth::CreateTrial(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTrialRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTrial(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceAuth::GetTrial(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTrialRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTrial(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTrialsResponse>
VizierServiceAuth::ListTrials(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTrialsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTrials(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Trial>
VizierServiceAuth::AddTrialMeasurement(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddTrialMeasurement(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceAuth::CompleteTrial(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CompleteTrialRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CompleteTrial(context, options, request);
}

Status VizierServiceAuth::DeleteTrial(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::DeleteTrialRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTrial(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VizierServiceAuth::AsyncCheckTrialEarlyStoppingState(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCheckTrialEarlyStoppingState(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
VizierServiceAuth::CheckTrialEarlyStoppingState(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CheckTrialEarlyStoppingState(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Trial> VizierServiceAuth::StopTrial(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::StopTrialRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StopTrial(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
VizierServiceAuth::ListOptimalTrials(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOptimalTrials(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
VizierServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> VizierServiceAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> VizierServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> VizierServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
VizierServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
VizierServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> VizierServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status VizierServiceAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status VizierServiceAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::longrunning::Operation> VizierServiceAuth::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->WaitOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VizierServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> VizierServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
