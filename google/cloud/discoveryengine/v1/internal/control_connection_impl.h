// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/control_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONTROL_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONTROL_CONNECTION_IMPL_H

#include "google/cloud/discoveryengine/v1/control_connection.h"
#include "google/cloud/discoveryengine/v1/control_connection_idempotency_policy.h"
#include "google/cloud/discoveryengine/v1/control_options.h"
#include "google/cloud/discoveryengine/v1/internal/control_retry_traits.h"
#include "google/cloud/discoveryengine/v1/internal/control_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ControlServiceConnectionImpl
    : public discoveryengine_v1::ControlServiceConnection {
 public:
  ~ControlServiceConnectionImpl() override = default;

  ControlServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<discoveryengine_v1_internal::ControlServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::discoveryengine::v1::Control> CreateControl(
      google::cloud::discoveryengine::v1::CreateControlRequest const& request)
      override;

  Status DeleteControl(
      google::cloud::discoveryengine::v1::DeleteControlRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Control> UpdateControl(
      google::cloud::discoveryengine::v1::UpdateControlRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::Control> GetControl(
      google::cloud::discoveryengine::v1::GetControlRequest const& request)
      override;

  StreamRange<google::cloud::discoveryengine::v1::Control> ListControls(
      google::cloud::discoveryengine::v1::ListControlsRequest request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<discoveryengine_v1_internal::ControlServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_CONTROL_CONNECTION_IMPL_H
