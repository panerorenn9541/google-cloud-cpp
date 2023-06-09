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
// source: google/cloud/dataproc/v1/batches.proto

#include "google/cloud/dataproc/v1/internal/batch_controller_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/batches.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BatchControllerMetadata::BatchControllerMetadata(
    std::shared_ptr<BatchControllerStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
BatchControllerMetadata::AsyncCreateBatch(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::CreateBatchRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateBatch(cq, std::move(context), request);
}

StatusOr<google::cloud::dataproc::v1::Batch> BatchControllerMetadata::GetBatch(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetBatchRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetBatch(context, request);
}

StatusOr<google::cloud::dataproc::v1::ListBatchesResponse>
BatchControllerMetadata::ListBatches(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListBatchesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListBatches(context, request);
}

Status BatchControllerMetadata::DeleteBatch(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteBatchRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteBatch(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BatchControllerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> BatchControllerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void BatchControllerMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BatchControllerMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
