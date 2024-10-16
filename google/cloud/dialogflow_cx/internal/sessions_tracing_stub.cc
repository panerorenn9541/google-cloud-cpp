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
// source: google/cloud/dialogflow/cx/v3/session.proto

#include "google/cloud/dialogflow_cx/internal/sessions_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/internal/streaming_read_rpc_tracing.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SessionsTracingStub::SessionsTracingStub(std::shared_ptr<SessionsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
SessionsTracingStub::DetectIntent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "DetectIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DetectIntent(context, options, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::dialogflow::cx::v3::DetectIntentResponse>>
SessionsTracingStub::ServerStreamingDetectIntent(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "ServerStreamingDetectIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->ServerStreamingDetectIntent(context, options, request);
  return std::make_unique<internal::StreamingReadRpcTracing<
      google::cloud::dialogflow::cx::v3::DetectIntentResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
SessionsTracingStub::AsyncStreamingDetectIntent(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "StreamingDetectIntent");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream =
      child_->AsyncStreamingDetectIntent(cq, context, std::move(options));
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>(
      std::move(context), std::move(stream), std::move(span));
}

StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
SessionsTracingStub::MatchIntent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "MatchIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->MatchIntent(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
SessionsTracingStub::FulfillIntent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "FulfillIntent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FulfillIntent(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>
SessionsTracingStub::SubmitAnswerFeedback(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "SubmitAnswerFeedback");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SubmitAnswerFeedback(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
SessionsTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location> SessionsTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
SessionsTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> SessionsTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status SessionsTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Sessions",
                                     "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SessionsStub> MakeSessionsTracingStub(
    std::shared_ptr<SessionsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SessionsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
