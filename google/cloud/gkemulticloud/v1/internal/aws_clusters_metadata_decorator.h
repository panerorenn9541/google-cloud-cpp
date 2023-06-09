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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_METADATA_DECORATOR_H

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AwsClustersMetadata : public AwsClustersStub {
 public:
  ~AwsClustersMetadata() override = default;
  explicit AwsClustersMetadata(
      std::shared_ptr<AwsClustersStub> child,
      std::multimap<std::string, std::string> fixed_metadata = {});

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
  ListAwsClusters(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
  ListAwsNodePools(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAwsNodePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<AwsClustersStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_METADATA_DECORATOR_H
