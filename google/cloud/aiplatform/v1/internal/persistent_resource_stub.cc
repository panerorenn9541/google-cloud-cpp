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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#include "google/cloud/aiplatform/v1/internal/persistent_resource_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/persistent_resource_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PersistentResourceServiceStub::~PersistentResourceServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultPersistentResourceServiceStub::AsyncCreatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreatePersistentResourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreatePersistentResource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::CreatePersistentResource(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreatePersistentResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::PersistentResource>
DefaultPersistentResourceServiceStub::GetPersistentResource(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetPersistentResourceRequest const&
        request) {
  google::cloud::aiplatform::v1::PersistentResource response;
  auto status = grpc_stub_->GetPersistentResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListPersistentResourcesResponse>
DefaultPersistentResourceServiceStub::ListPersistentResources(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListPersistentResourcesRequest const&
        request) {
  google::cloud::aiplatform::v1::ListPersistentResourcesResponse response;
  auto status =
      grpc_stub_->ListPersistentResources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPersistentResourceServiceStub::AsyncDeletePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeletePersistentResourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePersistentResource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::DeletePersistentResource(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeletePersistentResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPersistentResourceServiceStub::AsyncUpdatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdatePersistentResourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdatePersistentResource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::UpdatePersistentResource(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdatePersistentResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPersistentResourceServiceStub::AsyncRebootPersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::RebootPersistentResourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRebootPersistentResource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::RebootPersistentResource(
    grpc::ClientContext& context, Options,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->RebootPersistentResource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultPersistentResourceServiceStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultPersistentResourceServiceStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultPersistentResourceServiceStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultPersistentResourceServiceStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultPersistentResourceServiceStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultPersistentResourceServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultPersistentResourceServiceStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultPersistentResourceServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::longrunning::Operation>
DefaultPersistentResourceServiceStub::WaitOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::WaitOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->WaitOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPersistentResourceServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultPersistentResourceServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
