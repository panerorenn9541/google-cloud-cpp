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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/internal/contexts_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/contexts_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::ContextsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::ContextsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::ContextsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_es::ContextsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::ContextsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ContextsConnectionImpl::ContextsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::ContextsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ContextsConnection::options())) {}

StreamRange<google::cloud::dialogflow::v2::Context>
ContextsConnectionImpl::ListContexts(
    google::cloud::dialogflow::v2::ListContextsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListContexts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Context>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ContextsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::v2::ListContextsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::v2::ListContextsRequest const&
                       request) {
              return stub->ListContexts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListContextsResponse r) {
        std::vector<google::cloud::dialogflow::v2::Context> result(
            r.contexts().size());
        auto& messages = *r.mutable_contexts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsConnectionImpl::GetContext(
    google::cloud::dialogflow::v2::GetContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetContext(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetContextRequest const& request) {
        return stub_->GetContext(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsConnectionImpl::CreateContext(
    google::cloud::dialogflow::v2::CreateContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateContext(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::CreateContextRequest const& request) {
        return stub_->CreateContext(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Context>
ContextsConnectionImpl::UpdateContext(
    google::cloud::dialogflow::v2::UpdateContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateContext(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::UpdateContextRequest const& request) {
        return stub_->UpdateContext(context, options, request);
      },
      *current, request, __func__);
}

Status ContextsConnectionImpl::DeleteContext(
    google::cloud::dialogflow::v2::DeleteContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteContext(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::DeleteContextRequest const& request) {
        return stub_->DeleteContext(context, options, request);
      },
      *current, request, __func__);
}

Status ContextsConnectionImpl::DeleteAllContexts(
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAllContexts(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::DeleteAllContextsRequest const&
                 request) {
        return stub_->DeleteAllContexts(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::location::Location>
ContextsConnectionImpl::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLocations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::location::Location>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ContextsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::location::ListLocationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::location::ListLocationsRequest const& request) {
              return stub->ListLocations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::location::ListLocationsResponse r) {
        std::vector<google::cloud::location::Location> result(
            r.locations().size());
        auto& messages = *r.mutable_locations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::location::Location> ContextsConnectionImpl::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLocation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return stub_->GetLocation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
ContextsConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ContextsRetryPolicy>(
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

StatusOr<google::longrunning::Operation> ContextsConnectionImpl::GetOperation(
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

Status ContextsConnectionImpl::CancelOperation(
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
