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
// source: google/ai/generativelanguage/v1/model_service.proto

#include "google/cloud/generativelanguage/v1/internal/model_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/ai/generativelanguage/v1/model_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceStub::~ModelServiceStub() = default;

StatusOr<google::ai::generativelanguage::v1::Model>
DefaultModelServiceStub::GetModel(
    grpc::ClientContext& context, Options const&,
    google::ai::generativelanguage::v1::GetModelRequest const& request) {
  google::ai::generativelanguage::v1::Model response;
  auto status = grpc_stub_->GetModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::ai::generativelanguage::v1::ListModelsResponse>
DefaultModelServiceStub::ListModels(
    grpc::ClientContext& context, Options const&,
    google::ai::generativelanguage::v1::ListModelsRequest const& request) {
  google::ai::generativelanguage::v1::ListModelsResponse response;
  auto status = grpc_stub_->ListModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google
