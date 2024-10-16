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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_link_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentLinkServiceTracingStub::DocumentLinkServiceTracingStub(
    std::shared_ptr<DocumentLinkServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
DocumentLinkServiceTracingStub::ListLinkedTargets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentLinkService",
      "ListLinkedTargets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListLinkedTargets(context, options, request));
}

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
DocumentLinkServiceTracingStub::ListLinkedSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentLinkService",
      "ListLinkedSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListLinkedSources(context, options, request));
}

StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
DocumentLinkServiceTracingStub::CreateDocumentLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentLinkService",
      "CreateDocumentLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateDocumentLink(context, options, request));
}

Status DocumentLinkServiceTracingStub::DeleteDocumentLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentLinkService",
      "DeleteDocumentLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteDocumentLink(context, options, request));
}

StatusOr<google::longrunning::Operation>
DocumentLinkServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.DocumentLinkService", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DocumentLinkServiceStub> MakeDocumentLinkServiceTracingStub(
    std::shared_ptr<DocumentLinkServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DocumentLinkServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
