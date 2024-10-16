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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_TRACING_STUB_H

#include "google/cloud/tpu/v1/internal/tpu_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TpuTracingStub : public TpuStub {
 public:
  ~TpuTracingStub() override = default;

  explicit TpuTracingStub(std::shared_ptr<TpuStub> child);

  StatusOr<google::cloud::tpu::v1::ListNodesResponse> ListNodes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListNodesRequest const& request) override;

  StatusOr<google::cloud::tpu::v1::Node> GetNode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v1::CreateNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v1::CreateNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v1::DeleteNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v1::DeleteNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReimageNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v1::ReimageNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> ReimageNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v1::ReimageNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v1::StopNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StopNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v1::StopNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v1::StartNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StartNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v1::StartNodeRequest const& request) override;

  StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
  ListTensorFlowVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
  ListAcceleratorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

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
  std::shared_ptr<TpuStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TpuStub> MakeTpuTracingStub(std::shared_ptr<TpuStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_TRACING_STUB_H
