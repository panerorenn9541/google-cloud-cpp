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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#include "google/cloud/aiplatform/v1/featurestore_online_serving_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::
    ~FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy>
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::ReadFeatureValues(
    google::cloud::aiplatform::v1::ReadFeatureValuesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::WriteFeatureValues(
    google::cloud::aiplatform::v1::WriteFeatureValuesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy::WaitOperation(
    google::longrunning::WaitOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy>
MakeDefaultFeaturestoreOnlineServingServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      FeaturestoreOnlineServingServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
