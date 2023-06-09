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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/internal/environments_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/environment.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsMetadata::EnvironmentsMetadata(
    std::shared_ptr<EnvironmentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListEnvironmentsResponse>
EnvironmentsMetadata::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEnvironments(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEnvironment(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
        request) {
  SetMetadata(*context, "environment.name=" + request.environment().name());
  return child_->AsyncUpdateEnvironment(cq, std::move(context), request);
}

Status EnvironmentsMetadata::DeleteEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryResponse>
EnvironmentsMetadata::LookupEnvironmentHistory(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->LookupEnvironmentHistory(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncRunContinuousTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
        request) {
  SetMetadata(*context, "environment=" + request.environment());
  return child_->AsyncRunContinuousTest(cq, std::move(context), request);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListContinuousTestResultsResponse>
EnvironmentsMetadata::ListContinuousTestResults(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListContinuousTestResults(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncDeployFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
  SetMetadata(*context, "environment=" + request.environment());
  return child_->AsyncDeployFlow(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> EnvironmentsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
