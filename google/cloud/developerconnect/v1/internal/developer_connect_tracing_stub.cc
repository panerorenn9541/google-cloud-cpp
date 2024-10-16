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
// source: google/cloud/developerconnect/v1/developer_connect.proto

#include "google/cloud/developerconnect/v1/internal/developer_connect_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace developerconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DeveloperConnectTracingStub::DeveloperConnectTracingStub(
    std::shared_ptr<DeveloperConnectStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::developerconnect::v1::ListConnectionsResponse>
DeveloperConnectTracingStub::ListConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::ListConnectionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "ListConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListConnections(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::Connection>
DeveloperConnectTracingStub::GetConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::GetConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "GetConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::developerconnect::v1::CreateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "CreateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::CreateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::developerconnect::v1::CreateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "CreateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "UpdateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::UpdateConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::developerconnect::v1::UpdateConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "UpdateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "DeleteConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::DeleteConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::developerconnect::v1::DeleteConnectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "DeleteConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncCreateGitRepositoryLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "CreateGitRepositoryLink");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGitRepositoryLink(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::CreateGitRepositoryLink(
    grpc::ClientContext& context, Options options,
    google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "CreateGitRepositoryLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateGitRepositoryLink(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncDeleteGitRepositoryLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "DeleteGitRepositoryLink");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGitRepositoryLink(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::DeleteGitRepositoryLink(
    grpc::ClientContext& context, Options options,
    google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "DeleteGitRepositoryLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteGitRepositoryLink(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::ListGitRepositoryLinksResponse>
DeveloperConnectTracingStub::ListGitRepositoryLinks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "ListGitRepositoryLinks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListGitRepositoryLinks(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
DeveloperConnectTracingStub::GetGitRepositoryLink(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "GetGitRepositoryLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetGitRepositoryLink(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
DeveloperConnectTracingStub::FetchReadWriteToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "FetchReadWriteToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->FetchReadWriteToken(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
DeveloperConnectTracingStub::FetchReadToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::FetchReadTokenRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "FetchReadToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FetchReadToken(context, options, request));
}

StatusOr<
    google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesResponse>
DeveloperConnectTracingStub::FetchLinkableGitRepositories(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::
        FetchLinkableGitRepositoriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "FetchLinkableGitRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->FetchLinkableGitRepositories(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
DeveloperConnectTracingStub::FetchGitHubInstallations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::FetchGitHubInstallationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect",
      "FetchGitHubInstallations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->FetchGitHubInstallations(context, options, request));
}

StatusOr<google::cloud::developerconnect::v1::FetchGitRefsResponse>
DeveloperConnectTracingStub::FetchGitRefs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::developerconnect::v1::FetchGitRefsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "FetchGitRefs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FetchGitRefs(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
DeveloperConnectTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
DeveloperConnectTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
DeveloperConnectTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
DeveloperConnectTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status DeveloperConnectTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status DeveloperConnectTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.developerconnect.v1.DeveloperConnect", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DeveloperConnectTracingStub::AsyncGetOperation(
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

future<Status> DeveloperConnectTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DeveloperConnectStub> MakeDeveloperConnectTracingStub(
    std::shared_ptr<DeveloperConnectStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DeveloperConnectTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1_internal
}  // namespace cloud
}  // namespace google
