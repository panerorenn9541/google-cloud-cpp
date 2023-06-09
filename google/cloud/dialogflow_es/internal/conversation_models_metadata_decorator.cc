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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/internal/conversation_models_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/conversation_model.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationModelsMetadata::ConversationModelsMetadata(
    std::shared_ptr<ConversationModelsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncCreateConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateConversationModel(cq, std::move(context), request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsMetadata::GetConversationModel(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetConversationModel(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationModelsResponse>
ConversationModelsMetadata::ListConversationModels(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationModelsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListConversationModels(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncDeleteConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteConversationModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncDeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeployConversationModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncUndeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUndeployConversationModel(cq, std::move(context),
                                                request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsMetadata::GetConversationModelEvaluation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetConversationModelEvaluation(context, request);
}

StatusOr<
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse>
ConversationModelsMetadata::ListConversationModelEvaluations(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListConversationModelEvaluations(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncCreateConversationModelEvaluation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateConversationModelEvaluation(cq, std::move(context),
                                                        request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ConversationModelsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ConversationModelsMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ConversationModelsMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
