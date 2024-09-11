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

#include "google/cloud/generativelanguage/v1/internal/generative_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/ai/generativelanguage/v1/generative_service.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GenerativeServiceMetadata::GenerativeServiceMetadata(
    std::shared_ptr<GenerativeServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceMetadata::GenerateContent(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("model=", internal::UrlEncode(request.model())));
  return child_->GenerateContent(context, options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::ai::generativelanguage::v1::GenerateContentResponse>>
GenerativeServiceMetadata::StreamGenerateContent(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("model=", internal::UrlEncode(request.model())));
  return child_->StreamGenerateContent(std::move(context), options, request);
}

StatusOr<google::ai::generativelanguage::v1::EmbedContentResponse>
GenerativeServiceMetadata::EmbedContent(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::EmbedContentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("model=", internal::UrlEncode(request.model())));
  return child_->EmbedContent(context, options, request);
}

StatusOr<google::ai::generativelanguage::v1::BatchEmbedContentsResponse>
GenerativeServiceMetadata::BatchEmbedContents(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("model=", internal::UrlEncode(request.model())));
  return child_->BatchEmbedContents(context, options, request);
}

StatusOr<google::ai::generativelanguage::v1::CountTokensResponse>
GenerativeServiceMetadata::CountTokens(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::CountTokensRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("model=", internal::UrlEncode(request.model())));
  return child_->CountTokens(context, options, request);
}

void GenerativeServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void GenerativeServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google
