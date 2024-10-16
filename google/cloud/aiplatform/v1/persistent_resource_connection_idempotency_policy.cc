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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#include "google/cloud/aiplatform/v1/persistent_resource_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PersistentResourceServiceConnectionIdempotencyPolicy::
    ~PersistentResourceServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<PersistentResourceServiceConnectionIdempotencyPolicy>
PersistentResourceServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PersistentResourceServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::CreatePersistentResource(
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::GetPersistentResource(
    google::cloud::aiplatform::v1::GetPersistentResourceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::ListPersistentResources(
    google::cloud::aiplatform::v1::ListPersistentResourcesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::DeletePersistentResource(
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::UpdatePersistentResource(
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::RebootPersistentResource(
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PersistentResourceServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PersistentResourceServiceConnectionIdempotencyPolicy::WaitOperation(
    google::longrunning::WaitOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PersistentResourceServiceConnectionIdempotencyPolicy>
MakeDefaultPersistentResourceServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      PersistentResourceServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
