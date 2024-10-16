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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_STUB_H

#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudFilestoreManagerTracingStub : public CloudFilestoreManagerStub {
 public:
  ~CloudFilestoreManagerTracingStub() override = default;

  explicit CloudFilestoreManagerTracingStub(
      std::shared_ptr<CloudFilestoreManagerStub> child);

  StatusOr<google::cloud::filestore::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::CreateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RestoreInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRevertInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::RevertInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RevertInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::RevertInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListSnapshotsResponse> ListSnapshots(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::ListSnapshotsRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Snapshot> GetSnapshot(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::GetSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::filestore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::filestore::v1::UpdateBackupRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateBackup(
      grpc::ClientContext& context, Options options,
      google::cloud::filestore::v1::UpdateBackupRequest const& request)
      override;

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
  std::shared_ptr<CloudFilestoreManagerStub> child_;
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
std::shared_ptr<CloudFilestoreManagerStub> MakeCloudFilestoreManagerTracingStub(
    std::shared_ptr<CloudFilestoreManagerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_TRACING_STUB_H
