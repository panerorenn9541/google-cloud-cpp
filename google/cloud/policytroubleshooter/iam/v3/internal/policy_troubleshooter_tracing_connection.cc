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
// source: google/cloud/policytroubleshooter/iam/v3/troubleshooter.proto

#include "google/cloud/policytroubleshooter/iam/v3/internal/policy_troubleshooter_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_iam_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PolicyTroubleshooterTracingConnection::PolicyTroubleshooterTracingConnection(
    std::shared_ptr<policytroubleshooter_iam_v3::PolicyTroubleshooterConnection>
        child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::policytroubleshooter::iam::v3::TroubleshootIamPolicyResponse>
PolicyTroubleshooterTracingConnection::TroubleshootIamPolicy(
    google::cloud::policytroubleshooter::iam::v3::
        TroubleshootIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PolicyTroubleshooterConnection::"
      "TroubleshootIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TroubleshootIamPolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<policytroubleshooter_iam_v3::PolicyTroubleshooterConnection>
MakePolicyTroubleshooterTracingConnection(
    std::shared_ptr<policytroubleshooter_iam_v3::PolicyTroubleshooterConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PolicyTroubleshooterTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_iam_v3_internal
}  // namespace cloud
}  // namespace google
