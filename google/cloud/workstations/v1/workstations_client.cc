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
// source: google/cloud/workstations/v1/workstations.proto

#include "google/cloud/workstations/v1/workstations_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workstations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkstationsClient::WorkstationsClient(
    std::shared_ptr<WorkstationsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
WorkstationsClient::~WorkstationsClient() = default;

StatusOr<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsClient::GetWorkstationCluster(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::GetWorkstationClusterRequest request;
  request.set_name(name);
  return connection_->GetWorkstationCluster(request);
}

StatusOr<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsClient::GetWorkstationCluster(
    google::cloud::workstations::v1::GetWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkstationCluster(request);
}

StreamRange<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsClient::ListWorkstationClusters(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::ListWorkstationClustersRequest request;
  request.set_parent(parent);
  return connection_->ListWorkstationClusters(request);
}

StreamRange<google::cloud::workstations::v1::WorkstationCluster>
WorkstationsClient::ListWorkstationClusters(
    google::cloud::workstations::v1::ListWorkstationClustersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkstationClusters(std::move(request));
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::CreateWorkstationCluster(
    std::string const& parent,
    google::cloud::workstations::v1::WorkstationCluster const&
        workstation_cluster,
    std::string const& workstation_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationClusterRequest request;
  request.set_parent(parent);
  *request.mutable_workstation_cluster() = workstation_cluster;
  request.set_workstation_cluster_id(workstation_cluster_id);
  return connection_->CreateWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::CreateWorkstationCluster(
    NoAwaitTag, std::string const& parent,
    google::cloud::workstations::v1::WorkstationCluster const&
        workstation_cluster,
    std::string const& workstation_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationClusterRequest request;
  request.set_parent(parent);
  *request.mutable_workstation_cluster() = workstation_cluster;
  request.set_workstation_cluster_id(workstation_cluster_id);
  return connection_->CreateWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::CreateWorkstationCluster(
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::CreateWorkstationCluster(
    NoAwaitTag,
    google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::CreateWorkstationCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationCluster(operation);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::UpdateWorkstationCluster(
    google::cloud::workstations::v1::WorkstationCluster const&
        workstation_cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationClusterRequest request;
  *request.mutable_workstation_cluster() = workstation_cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::UpdateWorkstationCluster(
    NoAwaitTag,
    google::cloud::workstations::v1::WorkstationCluster const&
        workstation_cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationClusterRequest request;
  *request.mutable_workstation_cluster() = workstation_cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::UpdateWorkstationCluster(
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::UpdateWorkstationCluster(
    NoAwaitTag,
    google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::UpdateWorkstationCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationCluster(operation);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::DeleteWorkstationCluster(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationClusterRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::DeleteWorkstationCluster(NoAwaitTag,
                                             std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationClusterRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::DeleteWorkstationCluster(
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationCluster(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::DeleteWorkstationCluster(
    NoAwaitTag,
    google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>
WorkstationsClient::DeleteWorkstationCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationCluster(operation);
}

StatusOr<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::GetWorkstationConfig(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::GetWorkstationConfigRequest request;
  request.set_name(name);
  return connection_->GetWorkstationConfig(request);
}

StatusOr<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::GetWorkstationConfig(
    google::cloud::workstations::v1::GetWorkstationConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkstationConfig(request);
}

StreamRange<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::ListWorkstationConfigs(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::ListWorkstationConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkstationConfigs(request);
}

StreamRange<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::ListWorkstationConfigs(
    google::cloud::workstations::v1::ListWorkstationConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkstationConfigs(std::move(request));
}

StreamRange<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::ListUsableWorkstationConfigs(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListUsableWorkstationConfigs(request);
}

StreamRange<google::cloud::workstations::v1::WorkstationConfig>
WorkstationsClient::ListUsableWorkstationConfigs(
    google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUsableWorkstationConfigs(std::move(request));
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::CreateWorkstationConfig(
    std::string const& parent,
    google::cloud::workstations::v1::WorkstationConfig const&
        workstation_config,
    std::string const& workstation_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationConfigRequest request;
  request.set_parent(parent);
  *request.mutable_workstation_config() = workstation_config;
  request.set_workstation_config_id(workstation_config_id);
  return connection_->CreateWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::CreateWorkstationConfig(
    NoAwaitTag, std::string const& parent,
    google::cloud::workstations::v1::WorkstationConfig const&
        workstation_config,
    std::string const& workstation_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationConfigRequest request;
  request.set_parent(parent);
  *request.mutable_workstation_config() = workstation_config;
  request.set_workstation_config_id(workstation_config_id);
  return connection_->CreateWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::CreateWorkstationConfig(
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::CreateWorkstationConfig(
    NoAwaitTag,
    google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::CreateWorkstationConfig(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstationConfig(operation);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::UpdateWorkstationConfig(
    google::cloud::workstations::v1::WorkstationConfig const&
        workstation_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationConfigRequest request;
  *request.mutable_workstation_config() = workstation_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::UpdateWorkstationConfig(
    NoAwaitTag,
    google::cloud::workstations::v1::WorkstationConfig const&
        workstation_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationConfigRequest request;
  *request.mutable_workstation_config() = workstation_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::UpdateWorkstationConfig(
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::UpdateWorkstationConfig(
    NoAwaitTag,
    google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::UpdateWorkstationConfig(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstationConfig(operation);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::DeleteWorkstationConfig(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationConfigRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::DeleteWorkstationConfig(NoAwaitTag, std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationConfigRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::DeleteWorkstationConfig(
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationConfig(request);
}

StatusOr<google::longrunning::Operation>
WorkstationsClient::DeleteWorkstationConfig(
    NoAwaitTag,
    google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>
WorkstationsClient::DeleteWorkstationConfig(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstationConfig(operation);
}

StatusOr<google::cloud::workstations::v1::Workstation>
WorkstationsClient::GetWorkstation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::GetWorkstationRequest request;
  request.set_name(name);
  return connection_->GetWorkstation(request);
}

StatusOr<google::cloud::workstations::v1::Workstation>
WorkstationsClient::GetWorkstation(
    google::cloud::workstations::v1::GetWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkstation(request);
}

StreamRange<google::cloud::workstations::v1::Workstation>
WorkstationsClient::ListWorkstations(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::ListWorkstationsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkstations(request);
}

StreamRange<google::cloud::workstations::v1::Workstation>
WorkstationsClient::ListWorkstations(
    google::cloud::workstations::v1::ListWorkstationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkstations(std::move(request));
}

StreamRange<google::cloud::workstations::v1::Workstation>
WorkstationsClient::ListUsableWorkstations(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::ListUsableWorkstationsRequest request;
  request.set_parent(parent);
  return connection_->ListUsableWorkstations(request);
}

StreamRange<google::cloud::workstations::v1::Workstation>
WorkstationsClient::ListUsableWorkstations(
    google::cloud::workstations::v1::ListUsableWorkstationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUsableWorkstations(std::move(request));
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::CreateWorkstation(
    std::string const& parent,
    google::cloud::workstations::v1::Workstation const& workstation,
    std::string const& workstation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationRequest request;
  request.set_parent(parent);
  *request.mutable_workstation() = workstation;
  request.set_workstation_id(workstation_id);
  return connection_->CreateWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::CreateWorkstation(
    NoAwaitTag, std::string const& parent,
    google::cloud::workstations::v1::Workstation const& workstation,
    std::string const& workstation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::CreateWorkstationRequest request;
  request.set_parent(parent);
  *request.mutable_workstation() = workstation;
  request.set_workstation_id(workstation_id);
  return connection_->CreateWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::CreateWorkstation(
    google::cloud::workstations::v1::CreateWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::CreateWorkstation(
    NoAwaitTag,
    google::cloud::workstations::v1::CreateWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::CreateWorkstation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkstation(operation);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::UpdateWorkstation(
    google::cloud::workstations::v1::Workstation const& workstation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationRequest request;
  *request.mutable_workstation() = workstation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::UpdateWorkstation(
    NoAwaitTag, google::cloud::workstations::v1::Workstation const& workstation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::UpdateWorkstationRequest request;
  *request.mutable_workstation() = workstation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::UpdateWorkstation(
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::UpdateWorkstation(
    NoAwaitTag,
    google::cloud::workstations::v1::UpdateWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::UpdateWorkstation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkstation(operation);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::DeleteWorkstation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::DeleteWorkstation(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::DeleteWorkstationRequest request;
  request.set_name(name);
  return connection_->DeleteWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::DeleteWorkstation(
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::DeleteWorkstation(
    NoAwaitTag,
    google::cloud::workstations::v1::DeleteWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::DeleteWorkstation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkstation(operation);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StartWorkstation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::StartWorkstationRequest request;
  request.set_name(name);
  return connection_->StartWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::StartWorkstation(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::StartWorkstationRequest request;
  request.set_name(name);
  return connection_->StartWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StartWorkstation(
    google::cloud::workstations::v1::StartWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::StartWorkstation(
    NoAwaitTag,
    google::cloud::workstations::v1::StartWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StartWorkstation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartWorkstation(operation);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StopWorkstation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::StopWorkstationRequest request;
  request.set_name(name);
  return connection_->StopWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::StopWorkstation(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::StopWorkstationRequest request;
  request.set_name(name);
  return connection_->StopWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StopWorkstation(
    google::cloud::workstations::v1::StopWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopWorkstation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::StopWorkstation(
    NoAwaitTag,
    google::cloud::workstations::v1::StopWorkstationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopWorkstation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workstations::v1::Workstation>>
WorkstationsClient::StopWorkstation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopWorkstation(operation);
}

StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
WorkstationsClient::GenerateAccessToken(std::string const& workstation,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workstations::v1::GenerateAccessTokenRequest request;
  request.set_workstation(workstation);
  return connection_->GenerateAccessToken(request);
}

StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>
WorkstationsClient::GenerateAccessToken(
    google::cloud::workstations::v1::GenerateAccessTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateAccessToken(request);
}

StatusOr<google::iam::v1::Policy> WorkstationsClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> WorkstationsClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
WorkstationsClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation> WorkstationsClient::ListOperations(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation> WorkstationsClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> WorkstationsClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> WorkstationsClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status WorkstationsClient::DeleteOperation(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status WorkstationsClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status WorkstationsClient::CancelOperation(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status WorkstationsClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1
}  // namespace cloud
}  // namespace google
