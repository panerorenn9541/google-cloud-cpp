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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#include "google/cloud/dialogflow_cx/internal/experiments_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/experiment.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExperimentsMetadata::ExperimentsMetadata(
    std::shared_ptr<ExperimentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListExperimentsResponse>
ExperimentsMetadata::ListExperiments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListExperiments(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsMetadata::GetExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsMetadata::CreateExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsMetadata::UpdateExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request) {
  SetMetadata(context, "experiment.name=" + request.experiment().name());
  return child_->UpdateExperiment(context, request);
}

Status ExperimentsMetadata::DeleteExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsMetadata::StartExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->StartExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsMetadata::StopExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->StopExperiment(context, request);
}

void ExperimentsMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ExperimentsMetadata::SetMetadata(grpc::ClientContext& context) {
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
