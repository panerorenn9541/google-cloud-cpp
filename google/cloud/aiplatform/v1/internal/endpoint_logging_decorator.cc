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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/endpoint_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/endpoint_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EndpointServiceLogging::EndpointServiceLogging(
    std::shared_ptr<EndpointServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncCreateEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
        return child_->AsyncCreateEndpoint(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::CreateEndpoint(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
        return child_->CreateEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceLogging::GetEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetEndpointRequest const& request) {
        return child_->GetEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListEndpointsResponse>
EndpointServiceLogging::ListEndpoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListEndpointsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListEndpointsRequest const& request) {
        return child_->ListEndpoints(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceLogging::UpdateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateEndpointRequest const& request) {
        return child_->UpdateEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncUpdateEndpointLongRunning(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
              request) {
        return child_->AsyncUpdateEndpointLongRunning(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EndpointServiceLogging::UpdateEndpointLongRunning(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
              request) {
        return child_->UpdateEndpointLongRunning(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncDeleteEndpoint(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
        return child_->AsyncDeleteEndpoint(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::DeleteEndpoint(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
        return child_->DeleteEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncDeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::DeployModelRequest const& request) {
        return child_->AsyncDeployModel(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::DeployModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::DeployModelRequest const& request) {
        return child_->DeployModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncUndeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
        return child_->AsyncUndeployModel(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::UndeployModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
        return child_->UndeployModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncMutateDeployedModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::aiplatform::v1::MutateDeployedModelRequest const&
                 request) {
        return child_->AsyncMutateDeployedModel(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EndpointServiceLogging::MutateDeployedModel(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::MutateDeployedModelRequest const&
                 request) {
        return child_->MutateDeployedModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EndpointServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location> EndpointServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> EndpointServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> EndpointServiceLogging::GetIamPolicy(
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
EndpointServiceLogging::TestIamPermissions(
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
EndpointServiceLogging::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::ListOperationsRequest const& request) {
        return child_->ListOperations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->GetOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status EndpointServiceLogging::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return child_->DeleteOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status EndpointServiceLogging::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::longrunning::Operation> EndpointServiceLogging::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::WaitOperationRequest const& request) {
        return child_->WaitOperation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EndpointServiceLogging::AsyncGetOperation(
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

future<Status> EndpointServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
