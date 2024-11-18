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
// source: google/datastore/admin/v1/datastore_admin.proto

#include "google/cloud/datastore/admin/v1/internal/datastore_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/datastore/admin/v1/datastore_admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastoreAdminStub::~DatastoreAdminStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultDatastoreAdminStub::AsyncExportEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::datastore::admin::v1::ExportEntitiesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::datastore::admin::v1::ExportEntitiesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::datastore::admin::v1::ExportEntitiesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportEntities(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastoreAdminStub::ExportEntities(
    grpc::ClientContext& context, Options,
    google::datastore::admin::v1::ExportEntitiesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ExportEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastoreAdminStub::AsyncImportEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::datastore::admin::v1::ImportEntitiesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::datastore::admin::v1::ImportEntitiesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::datastore::admin::v1::ImportEntitiesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportEntities(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultDatastoreAdminStub::ImportEntities(
    grpc::ClientContext& context, Options,
    google::datastore::admin::v1::ImportEntitiesRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ImportEntities(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastoreAdminStub::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::datastore::admin::v1::CreateIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::datastore::admin::v1::CreateIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::datastore::admin::v1::CreateIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateIndex(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastoreAdminStub::CreateIndex(
    grpc::ClientContext& context, Options,
    google::datastore::admin::v1::CreateIndexRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateIndex(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastoreAdminStub::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::datastore::admin::v1::DeleteIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::datastore::admin::v1::DeleteIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::datastore::admin::v1::DeleteIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteIndex(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDatastoreAdminStub::DeleteIndex(
    grpc::ClientContext& context, Options,
    google::datastore::admin::v1::DeleteIndexRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteIndex(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::admin::v1::Index>
DefaultDatastoreAdminStub::GetIndex(
    grpc::ClientContext& context, Options const&,
    google::datastore::admin::v1::GetIndexRequest const& request) {
  google::datastore::admin::v1::Index response;
  auto status = grpc_stub_->GetIndex(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::admin::v1::ListIndexesResponse>
DefaultDatastoreAdminStub::ListIndexes(
    grpc::ClientContext& context, Options const&,
    google::datastore::admin::v1::ListIndexesRequest const& request) {
  google::datastore::admin::v1::ListIndexesResponse response;
  auto status = grpc_stub_->ListIndexes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultDatastoreAdminStub::ListOperations(
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
DefaultDatastoreAdminStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDatastoreAdminStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultDatastoreAdminStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatastoreAdminStub::AsyncGetOperation(
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
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDatastoreAdminStub::AsyncCancelOperation(
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
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1_internal
}  // namespace cloud
}  // namespace google
