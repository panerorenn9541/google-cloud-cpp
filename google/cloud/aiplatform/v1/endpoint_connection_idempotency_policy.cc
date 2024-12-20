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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#include "google/cloud/aiplatform/v1/endpoint_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EndpointServiceConnectionIdempotencyPolicy::
    ~EndpointServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<EndpointServiceConnectionIdempotencyPolicy>
EndpointServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<EndpointServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::CreateEndpoint(
    google::cloud::aiplatform::v1::CreateEndpointRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::GetEndpoint(
    google::cloud::aiplatform::v1::GetEndpointRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::ListEndpoints(
    google::cloud::aiplatform::v1::ListEndpointsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::UpdateEndpoint(
    google::cloud::aiplatform::v1::UpdateEndpointRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
EndpointServiceConnectionIdempotencyPolicy::UpdateEndpointLongRunning(
    google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::DeleteEndpoint(
    google::cloud::aiplatform::v1::DeleteEndpointRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::DeployModel(
    google::cloud::aiplatform::v1::DeployModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::UndeployModel(
    google::cloud::aiplatform::v1::UndeployModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::MutateDeployedModel(
    google::cloud::aiplatform::v1::MutateDeployedModelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EndpointServiceConnectionIdempotencyPolicy::WaitOperation(
    google::longrunning::WaitOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EndpointServiceConnectionIdempotencyPolicy>
MakeDefaultEndpointServiceConnectionIdempotencyPolicy() {
  return std::make_unique<EndpointServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
