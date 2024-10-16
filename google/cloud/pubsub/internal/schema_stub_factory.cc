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
// source: google/pubsub/v1/schema.proto

#include "google/cloud/pubsub/internal/schema_stub_factory.h"
#include "google/cloud/pubsub/internal/schema_auth_decorator.h"
#include "google/cloud/pubsub/internal/schema_logging_decorator.h"
#include "google/cloud/pubsub/internal/schema_metadata_decorator.h"
#include "google/cloud/pubsub/internal/schema_stub.h"
#include "google/cloud/pubsub/internal/schema_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/pubsub/v1/schema.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<SchemaServiceStub> CreateDefaultSchemaServiceStub(
    std::shared_ptr<internal::GrpcAuthenticationStrategy> auth,
    Options const& options) {
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub = google::pubsub::v1::SchemaService::NewStub(channel);
  auto service_iampolicy_stub = google::iam::v1::IAMPolicy::NewStub(channel);
  std::shared_ptr<SchemaServiceStub> stub =
      std::make_shared<DefaultSchemaServiceStub>(
          std::move(service_grpc_stub), std::move(service_iampolicy_stub));

  if (auth->RequiresConfigureContext()) {
    stub =
        std::make_shared<SchemaServiceAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<SchemaServiceMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<LoggingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<SchemaServiceLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<LoggingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeSchemaServiceTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
