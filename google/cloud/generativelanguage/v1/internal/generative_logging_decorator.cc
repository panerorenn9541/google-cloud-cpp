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

#include "google/cloud/generativelanguage/v1/internal/generative_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/ai/generativelanguage/v1/generative_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GenerativeServiceLogging::GenerativeServiceLogging(
    std::shared_ptr<GenerativeServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceLogging::GenerateContent(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::GenerateContentRequest const&
                 request) {
        return child_->GenerateContent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::ai::generativelanguage::v1::GenerateContentResponse>>
GenerativeServiceLogging::StreamGenerateContent(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::ai::generativelanguage::v1::GenerateContentRequest const&
                 request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::ai::generativelanguage::v1::GenerateContentResponse>> {
        auto stream =
            child_->StreamGenerateContent(std::move(context), options, request);
        if (stream_logging_) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::ai::generativelanguage::v1::GenerateContentResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::ai::generativelanguage::v1::EmbedContentResponse>
GenerativeServiceLogging::EmbedContent(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::EmbedContentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::EmbedContentRequest const&
                 request) {
        return child_->EmbedContent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::ai::generativelanguage::v1::BatchEmbedContentsResponse>
GenerativeServiceLogging::BatchEmbedContents(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
              request) {
        return child_->BatchEmbedContents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::ai::generativelanguage::v1::CountTokensResponse>
GenerativeServiceLogging::CountTokens(
    grpc::ClientContext& context, Options const& options,
    google::ai::generativelanguage::v1::CountTokensRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::CountTokensRequest const&
                 request) {
        return child_->CountTokens(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google
