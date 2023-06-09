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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/v1/internal/binauthz_management_service_v1_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/binaryauthorization/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BinauthzManagementServiceV1Metadata::BinauthzManagementServiceV1Metadata(
    std::shared_ptr<BinauthzManagementServiceV1Stub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1Metadata::GetPolicy(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::GetPolicyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetPolicy(context, request);
}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1Metadata::UpdatePolicy(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
        request) {
  SetMetadata(context, "policy.name=" + request.policy().name());
  return child_->UpdatePolicy(context, request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1Metadata::CreateAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateAttestor(context, request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1Metadata::GetAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::GetAttestorRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAttestor(context, request);
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1Metadata::UpdateAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
        request) {
  SetMetadata(context, "attestor.name=" + request.attestor().name());
  return child_->UpdateAttestor(context, request);
}

StatusOr<google::cloud::binaryauthorization::v1::ListAttestorsResponse>
BinauthzManagementServiceV1Metadata::ListAttestors(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::ListAttestorsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAttestors(context, request);
}

Status BinauthzManagementServiceV1Metadata::DeleteAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteAttestor(context, request);
}

void BinauthzManagementServiceV1Metadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BinauthzManagementServiceV1Metadata::SetMetadata(
    grpc::ClientContext& context) {
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
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google
