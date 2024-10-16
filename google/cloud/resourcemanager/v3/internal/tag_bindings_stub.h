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
// source: google/cloud/resourcemanager/v3/tag_bindings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/resourcemanager/v3/tag_bindings.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TagBindingsStub {
 public:
  virtual ~TagBindingsStub() = 0;

  virtual StatusOr<google::cloud::resourcemanager::v3::ListTagBindingsResponse>
  ListTagBindings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::ListTagBindingsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateTagBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateTagBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTagBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTagBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::resourcemanager::v3::ListEffectiveTagsResponse>
  ListEffectiveTags(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::ListEffectiveTagsRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

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

class DefaultTagBindingsStub : public TagBindingsStub {
 public:
  DefaultTagBindingsStub(
      std::unique_ptr<
          google::cloud::resourcemanager::v3::TagBindings::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_stub_(std::move(operations_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::resourcemanager::v3::ListTagBindingsResponse>
  ListTagBindings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::ListTagBindingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTagBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateTagBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::CreateTagBindingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagBinding(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteTagBinding(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::DeleteTagBindingRequest const&
          request) override;

  StatusOr<google::cloud::resourcemanager::v3::ListEffectiveTagsResponse>
  ListEffectiveTags(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::ListEffectiveTagsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

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
  std::unique_ptr<
      google::cloud::resourcemanager::v3::TagBindings::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_BINDINGS_STUB_H
