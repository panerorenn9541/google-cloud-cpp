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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networksecurity/v1/network_security.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkSecurityLogging::NetworkSecurityLogging(
    std::shared_ptr<NetworkSecurityStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
NetworkSecurityLogging::ListAuthorizationPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 ListAuthorizationPoliciesRequest const& request) {
        return child_->ListAuthorizationPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityLogging::GetAuthorizationPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 GetAuthorizationPolicyRequest const& request) {
        return child_->GetAuthorizationPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 CreateAuthorizationPolicyRequest const& request) {
        return child_->AsyncCreateAuthorizationPolicy(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::CreateAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 CreateAuthorizationPolicyRequest const& request) {
        return child_->CreateAuthorizationPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 UpdateAuthorizationPolicyRequest const& request) {
        return child_->AsyncUpdateAuthorizationPolicy(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::UpdateAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 UpdateAuthorizationPolicyRequest const& request) {
        return child_->UpdateAuthorizationPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteAuthorizationPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 DeleteAuthorizationPolicyRequest const& request) {
        return child_->AsyncDeleteAuthorizationPolicy(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::DeleteAuthorizationPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 DeleteAuthorizationPolicyRequest const& request) {
        return child_->DeleteAuthorizationPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
NetworkSecurityLogging::ListServerTlsPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 ListServerTlsPoliciesRequest const& request) {
        return child_->ListServerTlsPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityLogging::GetServerTlsPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
              request) {
        return child_->GetServerTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 CreateServerTlsPolicyRequest const& request) {
        return child_->AsyncCreateServerTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::CreateServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 CreateServerTlsPolicyRequest const& request) {
        return child_->CreateServerTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 UpdateServerTlsPolicyRequest const& request) {
        return child_->AsyncUpdateServerTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::UpdateServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 UpdateServerTlsPolicyRequest const& request) {
        return child_->UpdateServerTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteServerTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 DeleteServerTlsPolicyRequest const& request) {
        return child_->AsyncDeleteServerTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::DeleteServerTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 DeleteServerTlsPolicyRequest const& request) {
        return child_->DeleteServerTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
NetworkSecurityLogging::ListClientTlsPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 ListClientTlsPoliciesRequest const& request) {
        return child_->ListClientTlsPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityLogging::GetClientTlsPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
              request) {
        return child_->GetClientTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncCreateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 CreateClientTlsPolicyRequest const& request) {
        return child_->AsyncCreateClientTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::CreateClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 CreateClientTlsPolicyRequest const& request) {
        return child_->CreateClientTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncUpdateClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 UpdateClientTlsPolicyRequest const& request) {
        return child_->AsyncUpdateClientTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::UpdateClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 UpdateClientTlsPolicyRequest const& request) {
        return child_->UpdateClientTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncDeleteClientTlsPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::networksecurity::v1::
                 DeleteClientTlsPolicyRequest const& request) {
        return child_->AsyncDeleteClientTlsPolicy(cq, std::move(context),
                                                  std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
NetworkSecurityLogging::DeleteClientTlsPolicy(
    grpc::ClientContext& context, Options options,
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::networksecurity::v1::
                 DeleteClientTlsPolicyRequest const& request) {
        return child_->DeleteClientTlsPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
NetworkSecurityLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> NetworkSecurityLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> NetworkSecurityLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> NetworkSecurityLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
NetworkSecurityLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::ListOperationsResponse>
NetworkSecurityLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> NetworkSecurityLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status NetworkSecurityLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status NetworkSecurityLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetworkSecurityLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> NetworkSecurityLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
