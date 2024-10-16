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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/internal/environments_stub_factory.h"
#include "google/cloud/dialogflow_cx/internal/environments_auth_decorator.h"
#include "google/cloud/dialogflow_cx/internal/environments_logging_decorator.h"
#include "google/cloud/dialogflow_cx/internal/environments_metadata_decorator.h"
#include "google/cloud/dialogflow_cx/internal/environments_stub.h"
#include "google/cloud/dialogflow_cx/internal/environments_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/dialogflow/cx/v3/environment.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<EnvironmentsStub> CreateDefaultEnvironmentsStub(
    std::shared_ptr<internal::GrpcAuthenticationStrategy> auth,
    Options const& options) {
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::dialogflow::cx::v3::Environments::NewStub(channel);
  auto service_operations_stub =
      google::longrunning::Operations::NewStub(channel);
  auto service_locations_stub =
      google::cloud::location::Locations::NewStub(channel);
  std::shared_ptr<EnvironmentsStub> stub =
      std::make_shared<DefaultEnvironmentsStub>(
          std::move(service_grpc_stub), std::move(service_operations_stub),
          std::move(service_locations_stub),
          google::longrunning::Operations::NewStub(channel));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<EnvironmentsAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<EnvironmentsMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<LoggingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<EnvironmentsLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<LoggingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeEnvironmentsTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
