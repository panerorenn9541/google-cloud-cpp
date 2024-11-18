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
// source: google/cloud/functions/v1/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/functions/v1/functions.grpc.pb.h>
#include <google/cloud/functions/v1/operations.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudFunctionsServiceStub {
 public:
  virtual ~CloudFunctionsServiceStub() = 0;

  virtual StatusOr<google::cloud::functions::v1::ListFunctionsResponse>
  ListFunctions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::ListFunctionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GetFunctionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::CreateFunctionRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::CreateFunctionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::UpdateFunctionRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::UpdateFunctionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::DeleteFunctionRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::DeleteFunctionRequest const& request) = 0;

  virtual StatusOr<google::cloud::functions::v1::CallFunctionResponse>
  CallFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::CallFunctionRequest const& request) = 0;

  virtual StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateUploadUrlRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateDownloadUrlRequest const&
          request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

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

class DefaultCloudFunctionsServiceStub : public CloudFunctionsServiceStub {
 public:
  DefaultCloudFunctionsServiceStub(
      std::unique_ptr<
          google::cloud::functions::v1::CloudFunctionsService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::functions::v1::ListFunctionsResponse> ListFunctions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::ListFunctionsRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GetFunctionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::functions::v1::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFunction(
      grpc::ClientContext& context, Options options,
      google::cloud::functions::v1::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::CallFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateUploadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateDownloadUrlRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

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
      google::cloud::functions::v1::CloudFunctionsService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_STUB_H
