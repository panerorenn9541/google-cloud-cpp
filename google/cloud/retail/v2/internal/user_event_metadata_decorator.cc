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
// source: google/cloud/retail/v2/user_event_service.proto

#include "google/cloud/retail/v2/internal/user_event_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/user_event_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UserEventServiceMetadata::UserEventServiceMetadata(
    std::shared_ptr<UserEventServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::retail::v2::UserEvent>
UserEventServiceMetadata::WriteUserEvent(
    grpc::ClientContext& context,
    google::cloud::retail::v2::WriteUserEventRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->WriteUserEvent(context, request);
}

StatusOr<google::api::HttpBody> UserEventServiceMetadata::CollectUserEvent(
    grpc::ClientContext& context,
    google::cloud::retail::v2::CollectUserEventRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CollectUserEvent(context, request);
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceMetadata::AsyncPurgeUserEvents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::PurgeUserEventsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncPurgeUserEvents(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceMetadata::AsyncImportUserEvents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::ImportUserEventsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncImportUserEvents(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceMetadata::AsyncRejoinUserEvents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::RejoinUserEventsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncRejoinUserEvents(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> UserEventServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void UserEventServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void UserEventServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
