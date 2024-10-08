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

#include "google/cloud/generativelanguage/v1/internal/generative_connection_impl.h"
#include "google/cloud/generativelanguage/v1/internal/generative_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<generativelanguage_v1::GenerativeServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<generativelanguage_v1::GenerativeServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<generativelanguage_v1::GenerativeServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    generativelanguage_v1::GenerativeServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<generativelanguage_v1::
               GenerativeServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

void GenerativeServiceStreamGenerateContentStreamingUpdater(
    google::ai::generativelanguage::v1::GenerateContentResponse const&,
    google::ai::generativelanguage::v1::GenerateContentRequest&) {}

GenerativeServiceConnectionImpl::GenerativeServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<generativelanguage_v1_internal::GenerativeServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), GenerativeServiceConnection::options())) {}

StatusOr<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceConnectionImpl::GenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateContent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::GenerateContentRequest const&
                 request) {
        return stub_->GenerateContent(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::ai::generativelanguage::v1::GenerateContentResponse>
GenerativeServiceConnectionImpl::StreamGenerateContent(
    google::ai::generativelanguage::v1::GenerateContentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto factory =
      [stub = stub_, current](
          google::ai::generativelanguage::v1::GenerateContentRequest const&
              request) {
        return stub->StreamGenerateContent(
            std::make_shared<grpc::ClientContext>(), *current, request);
      };
  auto resumable = internal::MakeResumableStreamingReadRpc<
      google::ai::generativelanguage::v1::GenerateContentResponse,
      google::ai::generativelanguage::v1::GenerateContentRequest>(
      retry_policy(*current), backoff_policy(*current), factory,
      GenerativeServiceStreamGenerateContentStreamingUpdater, request);
  return internal::MakeStreamRange(
      internal::StreamReader<
          google::ai::generativelanguage::v1::GenerateContentResponse>(
          [resumable] { return resumable->Read(); }));
}

StatusOr<google::ai::generativelanguage::v1::EmbedContentResponse>
GenerativeServiceConnectionImpl::EmbedContent(
    google::ai::generativelanguage::v1::EmbedContentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->EmbedContent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::EmbedContentRequest const&
                 request) {
        return stub_->EmbedContent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::ai::generativelanguage::v1::BatchEmbedContentsResponse>
GenerativeServiceConnectionImpl::BatchEmbedContents(
    google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchEmbedContents(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::ai::generativelanguage::v1::BatchEmbedContentsRequest const&
              request) {
        return stub_->BatchEmbedContents(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::ai::generativelanguage::v1::CountTokensResponse>
GenerativeServiceConnectionImpl::CountTokens(
    google::ai::generativelanguage::v1::CountTokensRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CountTokens(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::ai::generativelanguage::v1::CountTokensRequest const&
                 request) {
        return stub_->CountTokens(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google
