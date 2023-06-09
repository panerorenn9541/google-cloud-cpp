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
// source: google/cloud/connectors/v1/connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_METADATA_DECORATOR_H

#include "google/cloud/connectors/v1/internal/connectors_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConnectorsMetadata : public ConnectorsStub {
 public:
  ~ConnectorsMetadata() override = default;
  explicit ConnectorsMetadata(
      std::shared_ptr<ConnectorsStub> child,
      std::multimap<std::string, std::string> fixed_metadata = {});

  StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
  ListConnections(grpc::ClientContext& context,
                  google::cloud::connectors::v1::ListConnectionsRequest const&
                      request) override;

  StatusOr<google::cloud::connectors::v1::Connection> GetConnection(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::connectors::v1::CreateConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::connectors::v1::UpdateConnectionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::connectors::v1::DeleteConnectionRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ListProvidersResponse> ListProviders(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::ListProvidersRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::Provider> GetProvider(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetProviderRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
  ListConnectors(grpc::ClientContext& context,
                 google::cloud::connectors::v1::ListConnectorsRequest const&
                     request) override;

  StatusOr<google::cloud::connectors::v1::Connector> GetConnector(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetConnectorRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
  ListConnectorVersions(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::ListConnectorVersionsRequest const&
          request) override;

  StatusOr<google::cloud::connectors::v1::ConnectorVersion> GetConnectorVersion(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetConnectorVersionRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
  GetConnectionSchemaMetadata(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncRefreshConnectionSchemaMetadata(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::connectors::v1::
          RefreshConnectionSchemaMetadataRequest const& request) override;

  StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
  ListRuntimeEntitySchemas(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
          request) override;

  StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
  ListRuntimeActionSchemas(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
          request) override;

  StatusOr<google::cloud::connectors::v1::RuntimeConfig> GetRuntimeConfig(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetRuntimeConfigRequest const& request)
      override;

  StatusOr<google::cloud::connectors::v1::Settings> GetGlobalSettings(
      grpc::ClientContext& context,
      google::cloud::connectors::v1::GetGlobalSettingsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<ConnectorsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONNECTORS_V1_INTERNAL_CONNECTORS_METADATA_DECORATOR_H
