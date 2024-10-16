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
// source: google/cloud/workflows/v1/workflows.proto

#include "google/cloud/workflows/v1/internal/workflows_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowsTracingStub::WorkflowsTracingStub(std::shared_ptr<WorkflowsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse>
WorkflowsTracingStub::ListWorkflows(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::v1::ListWorkflowsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "ListWorkflows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkflows(context, options, request));
}

StatusOr<google::cloud::workflows::v1::Workflow>
WorkflowsTracingStub::GetWorkflow(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::v1::GetWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "GetWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetWorkflow(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncCreateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "CreateWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateWorkflow(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> WorkflowsTracingStub::CreateWorkflow(
    grpc::ClientContext& context, Options options,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "CreateWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateWorkflow(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncDeleteWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "DeleteWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteWorkflow(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> WorkflowsTracingStub::DeleteWorkflow(
    grpc::ClientContext& context, Options options,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "DeleteWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteWorkflow(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncUpdateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "UpdateWorkflow");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateWorkflow(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> WorkflowsTracingStub::UpdateWorkflow(
    grpc::ClientContext& context, Options options,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "UpdateWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateWorkflow(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
WorkflowsTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location> WorkflowsTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
WorkflowsTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> WorkflowsTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status WorkflowsTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.workflows.v1.Workflows",
                                     "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> WorkflowsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<WorkflowsStub> MakeWorkflowsTracingStub(
    std::shared_ptr<WorkflowsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<WorkflowsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google
