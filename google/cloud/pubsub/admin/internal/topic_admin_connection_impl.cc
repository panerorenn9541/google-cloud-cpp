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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/topic_admin_connection_impl.h"
#include "google/cloud/pubsub/admin/internal/topic_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<pubsub_admin::TopicAdminRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<pubsub_admin::TopicAdminRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<pubsub_admin::TopicAdminBackoffPolicyOption>()->clone();
}

std::unique_ptr<pubsub_admin::TopicAdminConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<pubsub_admin::TopicAdminConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

TopicAdminConnectionImpl::TopicAdminConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<pubsub_admin_internal::TopicAdminStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TopicAdminConnection::options())) {}

StatusOr<google::pubsub::v1::Topic> TopicAdminConnectionImpl::CreateTopic(
    google::pubsub::v1::Topic const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTopic(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::Topic const& request) {
        return stub_->CreateTopic(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Topic> TopicAdminConnectionImpl::UpdateTopic(
    google::pubsub::v1::UpdateTopicRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTopic(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateTopicRequest const& request) {
        return stub_->UpdateTopic(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Topic> TopicAdminConnectionImpl::GetTopic(
    google::pubsub::v1::GetTopicRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTopic(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetTopicRequest const& request) {
        return stub_->GetTopic(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::pubsub::v1::Topic> TopicAdminConnectionImpl::ListTopics(
    google::pubsub::v1::ListTopicsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTopics(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::pubsub::v1::Topic>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<pubsub_admin::TopicAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::pubsub::v1::ListTopicsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::pubsub::v1::ListTopicsRequest const& request) {
              return stub->ListTopics(context, options, request);
            },
            options, r, function_name);
      },
      [](google::pubsub::v1::ListTopicsResponse r) {
        std::vector<google::pubsub::v1::Topic> result(r.topics().size());
        auto& messages = *r.mutable_topics();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<std::string> TopicAdminConnectionImpl::ListTopicSubscriptions(
    google::pubsub::v1::ListTopicSubscriptionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTopicSubscriptions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<pubsub_admin::TopicAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::pubsub::v1::ListTopicSubscriptionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::pubsub::v1::ListTopicSubscriptionsRequest const&
                       request) {
              return stub->ListTopicSubscriptions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::pubsub::v1::ListTopicSubscriptionsResponse r) {
        std::vector<std::string> result(r.subscriptions().size());
        auto& messages = *r.mutable_subscriptions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<std::string> TopicAdminConnectionImpl::ListTopicSnapshots(
    google::pubsub::v1::ListTopicSnapshotsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTopicSnapshots(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<pubsub_admin::TopicAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::pubsub::v1::ListTopicSnapshotsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
              return stub->ListTopicSnapshots(context, options, request);
            },
            options, r, function_name);
      },
      [](google::pubsub::v1::ListTopicSnapshotsResponse r) {
        std::vector<std::string> result(r.snapshots().size());
        auto& messages = *r.mutable_snapshots();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status TopicAdminConnectionImpl::DeleteTopic(
    google::pubsub::v1::DeleteTopicRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTopic(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteTopicRequest const& request) {
        return stub_->DeleteTopic(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
TopicAdminConnectionImpl::DetachSubscription(
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DetachSubscription(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DetachSubscriptionRequest const& request) {
        return stub_->DetachSubscription(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> TopicAdminConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> TopicAdminConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TopicAdminConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
