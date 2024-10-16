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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationsTracingStub::ConversationsTracingStub(
    std::shared_ptr<ConversationsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::CreateConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "CreateConversation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateConversation(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
ConversationsTracingStub::ListConversations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "ListConversations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListConversations(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::GetConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "GetConversation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConversation(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::CompleteConversation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "CompleteConversation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CompleteConversation(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
ConversationsTracingStub::ListMessages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "ListMessages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListMessages(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsTracingStub::SuggestConversationSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "SuggestConversationSummary");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SuggestConversationSummary(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
ConversationsTracingStub::GenerateStatelessSummary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "GenerateStatelessSummary");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateStatelessSummary(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
ConversationsTracingStub::GenerateStatelessSuggestion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "GenerateStatelessSuggestion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GenerateStatelessSuggestion(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
ConversationsTracingStub::SearchKnowledge(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "SearchKnowledge");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchKnowledge(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
ConversationsTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
ConversationsTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
ConversationsTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> ConversationsTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status ConversationsTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Conversations",
                                     "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ConversationsStub> MakeConversationsTracingStub(
    std::shared_ptr<ConversationsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConversationsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
