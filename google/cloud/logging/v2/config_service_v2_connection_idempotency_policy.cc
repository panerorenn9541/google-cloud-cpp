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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/config_service_v2_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConfigServiceV2ConnectionIdempotencyPolicy::
    ~ConfigServiceV2ConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConfigServiceV2ConnectionIdempotencyPolicy>
ConfigServiceV2ConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ConfigServiceV2ConnectionIdempotencyPolicy>(*this);
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListBuckets(
    google::logging::v2::ListBucketsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetBucket(
    google::logging::v2::GetBucketRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateBucketAsync(
    google::logging::v2::CreateBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateBucketAsync(
    google::logging::v2::UpdateBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateBucket(
    google::logging::v2::CreateBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateBucket(
    google::logging::v2::UpdateBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::DeleteBucket(
    google::logging::v2::DeleteBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UndeleteBucket(
    google::logging::v2::UndeleteBucketRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListViews(
    google::logging::v2::ListViewsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetView(
    google::logging::v2::GetViewRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateView(
    google::logging::v2::CreateViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateView(
    google::logging::v2::UpdateViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::DeleteView(
    google::logging::v2::DeleteViewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListSinks(
    google::logging::v2::ListSinksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetSink(
    google::logging::v2::GetSinkRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateSink(
    google::logging::v2::CreateSinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateSink(
    google::logging::v2::UpdateSinkRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::DeleteSink(
    google::logging::v2::DeleteSinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateLink(
    google::logging::v2::CreateLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::DeleteLink(
    google::logging::v2::DeleteLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListLinks(
    google::logging::v2::ListLinksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetLink(
    google::logging::v2::GetLinkRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListExclusions(
    google::logging::v2::ListExclusionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetExclusion(
    google::logging::v2::GetExclusionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CreateExclusion(
    google::logging::v2::CreateExclusionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateExclusion(
    google::logging::v2::UpdateExclusionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::DeleteExclusion(
    google::logging::v2::DeleteExclusionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetCmekSettings(
    google::logging::v2::GetCmekSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateCmekSettings(
    google::logging::v2::UpdateCmekSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetSettings(
    google::logging::v2::GetSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::UpdateSettings(
    google::logging::v2::UpdateSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CopyLogEntries(
    google::logging::v2::CopyLogEntriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConfigServiceV2ConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ConfigServiceV2ConnectionIdempotencyPolicy>
MakeDefaultConfigServiceV2ConnectionIdempotencyPolicy() {
  return std::make_unique<ConfigServiceV2ConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google
