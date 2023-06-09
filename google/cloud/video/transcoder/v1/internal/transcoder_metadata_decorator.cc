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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/transcoder/v1/internal/transcoder_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/transcoder/v1/services.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_transcoder_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranscoderServiceMetadata::TranscoderServiceMetadata(
    std::shared_ptr<TranscoderServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceMetadata::CreateJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateJob(context, request);
}

StatusOr<google::cloud::video::transcoder::v1::ListJobsResponse>
TranscoderServiceMetadata::ListJobs(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceMetadata::GetJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetJob(context, request);
}

Status TranscoderServiceMetadata::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteJob(context, request);
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceMetadata::CreateJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateJobTemplate(context, request);
}

StatusOr<google::cloud::video::transcoder::v1::ListJobTemplatesResponse>
TranscoderServiceMetadata::ListJobTemplates(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobTemplatesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListJobTemplates(context, request);
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceMetadata::GetJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetJobTemplate(context, request);
}

Status TranscoderServiceMetadata::DeleteJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteJobTemplate(context, request);
}

void TranscoderServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void TranscoderServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace video_transcoder_v1_internal
}  // namespace cloud
}  // namespace google
