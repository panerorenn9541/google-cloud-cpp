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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection.h"
#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_options.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_connection_impl.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_option_defaults.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_stub_factory.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace redis_cluster_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudRedisClusterConnection::~CloudRedisClusterConnection() = default;

StreamRange<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterConnection::ListClusters(
    google::cloud::redis::cluster::v1::
        ListClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::redis::cluster::v1::Cluster>>();
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterConnection::GetCluster(
    google::cloud::redis::cluster::v1::GetClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnection::UpdateCluster(
    google::cloud::redis::cluster::v1::UpdateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnection::UpdateCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnection::UpdateCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Any>>
CloudRedisClusterConnection::DeleteCluster(
    google::cloud::redis::cluster::v1::DeleteClusterRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Any>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnection::DeleteCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Any>>
CloudRedisClusterConnection::DeleteCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Any>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnection::CreateCluster(
    google::cloud::redis::cluster::v1::CreateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnection::CreateCluster(
    NoAwaitTag,
    google::cloud::redis::cluster::v1::CreateClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterConnection::CreateCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::redis::cluster::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>
CloudRedisClusterConnection::GetClusterCertificateAuthority(
    google::cloud::redis::cluster::v1::
        GetClusterCertificateAuthorityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
CloudRedisClusterConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location>
CloudRedisClusterConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
CloudRedisClusterConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudRedisClusterConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudRedisClusterConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudRedisClusterConnection> MakeCloudRedisClusterConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudRedisClusterPolicyOptionList>(options,
                                                                    __func__);
  options = redis_cluster_v1_internal::CloudRedisClusterDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = redis_cluster_v1_internal::CreateDefaultCloudRedisClusterStub(
      std::move(auth), options);
  return redis_cluster_v1_internal::MakeCloudRedisClusterTracingConnection(
      std::make_shared<
          redis_cluster_v1_internal::CloudRedisClusterConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1
}  // namespace cloud
}  // namespace google
