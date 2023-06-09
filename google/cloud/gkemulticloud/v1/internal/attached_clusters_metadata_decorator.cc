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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/attached_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AttachedClustersMetadata::AttachedClustersMetadata(
    std::shared_ptr<AttachedClustersStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersMetadata::AsyncCreateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAttachedCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersMetadata::AsyncUpdateAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request) {
  SetMetadata(*context,
              "attached_cluster.name=" + request.attached_cluster().name());
  return child_->AsyncUpdateAttachedCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersMetadata::AsyncImportAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncImportAttachedCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersMetadata::GetAttachedCluster(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAttachedCluster(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
AttachedClustersMetadata::ListAttachedClusters(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAttachedClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersMetadata::AsyncDeleteAttachedCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAttachedCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersMetadata::GetAttachedServerConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAttachedServerConfig(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersMetadata::GenerateAttachedClusterInstallManifest(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->GenerateAttachedClusterInstallManifest(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AttachedClustersMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AttachedClustersMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AttachedClustersMetadata::SetMetadata(grpc::ClientContext& context,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AttachedClustersMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
