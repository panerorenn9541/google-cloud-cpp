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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_TEMPLATE_CONTROLLER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_TEMPLATE_CONTROLLER_LOGGING_DECORATOR_H

#include "google/cloud/dataproc/v1/internal/session_template_controller_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SessionTemplateControllerLogging : public SessionTemplateControllerStub {
 public:
  ~SessionTemplateControllerLogging() override = default;
  SessionTemplateControllerLogging(
      std::shared_ptr<SessionTemplateControllerStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  StatusOr<google::cloud::dataproc::v1::SessionTemplate> CreateSessionTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::CreateSessionTemplateRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::SessionTemplate> UpdateSessionTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::UpdateSessionTemplateRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::SessionTemplate> GetSessionTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::GetSessionTemplateRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::ListSessionTemplatesResponse>
  ListSessionTemplates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::ListSessionTemplatesRequest const& request)
      override;

  Status DeleteSessionTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::DeleteSessionTemplateRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

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

 private:
  std::shared_ptr<SessionTemplateControllerStub> child_;
  TracingOptions tracing_options_;
};  // SessionTemplateControllerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_SESSION_TEMPLATE_CONTROLLER_LOGGING_DECORATOR_H
