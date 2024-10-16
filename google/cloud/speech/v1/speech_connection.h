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
// source: google/cloud/speech/v1/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_SPEECH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_SPEECH_CONNECTION_H

#include "google/cloud/speech/v1/internal/speech_retry_traits.h"
#include "google/cloud/speech/v1/speech_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/speech/v1/cloud_speech.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace speech_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SpeechConnection`.
class SpeechRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SpeechRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SpeechConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SpeechLimitedErrorCountRetryPolicy : public SpeechRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SpeechLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SpeechLimitedErrorCountRetryPolicy(
      SpeechLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SpeechLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  SpeechLimitedErrorCountRetryPolicy(
      SpeechLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SpeechLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SpeechRetryPolicy> clone() const override {
    return std::make_unique<SpeechLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SpeechRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      speech_v1_internal::SpeechRetryTraits>
      impl_;
};

/**
 * A retry policy for `SpeechConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SpeechLimitedTimeRetryPolicy : public SpeechRetryPolicy {
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
  explicit SpeechLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SpeechLimitedTimeRetryPolicy(SpeechLimitedTimeRetryPolicy&& rhs) noexcept
      : SpeechLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SpeechLimitedTimeRetryPolicy(SpeechLimitedTimeRetryPolicy const& rhs) noexcept
      : SpeechLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<SpeechRetryPolicy> clone() const override {
    return std::make_unique<SpeechLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SpeechRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      speech_v1_internal::SpeechRetryTraits>
      impl_;
};

/**
 * The `SpeechConnection` object for `SpeechClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SpeechClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SpeechClient`.
 *
 * To create a concrete instance, see `MakeSpeechConnection()`.
 *
 * For mocking, see `speech_v1_mocks::MockSpeechConnection`.
 */
class SpeechConnection {
 public:
  virtual ~SpeechConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::speech::v1::RecognizeResponse> Recognize(
      google::cloud::speech::v1::RecognizeRequest const& request);

  virtual future<
      StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(
      google::cloud::speech::v1::LongRunningRecognizeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> LongRunningRecognize(
      NoAwaitTag,
      google::cloud::speech::v1::LongRunningRecognizeRequest const& request);

  virtual future<
      StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(google::longrunning::Operation const& operation);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v1::StreamingRecognizeRequest,
      google::cloud::speech::v1::StreamingRecognizeResponse>>
  AsyncStreamingRecognize();

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `SpeechConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SpeechClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SpeechConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::speech_v1::SpeechPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SpeechConnection` created by
 * this function.
 */
std::shared_ptr<SpeechConnection> MakeSpeechConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_SPEECH_CONNECTION_H
