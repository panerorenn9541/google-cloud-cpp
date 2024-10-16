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
// source: google/cloud/alloydb/v1/service.proto

#include "google/cloud/alloydb/v1/alloy_db_admin_connection.h"
#include "google/cloud/alloydb/v1/alloy_db_admin_options.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_connection_impl.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_option_defaults.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_stub_factory.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_tracing_connection.h"
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
namespace alloydb_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlloyDBAdminConnection::~AlloyDBAdminConnection() = default;

StreamRange<google::cloud::alloydb::v1::Cluster>
AlloyDBAdminConnection::ListClusters(
    google::cloud::alloydb::v1::
        ListClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::alloydb::v1::Cluster>>();
}

StatusOr<google::cloud::alloydb::v1::Cluster>
AlloyDBAdminConnection::GetCluster(
    google::cloud::alloydb::v1::GetClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::CreateCluster(
    google::cloud::alloydb::v1::CreateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::CreateCluster(
    NoAwaitTag, google::cloud::alloydb::v1::CreateClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::CreateCluster(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::UpdateCluster(
    google::cloud::alloydb::v1::UpdateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::UpdateCluster(
    NoAwaitTag, google::cloud::alloydb::v1::UpdateClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::UpdateCluster(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteCluster(
    google::cloud::alloydb::v1::DeleteClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::DeleteCluster(
    NoAwaitTag, google::cloud::alloydb::v1::DeleteClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteCluster(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::PromoteCluster(
    google::cloud::alloydb::v1::PromoteClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::PromoteCluster(
    NoAwaitTag, google::cloud::alloydb::v1::PromoteClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::PromoteCluster(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::RestoreCluster(
    google::cloud::alloydb::v1::RestoreClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::RestoreCluster(
    NoAwaitTag, google::cloud::alloydb::v1::RestoreClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::RestoreCluster(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::CreateSecondaryCluster(
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminConnection::CreateSecondaryCluster(
    NoAwaitTag,
    google::cloud::alloydb::v1::CreateSecondaryClusterRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Cluster>>
AlloyDBAdminConnection::CreateSecondaryCluster(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::alloydb::v1::Instance>
AlloyDBAdminConnection::ListInstances(
    google::cloud::alloydb::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::alloydb::v1::Instance>>();
}

StatusOr<google::cloud::alloydb::v1::Instance>
AlloyDBAdminConnection::GetInstance(
    google::cloud::alloydb::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::CreateInstance(
    google::cloud::alloydb::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::CreateInstance(
    NoAwaitTag, google::cloud::alloydb::v1::CreateInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::CreateInstance(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::CreateSecondaryInstance(
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminConnection::CreateSecondaryInstance(
    NoAwaitTag,
    google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::CreateSecondaryInstance(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>
AlloyDBAdminConnection::BatchCreateInstances(
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminConnection::BatchCreateInstances(
    NoAwaitTag,
    google::cloud::alloydb::v1::BatchCreateInstancesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>
AlloyDBAdminConnection::BatchCreateInstances(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::UpdateInstance(
    google::cloud::alloydb::v1::UpdateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::UpdateInstance(
    NoAwaitTag, google::cloud::alloydb::v1::UpdateInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::UpdateInstance(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteInstance(
    google::cloud::alloydb::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::DeleteInstance(
    NoAwaitTag, google::cloud::alloydb::v1::DeleteInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteInstance(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::FailoverInstance(
    google::cloud::alloydb::v1::FailoverInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminConnection::FailoverInstance(
    NoAwaitTag, google::cloud::alloydb::v1::FailoverInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::FailoverInstance(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::InjectFault(
    google::cloud::alloydb::v1::InjectFaultRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::InjectFault(
    NoAwaitTag, google::cloud::alloydb::v1::InjectFaultRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::InjectFault(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::RestartInstance(
    google::cloud::alloydb::v1::RestartInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
AlloyDBAdminConnection::RestartInstance(
    NoAwaitTag, google::cloud::alloydb::v1::RestartInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Instance>>
AlloyDBAdminConnection::RestartInstance(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::alloydb::v1::Backup>
AlloyDBAdminConnection::ListBackups(
    google::cloud::alloydb::v1::
        ListBackupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::alloydb::v1::Backup>>();
}

StatusOr<google::cloud::alloydb::v1::Backup> AlloyDBAdminConnection::GetBackup(
    google::cloud::alloydb::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminConnection::CreateBackup(
    google::cloud::alloydb::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::CreateBackup(
    NoAwaitTag, google::cloud::alloydb::v1::CreateBackupRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminConnection::CreateBackup(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminConnection::UpdateBackup(
    google::cloud::alloydb::v1::UpdateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::UpdateBackup(
    NoAwaitTag, google::cloud::alloydb::v1::UpdateBackupRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::Backup>>
AlloyDBAdminConnection::UpdateBackup(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteBackup(
    google::cloud::alloydb::v1::DeleteBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::DeleteBackup(
    NoAwaitTag, google::cloud::alloydb::v1::DeleteBackupRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
AlloyDBAdminConnection::DeleteBackup(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::alloydb::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>
AlloyDBAdminConnection::ListSupportedDatabaseFlags(
    google::cloud::alloydb::v1::
        ListSupportedDatabaseFlagsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>>();
}

StatusOr<google::cloud::alloydb::v1::GenerateClientCertificateResponse>
AlloyDBAdminConnection::GenerateClientCertificate(
    google::cloud::alloydb::v1::GenerateClientCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::alloydb::v1::ConnectionInfo>
AlloyDBAdminConnection::GetConnectionInfo(
    google::cloud::alloydb::v1::GetConnectionInfoRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::alloydb::v1::User> AlloyDBAdminConnection::ListUsers(
    google::cloud::alloydb::v1::
        ListUsersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::alloydb::v1::User>>();
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminConnection::GetUser(
    google::cloud::alloydb::v1::GetUserRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminConnection::CreateUser(
    google::cloud::alloydb::v1::CreateUserRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::alloydb::v1::User> AlloyDBAdminConnection::UpdateUser(
    google::cloud::alloydb::v1::UpdateUserRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AlloyDBAdminConnection::DeleteUser(
    google::cloud::alloydb::v1::DeleteUserRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
AlloyDBAdminConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location> AlloyDBAdminConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
AlloyDBAdminConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation> AlloyDBAdminConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AlloyDBAdminConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AlloyDBAdminConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AlloyDBAdminConnection> MakeAlloyDBAdminConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AlloyDBAdminPolicyOptionList>(options,
                                                               __func__);
  options = alloydb_v1_internal::AlloyDBAdminDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = alloydb_v1_internal::CreateDefaultAlloyDBAdminStub(
      std::move(auth), options);
  return alloydb_v1_internal::MakeAlloyDBAdminTracingConnection(
      std::make_shared<alloydb_v1_internal::AlloyDBAdminConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1
}  // namespace cloud
}  // namespace google
