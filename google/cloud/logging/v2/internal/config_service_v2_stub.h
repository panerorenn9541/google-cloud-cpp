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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/logging/v2/logging_config.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigServiceV2Stub {
 public:
  virtual ~ConfigServiceV2Stub() = 0;

  virtual StatusOr<google::logging::v2::ListBucketsResponse> ListBuckets(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListBucketsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogBucket> GetBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetBucketRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateBucketRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateBucketRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::UpdateBucketRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::UpdateBucketRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogBucket> CreateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateBucketRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateBucketRequest const& request) = 0;

  virtual Status DeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteBucketRequest const& request) = 0;

  virtual Status UndeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UndeleteBucketRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::ListViewsResponse> ListViews(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListViewsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogView> GetView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetViewRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogView> CreateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateViewRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogView> UpdateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateViewRequest const& request) = 0;

  virtual Status DeleteView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteViewRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::ListSinksResponse> ListSinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListSinksRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogSink> GetSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSinkRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogSink> CreateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateSinkRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogSink> UpdateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSinkRequest const& request) = 0;

  virtual Status DeleteSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteSinkRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateLinkRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateLinkRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::DeleteLinkRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::DeleteLinkRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::ListLinksResponse> ListLinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListLinksRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::Link> GetLink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetLinkRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::ListExclusionsResponse> ListExclusions(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListExclusionsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetExclusionRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateExclusionRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateExclusionRequest const& request) = 0;

  virtual Status DeleteExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteExclusionRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetCmekSettingsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateCmekSettingsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::Settings> GetSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSettingsRequest const& request) = 0;

  virtual StatusOr<google::logging::v2::Settings> UpdateSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSettingsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCopyLogEntries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CopyLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CopyLogEntries(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CopyLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultConfigServiceV2Stub : public ConfigServiceV2Stub {
 public:
  DefaultConfigServiceV2Stub(
      std::unique_ptr<google::logging::v2::ConfigServiceV2::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::logging::v2::ListBucketsResponse> ListBuckets(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListBucketsRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> GetBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetBucketRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateBucketRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBucketAsync(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateBucketAsync(
      grpc::ClientContext& context, Options options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> CreateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateBucketRequest const& request) override;

  Status DeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteBucketRequest const& request) override;

  Status UndeleteBucket(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UndeleteBucketRequest const& request) override;

  StatusOr<google::logging::v2::ListViewsResponse> ListViews(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListViewsRequest const& request) override;

  StatusOr<google::logging::v2::LogView> GetView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> CreateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> UpdateView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateViewRequest const& request) override;

  Status DeleteView(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteViewRequest const& request) override;

  StatusOr<google::logging::v2::ListSinksResponse> ListSinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListSinksRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> GetSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> CreateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> UpdateSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSinkRequest const& request) override;

  Status DeleteSink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteSinkRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CreateLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CreateLinkRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteLink(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::DeleteLinkRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteLink(
      grpc::ClientContext& context, Options options,
      google::logging::v2::DeleteLinkRequest const& request) override;

  StatusOr<google::logging::v2::ListLinksResponse> ListLinks(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListLinksRequest const& request) override;

  StatusOr<google::logging::v2::Link> GetLink(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetLinkRequest const& request) override;

  StatusOr<google::logging::v2::ListExclusionsResponse> ListExclusions(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListExclusionsRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateExclusionRequest const& request) override;

  Status DeleteExclusion(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteExclusionRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> GetSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> UpdateSettings(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateSettingsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyLogEntries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  StatusOr<google::longrunning::Operation> CopyLogEntries(
      grpc::ClientContext& context, Options options,
      google::logging::v2::CopyLogEntriesRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::logging::v2::ConfigServiceV2::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_STUB_H
