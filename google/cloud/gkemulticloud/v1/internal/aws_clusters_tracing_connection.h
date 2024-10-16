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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/aws_clusters_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AwsClustersTracingConnection
    : public gkemulticloud_v1::AwsClustersConnection {
 public:
  ~AwsClustersTracingConnection() override = default;

  explicit AwsClustersTracingConnection(
      std::shared_ptr<gkemulticloud_v1::AwsClustersConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  CreateAwsCluster(
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAwsCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  CreateAwsCluster(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  UpdateAwsCluster(
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAwsCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  UpdateAwsCluster(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AwsCluster> ListAwsClusters(
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsCluster(
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAwsCluster(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsCluster(google::longrunning::Operation const& operation) override;

  StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
  GenerateAwsClusterAgentToken(
      google::cloud::gkemulticloud::v1::
          GenerateAwsClusterAgentTokenRequest const& request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  CreateAwsNodePool(
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateAwsNodePool(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  CreateAwsNodePool(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  UpdateAwsNodePool(
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateAwsNodePool(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  UpdateAwsNodePool(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  RollbackAwsNodePoolUpdate(
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RollbackAwsNodePoolUpdate(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  RollbackAwsNodePoolUpdate(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool> GetAwsNodePool(
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool> ListAwsNodePools(
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsNodePool(
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteAwsNodePool(
      NoAwaitTag,
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsNodePool(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
  GetAwsOpenIdConfig(
      google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys> GetAwsJsonWebKeys(
      google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<gkemulticloud_v1::AwsClustersConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<gkemulticloud_v1::AwsClustersConnection>
MakeAwsClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AwsClustersConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AWS_CLUSTERS_TRACING_CONNECTION_H
