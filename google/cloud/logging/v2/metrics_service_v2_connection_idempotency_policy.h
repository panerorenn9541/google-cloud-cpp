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
// source: google/logging/v2/logging_metrics.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/logging/v2/logging_metrics.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetricsServiceV2ConnectionIdempotencyPolicy {
 public:
  virtual ~MetricsServiceV2ConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<MetricsServiceV2ConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListLogMetrics(
      google::logging::v2::ListLogMetricsRequest request);

  virtual google::cloud::Idempotency GetLogMetric(
      google::logging::v2::GetLogMetricRequest const& request);

  virtual google::cloud::Idempotency CreateLogMetric(
      google::logging::v2::CreateLogMetricRequest const& request);

  virtual google::cloud::Idempotency UpdateLogMetric(
      google::logging::v2::UpdateLogMetricRequest const& request);

  virtual google::cloud::Idempotency DeleteLogMetric(
      google::logging::v2::DeleteLogMetricRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<MetricsServiceV2ConnectionIdempotencyPolicy>
MakeDefaultMetricsServiceV2ConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_H
