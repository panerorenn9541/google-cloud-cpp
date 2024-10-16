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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_BARE_METAL_SOLUTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_BARE_METAL_SOLUTION_CONNECTION_H

#include "google/cloud/baremetalsolution/v2/bare_metal_solution_connection_idempotency_policy.h"
#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/baremetalsolution/v2/baremetalsolution.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace baremetalsolution_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `BareMetalSolutionConnection`.
class BareMetalSolutionRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<BareMetalSolutionRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `BareMetalSolutionConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BareMetalSolutionLimitedErrorCountRetryPolicy
    : public BareMetalSolutionRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit BareMetalSolutionLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  BareMetalSolutionLimitedErrorCountRetryPolicy(
      BareMetalSolutionLimitedErrorCountRetryPolicy&& rhs) noexcept
      : BareMetalSolutionLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  BareMetalSolutionLimitedErrorCountRetryPolicy(
      BareMetalSolutionLimitedErrorCountRetryPolicy const& rhs) noexcept
      : BareMetalSolutionLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<BareMetalSolutionRetryPolicy> clone() const override {
    return std::make_unique<BareMetalSolutionLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BareMetalSolutionRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      baremetalsolution_v2_internal::BareMetalSolutionRetryTraits>
      impl_;
};

/**
 * A retry policy for `BareMetalSolutionConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class BareMetalSolutionLimitedTimeRetryPolicy
    : public BareMetalSolutionRetryPolicy {
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
  explicit BareMetalSolutionLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  BareMetalSolutionLimitedTimeRetryPolicy(
      BareMetalSolutionLimitedTimeRetryPolicy&& rhs) noexcept
      : BareMetalSolutionLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  BareMetalSolutionLimitedTimeRetryPolicy(
      BareMetalSolutionLimitedTimeRetryPolicy const& rhs) noexcept
      : BareMetalSolutionLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<BareMetalSolutionRetryPolicy> clone() const override {
    return std::make_unique<BareMetalSolutionLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = BareMetalSolutionRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      baremetalsolution_v2_internal::BareMetalSolutionRetryTraits>
      impl_;
};

/**
 * The `BareMetalSolutionConnection` object for `BareMetalSolutionClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BareMetalSolutionClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `BareMetalSolutionClient`.
 *
 * To create a concrete instance, see `MakeBareMetalSolutionConnection()`.
 *
 * For mocking, see
 * `baremetalsolution_v2_mocks::MockBareMetalSolutionConnection`.
 */
class BareMetalSolutionConnection {
 public:
  virtual ~BareMetalSolutionConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::baremetalsolution::v2::Instance>
  ListInstances(
      google::cloud::baremetalsolution::v2::ListInstancesRequest request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Instance> GetInstance(
      google::cloud::baremetalsolution::v2::GetInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
  UpdateInstance(
      google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateInstance(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
  UpdateInstance(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Instance>
  RenameInstance(
      google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
  ResetInstance(
      google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ResetInstance(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
  ResetInstance(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
  StartInstance(
      google::cloud::baremetalsolution::v2::StartInstanceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> StartInstance(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::StartInstanceRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
  StartInstance(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
  StopInstance(
      google::cloud::baremetalsolution::v2::StopInstanceRequest const& request);

  virtual StatusOr<google::longrunning::Operation> StopInstance(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::StopInstanceRequest const& request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
  StopInstance(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::
                              EnableInteractiveSerialConsoleResponse>>
  EnableInteractiveSerialConsole(
      google::cloud::baremetalsolution::v2::
          EnableInteractiveSerialConsoleRequest const& request);

  virtual StatusOr<google::longrunning::Operation>
  EnableInteractiveSerialConsole(
      NoAwaitTag, google::cloud::baremetalsolution::v2::
                      EnableInteractiveSerialConsoleRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::
                              EnableInteractiveSerialConsoleResponse>>
  EnableInteractiveSerialConsole(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::
                              DisableInteractiveSerialConsoleResponse>>
  DisableInteractiveSerialConsole(
      google::cloud::baremetalsolution::v2::
          DisableInteractiveSerialConsoleRequest const& request);

  virtual StatusOr<google::longrunning::Operation>
  DisableInteractiveSerialConsole(
      NoAwaitTag, google::cloud::baremetalsolution::v2::
                      DisableInteractiveSerialConsoleRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::
                              DisableInteractiveSerialConsoleResponse>>
  DisableInteractiveSerialConsole(
      google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
  DetachLun(
      google::cloud::baremetalsolution::v2::DetachLunRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DetachLun(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::DetachLunRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
  DetachLun(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::baremetalsolution::v2::SSHKey> ListSSHKeys(
      google::cloud::baremetalsolution::v2::ListSSHKeysRequest request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::SSHKey> CreateSSHKey(
      google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request);

  virtual Status DeleteSSHKey(
      google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request);

  virtual StreamRange<google::cloud::baremetalsolution::v2::Volume> ListVolumes(
      google::cloud::baremetalsolution::v2::ListVolumesRequest request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Volume> GetVolume(
      google::cloud::baremetalsolution::v2::GetVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
  UpdateVolume(
      google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateVolume(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
  UpdateVolume(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Volume> RenameVolume(
      google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  EvictVolume(
      google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> EvictVolume(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  EvictVolume(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
  ResizeVolume(
      google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ResizeVolume(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
  ResizeVolume(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::baremetalsolution::v2::Network>
  ListNetworks(
      google::cloud::baremetalsolution::v2::ListNetworksRequest request);

  virtual StatusOr<
      google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
  ListNetworkUsage(
      google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
          request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Network> GetNetwork(
      google::cloud::baremetalsolution::v2::GetNetworkRequest const& request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
  UpdateNetwork(
      google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateNetwork(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
  UpdateNetwork(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
  CreateVolumeSnapshot(
      google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
  RestoreVolumeSnapshot(
      google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> RestoreVolumeSnapshot(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
  RestoreVolumeSnapshot(google::longrunning::Operation const& operation);

  virtual Status DeleteVolumeSnapshot(
      google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
          request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
  GetVolumeSnapshot(
      google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
          request);

  virtual StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>
  ListVolumeSnapshots(
      google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Lun> GetLun(
      google::cloud::baremetalsolution::v2::GetLunRequest const& request);

  virtual StreamRange<google::cloud::baremetalsolution::v2::Lun> ListLuns(
      google::cloud::baremetalsolution::v2::ListLunsRequest request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  EvictLun(
      google::cloud::baremetalsolution::v2::EvictLunRequest const& request);

  virtual StatusOr<google::longrunning::Operation> EvictLun(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::EvictLunRequest const& request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  EvictLun(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::baremetalsolution::v2::NfsShare> GetNfsShare(
      google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request);

  virtual StreamRange<google::cloud::baremetalsolution::v2::NfsShare>
  ListNfsShares(
      google::cloud::baremetalsolution::v2::ListNfsSharesRequest request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
  UpdateNfsShare(
      google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateNfsShare(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
  UpdateNfsShare(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
  CreateNfsShare(
      google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateNfsShare(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
          request);

  virtual future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
  CreateNfsShare(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
  RenameNfsShare(
      google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  DeleteNfsShare(
      google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteNfsShare(
      NoAwaitTag,
      google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
  DeleteNfsShare(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::baremetalsolution::v2::ProvisioningQuota>
  ListProvisioningQuotas(
      google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest
          request);

  virtual StatusOr<
      google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
  SubmitProvisioningConfig(google::cloud::baremetalsolution::v2::
                               SubmitProvisioningConfigRequest const& request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  GetProvisioningConfig(
      google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
          request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  CreateProvisioningConfig(google::cloud::baremetalsolution::v2::
                               CreateProvisioningConfigRequest const& request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  UpdateProvisioningConfig(google::cloud::baremetalsolution::v2::
                               UpdateProvisioningConfigRequest const& request);

  virtual StatusOr<google::cloud::baremetalsolution::v2::Network> RenameNetwork(
      google::cloud::baremetalsolution::v2::RenameNetworkRequest const&
          request);

  virtual StreamRange<google::cloud::baremetalsolution::v2::OSImage>
  ListOSImages(
      google::cloud::baremetalsolution::v2::ListOSImagesRequest request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `BareMetalSolutionConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * BareMetalSolutionClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BareMetalSolutionConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::baremetalsolution_v2::BareMetalSolutionPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BareMetalSolutionConnection` created
 * by this function.
 */
std::shared_ptr<BareMetalSolutionConnection> MakeBareMetalSolutionConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_BARE_METAL_SOLUTION_CONNECTION_H
