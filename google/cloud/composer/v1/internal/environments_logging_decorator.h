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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_LOGGING_DECORATOR_H

#include "google/cloud/composer/v1/internal/environments_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsLogging : public EnvironmentsStub {
 public:
  ~EnvironmentsLogging() override = default;
  EnvironmentsLogging(std::shared_ptr<EnvironmentsStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(grpc::ClientContext& context, Options const& options,
                 google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ExecuteAirflowCommandResponse>
  ExecuteAirflowCommand(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ExecuteAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               StopAirflowCommandResponse>
  StopAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         StopAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               PollAirflowCommandResponse>
  PollAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         PollAirflowCommandRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context, Options const& options,
                google::cloud::orchestration::airflow::service::v1::
                    ListWorkloadsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCheckUpgrade(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CheckUpgrade(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  CreateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsSecretRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  GetUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsSecretsResponse>
  ListUserWorkloadsSecrets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsSecretsRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  UpdateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsSecretRequest const& request) override;

  Status DeleteUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  CreateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  GetUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsConfigMapsResponse>
  ListUserWorkloadsConfigMaps(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsConfigMapsRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  UpdateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsConfigMapRequest const& request) override;

  Status DeleteUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsConfigMapRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSaveSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> SaveSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncLoadSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> LoadSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDatabaseFailover(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) override;

  StatusOr<google::longrunning::Operation> DatabaseFailover(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               FetchDatabasePropertiesResponse>
  FetchDatabaseProperties(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          FetchDatabasePropertiesRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

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
  std::shared_ptr<EnvironmentsStub> child_;
  TracingOptions tracing_options_;
};  // EnvironmentsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_LOGGING_DECORATOR_H
