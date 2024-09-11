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
// source: google/ai/generativelanguage/v1/generative_service.proto

#include "google/cloud/generativelanguage/v1/generative_connection.h"
#include "google/cloud/generativelanguage/v1/generative_options.h"
#include "google/cloud/generativelanguage/v1/internal/generative_connection_impl.h"
#include "google/cloud/generativelanguage/v1/internal/generative_option_defaults.h"
#include "google/cloud/generativelanguage/v1/internal/generative_stub_factory.h"
#include "google/cloud/generativelanguage/v1/internal/generative_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace generativelanguage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GenerativeServiceConnection::~GenerativeServiceConnection() = default;

StatusOr<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceConnection::GenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceConnection::StreamGenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::ai::generativelanguage::v1::GenerateContentResponse>(
      []() -> absl::variant<
               Status,
               google::ai::generativelanguage::v1::GenerateContentResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

StatusOr<google::ai::generativelanguage::v1::EmbedContentResponse>
GenerativeServiceConnection::EmbedContent(
    google::ai::generativelanguage::v1::EmbedContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::ai::generativelanguage::v1::BatchEmbedContentsResponse>
GenerativeServiceConnection::BatchEmbedContents(
    google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::ai::generativelanguage::v1::CountTokensResponse>
GenerativeServiceConnection::CountTokens(
    google::ai::generativelanguage::v1::CountTokensRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<GenerativeServiceConnection> MakeGenerativeServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 GenerativeServicePolicyOptionList>(options,
                                                                    __func__);
  options = generativelanguage_v1_internal::GenerativeServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      generativelanguage_v1_internal::CreateDefaultGenerativeServiceStub(
          std::move(auth), options);
  return generativelanguage_v1_internal::MakeGenerativeServiceTracingConnection(
      std::make_shared<
          generativelanguage_v1_internal::GenerativeServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1
}  // namespace cloud
}  // namespace google
