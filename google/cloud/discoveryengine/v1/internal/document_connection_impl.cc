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
// source: google/cloud/discoveryengine/v1/document_service.proto

#include "google/cloud/discoveryengine/v1/internal/document_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/document_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<discoveryengine_v1::DocumentServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<discoveryengine_v1::DocumentServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<discoveryengine_v1::DocumentServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<discoveryengine_v1::DocumentServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::
               DocumentServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<discoveryengine_v1::DocumentServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

DocumentServiceConnectionImpl::DocumentServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<discoveryengine_v1_internal::DocumentServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DocumentServiceConnection::options())) {}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceConnectionImpl::GetDocument(
    google::cloud::discoveryengine::v1::GetDocumentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDocument(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::GetDocumentRequest const&
                 request) {
        return stub_->GetDocument(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::discoveryengine::v1::Document>
DocumentServiceConnectionImpl::ListDocuments(
    google::cloud::discoveryengine::v1::ListDocumentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDocuments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::discoveryengine::v1::Document>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<discoveryengine_v1::DocumentServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::discoveryengine::v1::ListDocumentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::discoveryengine::v1::ListDocumentsRequest const&
                    request) {
              return stub->ListDocuments(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::discoveryengine::v1::ListDocumentsResponse r) {
        std::vector<google::cloud::discoveryengine::v1::Document> result(
            r.documents().size());
        auto& messages = *r.mutable_documents();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceConnectionImpl::CreateDocument(
    google::cloud::discoveryengine::v1::CreateDocumentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDocument(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::CreateDocumentRequest const&
                 request) {
        return stub_->CreateDocument(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceConnectionImpl::UpdateDocument(
    google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDocument(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::UpdateDocumentRequest const&
                 request) {
        return stub_->UpdateDocument(context, options, request);
      },
      *current, request, __func__);
}

Status DocumentServiceConnectionImpl::DeleteDocument(
    google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDocument(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::DeleteDocumentRequest const&
                 request) {
        return stub_->DeleteDocument(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
DocumentServiceConnectionImpl::ImportDocuments(
    google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportDocuments(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportDocumentsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::discoveryengine::v1::ImportDocumentsRequest const&
              request) {
        return stub->AsyncImportDocuments(cq, std::move(context),
                                          std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::ImportDocumentsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
DocumentServiceConnectionImpl::ImportDocuments(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportDocuments(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::ImportDocumentsRequest const&
                 request) {
        return stub_->ImportDocuments(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
DocumentServiceConnectionImpl::ImportDocuments(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   ImportDocumentsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportDocuments",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportDocumentsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::ImportDocumentsResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
DocumentServiceConnectionImpl::PurgeDocuments(
    google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeDocuments(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeDocumentsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::discoveryengine::v1::PurgeDocumentsRequest const&
              request) {
        return stub->AsyncPurgeDocuments(cq, std::move(context),
                                         std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::PurgeDocumentsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
DocumentServiceConnectionImpl::PurgeDocuments(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PurgeDocuments(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::PurgeDocumentsRequest const&
                 request) {
        return stub_->PurgeDocuments(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
DocumentServiceConnectionImpl::PurgeDocuments(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   PurgeDocumentsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PurgeDocuments",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeDocumentsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::PurgeDocumentsResponse>,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::discoveryengine::v1::BatchGetDocumentsMetadataResponse>
DocumentServiceConnectionImpl::BatchGetDocumentsMetadata(
    google::cloud::discoveryengine::v1::BatchGetDocumentsMetadataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchGetDocumentsMetadata(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::
                 BatchGetDocumentsMetadataRequest const& request) {
        return stub_->BatchGetDocumentsMetadata(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
DocumentServiceConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<discoveryengine_v1::DocumentServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
DocumentServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status DocumentServiceConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
