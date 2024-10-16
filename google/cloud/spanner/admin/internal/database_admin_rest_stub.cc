// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.pb.h>
#include <google/spanner/admin/database/v1/spanner_database_admin.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultDatabaseAdminRestStub::DefaultDatabaseAdminRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<rest_internal::LongrunningEndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultDatabaseAdminRestStub::DefaultDatabaseAdminRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DefaultDatabaseAdminRestStub::ListDatabases(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabasesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databases"),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCreateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "databases"),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::CreateDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databases"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::Database>
DefaultDatabaseAdminRestStub::GetDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::spanner::admin::database::v1::Database>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncUpdateDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request.database(), false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.database().name()),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::UpdateDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Patch<google::longrunning::Operation>(
      *service_, rest_context, request.database(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database().name()),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncUpdateDatabaseDdl(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.database(), "/", "ddl"),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::UpdateDatabaseDdl(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Patch<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database(), "/", "ddl"),
      std::move(query_params));
}

Status DefaultDatabaseAdminRestStub::DropDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database()),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DefaultDatabaseAdminRestStub::GetDatabaseDdl(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<
      google::spanner::admin::database::v1::GetDatabaseDdlResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.database(), "/", "ddl"),
      std::move(query_params));
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":setIamPolicy"),
      std::move(query_params));
}

StatusOr<google::iam::v1::Policy> DefaultDatabaseAdminRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":getIamPolicy"),
      std::move(query_params));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDatabaseAdminRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::iam::v1::TestIamPermissionsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":testIamPermissions"),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCreateBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        query_params.push_back({"backup_id", request.backup_id()});
        query_params =
            rest_internal::TrimEmptyQueryParameters(std::move(query_params));
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request.backup(), false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "backups"),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::CreateBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"backup_id", request.backup_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request.backup(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backups"),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncCopyBackup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "backups", ":copy"),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::CopyBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backups", ":copy"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminRestStub::GetBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::spanner::admin::database::v1::Backup>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DefaultDatabaseAdminRestStub::UpdateBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Patch<google::spanner::admin::database::v1::Backup>(
      *service_, rest_context, request.backup(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.backup().name()),
      std::move(query_params));
}

Status DefaultDatabaseAdminRestStub::DeleteBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DefaultDatabaseAdminRestStub::ListBackups(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListBackupsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backups"),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncRestoreDatabase(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        std::vector<std::pair<std::string, std::string>> query_params;
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "databases", ":restore"),
            std::move(query_params)));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::RestoreDatabase(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databases", ":restore"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DefaultDatabaseAdminRestStub::ListDatabaseOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabaseOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databaseOperations"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DefaultDatabaseAdminRestStub::ListBackupOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListBackupOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backupOperations"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DefaultDatabaseAdminRestStub::ListDatabaseRoles(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListDatabaseRolesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "databaseRoles"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::BackupSchedule>
DefaultDatabaseAdminRestStub::CreateBackupSchedule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::CreateBackupScheduleRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"backup_schedule_id", request.backup_schedule_id()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Post<
      google::spanner::admin::database::v1::BackupSchedule>(
      *service_, rest_context, request.backup_schedule(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backupSchedules"),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::BackupSchedule>
DefaultDatabaseAdminRestStub::GetBackupSchedule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::GetBackupScheduleRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<
      google::spanner::admin::database::v1::BackupSchedule>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::BackupSchedule>
DefaultDatabaseAdminRestStub::UpdateBackupSchedule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::UpdateBackupScheduleRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Patch<
      google::spanner::admin::database::v1::BackupSchedule>(
      *service_, rest_context, request.backup_schedule(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.backup_schedule().name()),
      std::move(query_params));
}

Status DefaultDatabaseAdminRestStub::DeleteBackupSchedule(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::DeleteBackupScheduleRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

StatusOr<google::spanner::admin::database::v1::ListBackupSchedulesResponse>
DefaultDatabaseAdminRestStub::ListBackupSchedules(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::database::v1::ListBackupSchedulesRequest const&
        request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<
      google::spanner::admin::database::v1::ListBackupSchedulesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "backupSchedules"),
      std::move(query_params));
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultDatabaseAdminRestStub::ListOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  query_params.push_back({"filter", request.filter()});
  query_params.push_back({"page_size", std::to_string(request.page_size())});
  query_params.push_back({"page_token", request.page_token()});
  query_params =
      rest_internal::TrimEmptyQueryParameters(std::move(query_params));
  return rest_internal::Get<google::longrunning::ListOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

StatusOr<google::longrunning::Operation>
DefaultDatabaseAdminRestStub::GetOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Get<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

Status DefaultDatabaseAdminRestStub::DeleteOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      std::move(query_params));
}

Status DefaultDatabaseAdminRestStub::CancelOperation(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  std::vector<std::pair<std::string, std::string>> query_params;
  return rest_internal::Post<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name(), ":cancel"),
      std::move(query_params));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatabaseAdminRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Get<google::longrunning::Operation>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultDatabaseAdminRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name(), ":cancel")));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
