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

#include "google/cloud/generativelanguage/v1/model_connection.h"
#include "google/cloud/generativelanguage/v1/internal/model_connection_impl.h"
#include "google/cloud/generativelanguage/v1/internal/model_option_defaults.h"
#include "google/cloud/generativelanguage/v1/internal/model_stub_factory.h"
#include "google/cloud/generativelanguage/v1/internal/model_tracing_connection.h"
#include "google/cloud/generativelanguage/v1/model_options.h"
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
namespace generativelanguage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceConnection::~ModelServiceConnection() = default;

StatusOr<google::ai::generativelanguage::v1::Model>
ModelServiceConnection::GetModel(
    google::ai::generativelanguage::v1::GetModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::ai::generativelanguage::v1::Model>
ModelServiceConnection::ListModels(
    google::ai::generativelanguage::v1::
        ListModelsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::ai::generativelanguage::v1::Model>>();
}

std::shared_ptr<ModelServiceConnection> MakeModelServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ModelServicePolicyOptionList>(options,
                                                               __func__);
  options = generativelanguage_v1_internal::ModelServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = generativelanguage_v1_internal::CreateDefaultModelServiceStub(
      std::move(auth), options);
  return generativelanguage_v1_internal::MakeModelServiceTracingConnection(
      std::make_shared<
          generativelanguage_v1_internal::ModelServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1
}  // namespace cloud
}  // namespace google
