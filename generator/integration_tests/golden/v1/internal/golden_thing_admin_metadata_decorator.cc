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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminMetadata::GoldenThingAdminMetadata(
    std::shared_ptr<GoldenThingAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::test::admin::database::v1::ListDatabasesResponse>
GoldenThingAdminMetadata::ListDatabases(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListDatabasesRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabases(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncCreateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  SetMetadata(*context, *options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDatabase(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminMetadata::CreateDatabase(
    grpc::ClientContext& context,
    Options options,
    google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDatabase(context, options, request);
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminMetadata::GetDatabase(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetDatabaseRequest const& request) {
  SetMetadata(context, options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDatabase(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncUpdateDatabaseDdl(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  SetMetadata(*context, *options, absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->AsyncUpdateDatabaseDdl(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminMetadata::UpdateDatabaseDdl(
    grpc::ClientContext& context,
    Options options,
    google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  SetMetadata(context, options, absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->UpdateDatabaseDdl(context, options, request);
}

Status
GoldenThingAdminMetadata::DropDatabase(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::DropDatabaseRequest const& request) {
  std::vector<std::string> params;
  params.reserve(3);

  static auto* project_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "project=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"(projects/[^/]+)/instances/[^/]+/databases/[^/]+", std::regex::optimize}},
      }};
  }();
  project_matcher->AppendParam(request, params);

  static auto* instance_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "instance=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"projects/[^/]+/(instances/[^/]+)/databases/[^/]+", std::regex::optimize}},
      }};
  }();
  instance_matcher->AppendParam(request, params);

  static auto* database_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "database=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"projects/[^/]+/instances/[^/]+/(databases/[^/]+)", std::regex::optimize}},
      }};
  }();
  database_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DropDatabase(context, options, request);
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminMetadata::GetDatabaseDdl(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
  SetMetadata(context, options, absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->GetDatabaseDdl(context, options, request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, options, absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, options, absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, options, absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::CreateBackupRequest const& request) {
  SetMetadata(*context, *options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateBackup(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminMetadata::CreateBackup(
    grpc::ClientContext& context,
    Options options,
    google::test::admin::database::v1::CreateBackupRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBackup(context, options, request);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminMetadata::GetBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GetBackupRequest const& request) {
  SetMetadata(context, options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackup(context, options, request);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminMetadata::UpdateBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::UpdateBackupRequest const& request) {
  SetMetadata(context, options, absl::StrCat("backup.name=", internal::UrlEncode(request.backup().name())));
  return child_->UpdateBackup(context, options, request);
}

Status
GoldenThingAdminMetadata::DeleteBackup(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::DeleteBackupRequest const& request) {
  SetMetadata(context, options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBackup(context, options, request);
}

StatusOr<google::test::admin::database::v1::ListBackupsResponse>
GoldenThingAdminMetadata::ListBackups(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListBackupsRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackups(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncRestoreDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  SetMetadata(*context, *options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRestoreDatabase(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminMetadata::RestoreDatabase(
    grpc::ClientContext& context,
    Options options,
    google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->RestoreDatabase(context, options, request);
}

StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse>
GoldenThingAdminMetadata::ListDatabaseOperations(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabaseOperations(context, options, request);
}

StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse>
GoldenThingAdminMetadata::ListBackupOperations(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
  SetMetadata(context, options, absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackupOperations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncLongRunningWithoutRouting(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  SetMetadata(*context, *options);
  return child_->AsyncLongRunningWithoutRouting(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
GoldenThingAdminMetadata::LongRunningWithoutRouting(
    grpc::ClientContext& context,
    Options options,
    google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  SetMetadata(context, options);
  return child_->LongRunningWithoutRouting(context, options, request);
}

StatusOr<google::cloud::location::Location>
GoldenThingAdminMetadata::GetLocation(
    grpc::ClientContext& context,
    Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
GoldenThingAdminMetadata::ListOperations(
    grpc::ClientContext& context,
    Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminMetadata::AsyncGetDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::GetDatabaseRequest const& request) {
  SetMetadata(*context, *options, absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetDatabase(
      cq, std::move(context), std::move(options), request);
}

future<Status>
GoldenThingAdminMetadata::AsyncDropDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::test::admin::database::v1::DropDatabaseRequest const& request) {
  std::vector<std::string> params;
  params.reserve(3);

  static auto* project_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "project=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"(projects/[^/]+)/instances/[^/]+/databases/[^/]+", std::regex::optimize}},
      }};
  }();
  project_matcher->AppendParam(request, params);

  static auto* instance_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "instance=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"projects/[^/]+/(instances/[^/]+)/databases/[^/]+", std::regex::optimize}},
      }};
  }();
  instance_matcher->AppendParam(request, params);

  static auto* database_matcher = []{
    return new google::cloud::internal::RoutingMatcher<google::test::admin::database::v1::DropDatabaseRequest>{
      "database=", {
      {[](google::test::admin::database::v1::DropDatabaseRequest const& request) -> std::string const& {
        return request.database();
      },
      std::regex{"projects/[^/]+/instances/[^/]+/(databases/[^/]+)", std::regex::optimize}},
      }};
  }();
  database_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncDropDatabase(
      cq, std::move(context), std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(
      cq, std::move(context), std::move(options), request);
}

future<Status> GoldenThingAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(
      cq, std::move(context), std::move(options), request);
}

void GoldenThingAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void GoldenThingAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(
      context, options, fixed_metadata_, api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
