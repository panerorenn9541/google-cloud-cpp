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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_TRACING_CONNECTION_H

#include "generator/integration_tests/golden/v1/golden_kitchen_sink_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class GoldenKitchenSinkTracingConnection
    : public golden_v1::GoldenKitchenSinkConnection {
 public:
  ~GoldenKitchenSinkTracingConnection() override = default;

  explicit GoldenKitchenSinkTracingConnection(
    std::shared_ptr<golden_v1::GoldenKitchenSinkConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request) override;

  StreamRange<std::string>
  ListLogs(google::test::admin::database::v1::ListLogsRequest request) override;

  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) override;

  Status
  DoNothing(google::protobuf::Empty const& request) override;

  Status
  Deprecated2(google::protobuf::Empty const& request) override;

  StreamRange<google::test::admin::database::v1::Response>
  StreamingRead(google::test::admin::database::v1::Request const& request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>
  AsyncStreamingReadWrite() override;

  Status
  ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

  Status
  ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request) override;

 private:
  std::shared_ptr<golden_v1::GoldenKitchenSinkConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_KITCHEN_SINK_TRACING_CONNECTION_H
