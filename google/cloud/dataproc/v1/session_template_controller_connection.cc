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
// source: google/cloud/dataproc/v1/session_templates.proto

#include "google/cloud/dataproc/v1/session_template_controller_connection.h"
#include "google/cloud/dataproc/v1/internal/session_template_controller_connection_impl.h"
#include "google/cloud/dataproc/v1/internal/session_template_controller_option_defaults.h"
#include "google/cloud/dataproc/v1/internal/session_template_controller_stub_factory.h"
#include "google/cloud/dataproc/v1/internal/session_template_controller_tracing_connection.h"
#include "google/cloud/dataproc/v1/session_template_controller_options.h"
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
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionTemplateControllerConnection::~SessionTemplateControllerConnection() =
    default;

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerConnection::CreateSessionTemplate(
    google::cloud::dataproc::v1::CreateSessionTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerConnection::UpdateSessionTemplate(
    google::cloud::dataproc::v1::UpdateSessionTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerConnection::GetSessionTemplate(
    google::cloud::dataproc::v1::GetSessionTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerConnection::ListSessionTemplates(
    google::cloud::dataproc::v1::
        ListSessionTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dataproc::v1::SessionTemplate>>();
}

Status SessionTemplateControllerConnection::DeleteSessionTemplate(
    google::cloud::dataproc::v1::DeleteSessionTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
SessionTemplateControllerConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
SessionTemplateControllerConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SessionTemplateControllerConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
SessionTemplateControllerConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
SessionTemplateControllerConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SessionTemplateControllerConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SessionTemplateControllerConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SessionTemplateControllerConnection>
MakeSessionTemplateControllerConnection(std::string const& location,
                                        Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SessionTemplateControllerPolicyOptionList>(
      options, __func__);
  options = dataproc_v1_internal::SessionTemplateControllerDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dataproc_v1_internal::CreateDefaultSessionTemplateControllerStub(
      std::move(auth), options);
  return dataproc_v1_internal::MakeSessionTemplateControllerTracingConnection(
      std::make_shared<
          dataproc_v1_internal::SessionTemplateControllerConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
