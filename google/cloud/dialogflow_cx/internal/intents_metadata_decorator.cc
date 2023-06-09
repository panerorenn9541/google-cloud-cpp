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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#include "google/cloud/dialogflow_cx/internal/intents_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/intent.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IntentsMetadata::IntentsMetadata(
    std::shared_ptr<IntentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListIntentsResponse>
IntentsMetadata::ListIntents(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListIntentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListIntents(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent> IntentsMetadata::GetIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetIntentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetIntent(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsMetadata::CreateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateIntent(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsMetadata::UpdateIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request) {
  SetMetadata(context, "intent.name=" + request.intent().name());
  return child_->UpdateIntent(context, request);
}

Status IntentsMetadata::DeleteIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteIntent(context, request);
}

void IntentsMetadata::SetMetadata(grpc::ClientContext& context,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void IntentsMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
