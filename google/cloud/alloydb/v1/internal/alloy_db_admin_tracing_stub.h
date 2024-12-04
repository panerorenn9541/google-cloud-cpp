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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_TRACING_STUB_H

#include "google/cloud/alloydb/v1/internal/alloy_db_admin_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AlloyDBAdminTracingStub : public AlloyDBAdminStub {
 public:
  ~AlloyDBAdminTracingStub() override = default;

  explicit AlloyDBAdminTracingStub(std::shared_ptr<AlloyDBAdminStub> child);

  StatusOr<google::cloud::alloydb::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListClustersRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Cluster> GetCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GetClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::CreateClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::CreateClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::UpdateClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::UpdateClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::DeleteClusterRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::DeleteClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPromoteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::PromoteClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> PromoteCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::PromoteClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncSwitchoverCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::SwitchoverClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> SwitchoverCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::SwitchoverClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::RestoreClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RestoreCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::RestoreClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSecondaryCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSecondaryCluster(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request)
      override;

  StatusOr<google::cloud::alloydb::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListInstancesRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::CreateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSecondaryInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSecondaryInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateInstances(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchCreateInstances(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::UpdateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncFailoverInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::FailoverInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> FailoverInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncInjectFault(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::InjectFaultRequest const& request) override;

  StatusOr<google::longrunning::Operation> InjectFault(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::InjectFaultRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::RestartInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RestartInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::RestartInstanceRequest const& request)
      override;

  StatusOr<google::cloud::alloydb::v1::ExecuteSqlResponse> ExecuteSql(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ExecuteSqlRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::CreateBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::CreateBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::UpdateBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::UpdateBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::alloydb::v1::DeleteBackupRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::alloydb::v1::DeleteBackupRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse>
  ListSupportedDatabaseFlags(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
          request) override;

  StatusOr<google::cloud::alloydb::v1::GenerateClientCertificateResponse>
  GenerateClientCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GenerateClientCertificateRequest const&
          request) override;

  StatusOr<google::cloud::alloydb::v1::ConnectionInfo> GetConnectionInfo(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GetConnectionInfoRequest const& request)
      override;

  StatusOr<google::cloud::alloydb::v1::ListUsersResponse> ListUsers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListUsersRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::User> GetUser(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::GetUserRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::User> CreateUser(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::CreateUserRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::User> UpdateUser(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::UpdateUserRequest const& request) override;

  Status DeleteUser(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::DeleteUserRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::ListDatabasesResponse> ListDatabases(
      grpc::ClientContext& context, Options const& options,
      google::cloud::alloydb::v1::ListDatabasesRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<AlloyDBAdminStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<AlloyDBAdminStub> MakeAlloyDBAdminTracingStub(
    std::shared_ptr<AlloyDBAdminStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_TRACING_STUB_H
