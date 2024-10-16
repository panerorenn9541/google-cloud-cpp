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
// source: google/cloud/dialogflow/cx/v3/transition_route_group.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TRANSITION_ROUTE_GROUPS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TRANSITION_ROUTE_GROUPS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/internal/transition_route_groups_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/transition_route_groups_stub.h"
#include "google/cloud/dialogflow_cx/transition_route_groups_connection.h"
#include "google/cloud/dialogflow_cx/transition_route_groups_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/transition_route_groups_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TransitionRouteGroupsConnectionImpl
    : public dialogflow_cx::TransitionRouteGroupsConnection {
 public:
  ~TransitionRouteGroupsConnectionImpl() override = default;

  TransitionRouteGroupsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::TransitionRouteGroupsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
  ListTransitionRouteGroups(
      google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsRequest
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
  GetTransitionRouteGroup(
      google::cloud::dialogflow::cx::v3::GetTransitionRouteGroupRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
  CreateTransitionRouteGroup(
      google::cloud::dialogflow::cx::v3::
          CreateTransitionRouteGroupRequest const& request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
  UpdateTransitionRouteGroup(
      google::cloud::dialogflow::cx::v3::
          UpdateTransitionRouteGroupRequest const& request) override;

  Status DeleteTransitionRouteGroup(
      google::cloud::dialogflow::cx::v3::
          DeleteTransitionRouteGroupRequest const& request) override;

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
  std::shared_ptr<dialogflow_cx_internal::TransitionRouteGroupsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TRANSITION_ROUTE_GROUPS_CONNECTION_IMPL_H
