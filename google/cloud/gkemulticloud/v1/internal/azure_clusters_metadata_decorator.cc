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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/internal/azure_clusters_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/azure_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AzureClustersMetadata::AzureClustersMetadata(
    std::shared_ptr<AzureClustersStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncCreateAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAzureClient(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureClient>
AzureClustersMetadata::GetAzureClient(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAzureClient(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClientsResponse>
AzureClustersMetadata::ListAzureClients(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAzureClients(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncDeleteAzureClient(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAzureClient(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncCreateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAzureCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncUpdateAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
        request) {
  SetMetadata(*context, "azure_cluster.name=" + request.azure_cluster().name());
  return child_->AsyncUpdateAzureCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>
AzureClustersMetadata::GetAzureCluster(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAzureCluster(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureClustersResponse>
AzureClustersMetadata::ListAzureClusters(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAzureClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncDeleteAzureCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAzureCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
AzureClustersMetadata::GenerateAzureAccessToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
        request) {
  SetMetadata(context, "azure_cluster=" + request.azure_cluster());
  return child_->GenerateAzureAccessToken(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncCreateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAzureNodePool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncUpdateAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
        request) {
  SetMetadata(*context,
              "azure_node_pool.name=" + request.azure_node_pool().name());
  return child_->AsyncUpdateAzureNodePool(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>
AzureClustersMetadata::GetAzureNodePool(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAzureNodePool(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAzureNodePoolsResponse>
AzureClustersMetadata::ListAzureNodePools(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAzureNodePools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncDeleteAzureNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAzureNodePool(cq, std::move(context), request);
}

StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
AzureClustersMetadata::GetAzureServerConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAzureServerConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AzureClustersMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AzureClustersMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AzureClustersMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AzureClustersMetadata::SetMetadata(grpc::ClientContext& context) {
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
