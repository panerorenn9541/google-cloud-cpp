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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_ENDPOINT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_ENDPOINT_CONNECTION_H

#include "google/cloud/aiplatform/v1/endpoint_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/internal/endpoint_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/endpoint_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `EndpointServiceConnection`.
class EndpointServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<EndpointServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `EndpointServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EndpointServiceLimitedErrorCountRetryPolicy
    : public EndpointServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit EndpointServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  EndpointServiceLimitedErrorCountRetryPolicy(
      EndpointServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : EndpointServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  EndpointServiceLimitedErrorCountRetryPolicy(
      EndpointServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : EndpointServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EndpointServiceRetryPolicy> clone() const override {
    return std::make_unique<EndpointServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EndpointServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      aiplatform_v1_internal::EndpointServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `EndpointServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EndpointServiceLimitedTimeRetryPolicy
    : public EndpointServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit EndpointServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  EndpointServiceLimitedTimeRetryPolicy(
      EndpointServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : EndpointServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  EndpointServiceLimitedTimeRetryPolicy(
      EndpointServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : EndpointServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EndpointServiceRetryPolicy> clone() const override {
    return std::make_unique<EndpointServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EndpointServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      aiplatform_v1_internal::EndpointServiceRetryTraits>
      impl_;
};

/**
 * The `EndpointServiceConnection` object for `EndpointServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EndpointServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EndpointServiceClient`.
 *
 * To create a concrete instance, see `MakeEndpointServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockEndpointServiceConnection`.
 */
class EndpointServiceConnection {
 public:
  virtual ~EndpointServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
  CreateEndpoint(
      google::cloud::aiplatform::v1::CreateEndpointRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateEndpoint(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
  CreateEndpoint(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::aiplatform::v1::Endpoint> GetEndpoint(
      google::cloud::aiplatform::v1::GetEndpointRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::Endpoint> ListEndpoints(
      google::cloud::aiplatform::v1::ListEndpointsRequest request);

  virtual StatusOr<google::cloud::aiplatform::v1::Endpoint> UpdateEndpoint(
      google::cloud::aiplatform::v1::UpdateEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
  UpdateEndpointLongRunning(
      google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateEndpointLongRunning(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateEndpointLongRunningRequest const&
          request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
  UpdateEndpointLongRunning(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEndpoint(
      google::cloud::aiplatform::v1::DeleteEndpointRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteEndpoint(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteEndpointRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEndpoint(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
  DeployModel(google::cloud::aiplatform::v1::DeployModelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeployModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeployModelRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
  DeployModel(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
  UndeployModel(
      google::cloud::aiplatform::v1::UndeployModelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UndeployModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UndeployModelRequest const& request);

  virtual future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
  UndeployModel(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
  MutateDeployedModel(
      google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request);

  virtual StatusOr<google::longrunning::Operation> MutateDeployedModel(
      NoAwaitTag,
      google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
  MutateDeployedModel(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `EndpointServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EndpointServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EndpointServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::EndpointServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `EndpointServiceConnection` created
 * by this function.
 */
std::shared_ptr<EndpointServiceConnection> MakeEndpointServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_ENDPOINT_CONNECTION_H
