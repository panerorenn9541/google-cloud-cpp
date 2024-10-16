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
// source: google/cloud/resourcemanager/v3/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_PROJECTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_PROJECTS_CONNECTION_IMPL_H

#include "google/cloud/resourcemanager/v3/internal/projects_retry_traits.h"
#include "google/cloud/resourcemanager/v3/internal/projects_stub.h"
#include "google/cloud/resourcemanager/v3/projects_connection.h"
#include "google/cloud/resourcemanager/v3/projects_connection_idempotency_policy.h"
#include "google/cloud/resourcemanager/v3/projects_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProjectsConnectionImpl : public resourcemanager_v3::ProjectsConnection {
 public:
  ~ProjectsConnectionImpl() override = default;

  ProjectsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_v3_internal::ProjectsStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::resourcemanager::v3::Project> GetProject(
      google::cloud::resourcemanager::v3::GetProjectRequest const& request)
      override;

  StreamRange<google::cloud::resourcemanager::v3::Project> ListProjects(
      google::cloud::resourcemanager::v3::ListProjectsRequest request) override;

  StreamRange<google::cloud::resourcemanager::v3::Project> SearchProjects(
      google::cloud::resourcemanager::v3::SearchProjectsRequest request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> CreateProject(
      google::cloud::resourcemanager::v3::CreateProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateProject(
      NoAwaitTag,
      google::cloud::resourcemanager::v3::CreateProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> CreateProject(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UpdateProject(
      google::cloud::resourcemanager::v3::UpdateProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateProject(
      NoAwaitTag,
      google::cloud::resourcemanager::v3::UpdateProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UpdateProject(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> MoveProject(
      google::cloud::resourcemanager::v3::MoveProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> MoveProject(
      NoAwaitTag,
      google::cloud::resourcemanager::v3::MoveProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> MoveProject(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> DeleteProject(
      google::cloud::resourcemanager::v3::DeleteProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteProject(
      NoAwaitTag,
      google::cloud::resourcemanager::v3::DeleteProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> DeleteProject(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UndeleteProject(
      google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteProject(
      NoAwaitTag,
      google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UndeleteProject(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcemanager_v3_internal::ProjectsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_PROJECTS_CONNECTION_IMPL_H
