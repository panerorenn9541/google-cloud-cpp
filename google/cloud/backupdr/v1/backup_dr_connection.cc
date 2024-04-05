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
// source: google/cloud/backupdr/v1/backupdr.proto

#include "google/cloud/backupdr/v1/backup_dr_connection.h"
#include "google/cloud/backupdr/v1/backup_dr_options.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_connection_impl.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_option_defaults.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_stub_factory.h"
#include "google/cloud/backupdr/v1/internal/backup_dr_tracing_connection.h"
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
namespace backupdr_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackupDRConnection::~BackupDRConnection() = default;

StreamRange<google::cloud::backupdr::v1::ManagementServer>
BackupDRConnection::ListManagementServers(
    google::cloud::backupdr::v1::
        ListManagementServersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::backupdr::v1::ManagementServer>>();
}

StatusOr<google::cloud::backupdr::v1::ManagementServer>
BackupDRConnection::GetManagementServer(
    google::cloud::backupdr::v1::GetManagementServerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::backupdr::v1::ManagementServer>>
BackupDRConnection::CreateManagementServer(
    google::cloud::backupdr::v1::CreateManagementServerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::backupdr::v1::ManagementServer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::backupdr::v1::OperationMetadata>>
BackupDRConnection::DeleteManagementServer(
    google::cloud::backupdr::v1::DeleteManagementServerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::backupdr::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<BackupDRConnection> MakeBackupDRConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 BackupDRPolicyOptionList>(options, __func__);
  options = backupdr_v1_internal::BackupDRDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      backupdr_v1_internal::CreateDefaultBackupDRStub(std::move(auth), options);
  return backupdr_v1_internal::MakeBackupDRTracingConnection(
      std::make_shared<backupdr_v1_internal::BackupDRConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1
}  // namespace cloud
}  // namespace google
