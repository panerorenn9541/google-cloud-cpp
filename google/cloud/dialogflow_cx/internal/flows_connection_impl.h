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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_FLOWS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_FLOWS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/flows_connection.h"
#include "google/cloud/dialogflow_cx/flows_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/flows_options.h"
#include "google/cloud/dialogflow_cx/internal/flows_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/flows_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FlowsConnectionImpl : public dialogflow_cx::FlowsConnection {
 public:
  ~FlowsConnectionImpl() override = default;

  FlowsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::FlowsStub> stub, Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dialogflow::cx::v3::Flow> CreateFlow(
      google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request)
      override;

  Status DeleteFlow(google::cloud::dialogflow::cx::v3::DeleteFlowRequest const&
                        request) override;

  StreamRange<google::cloud::dialogflow::cx::v3::Flow> ListFlows(
      google::cloud::dialogflow::cx::v3::ListFlowsRequest request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Flow> GetFlow(
      google::cloud::dialogflow::cx::v3::GetFlowRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Flow> UpdateFlow(
      google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> TrainFlow(
      google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> TrainFlow(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> TrainFlow(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
  ValidateFlow(google::cloud::dialogflow::cx::v3::ValidateFlowRequest const&
                   request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
  GetFlowValidationResult(
      google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>
  ImportFlow(google::cloud::dialogflow::cx::v3::ImportFlowRequest const&
                 request) override;

  StatusOr<google::longrunning::Operation> ImportFlow(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>
  ImportFlow(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>
  ExportFlow(google::cloud::dialogflow::cx::v3::ExportFlowRequest const&
                 request) override;

  StatusOr<google::longrunning::Operation> ExportFlow(
      NoAwaitTag,
      google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>
  ExportFlow(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::FlowsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_FLOWS_CONNECTION_IMPL_H
