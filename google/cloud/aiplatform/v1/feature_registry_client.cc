// Copyright 2024 Google LLC
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
// source: google/cloud/aiplatform/v1/feature_registry_service.proto

#include "google/cloud/aiplatform/v1/feature_registry_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeatureRegistryServiceClient::FeatureRegistryServiceClient(
    std::shared_ptr<FeatureRegistryServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FeatureRegistryServiceClient::~FeatureRegistryServiceClient() = default;

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::CreateFeatureGroup(
    std::string const& parent,
    google::cloud::aiplatform::v1::FeatureGroup const& feature_group,
    std::string const& feature_group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureGroupRequest request;
  request.set_parent(parent);
  *request.mutable_feature_group() = feature_group;
  request.set_feature_group_id(feature_group_id);
  return connection_->CreateFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::CreateFeatureGroup(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::FeatureGroup const& feature_group,
    std::string const& feature_group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureGroupRequest request;
  request.set_parent(parent);
  *request.mutable_feature_group() = feature_group;
  request.set_feature_group_id(feature_group_id);
  return connection_->CreateFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::CreateFeatureGroup(
    google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::CreateFeatureGroup(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::CreateFeatureGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeatureGroup(operation);
}

StatusOr<google::cloud::aiplatform::v1::FeatureGroup>
FeatureRegistryServiceClient::GetFeatureGroup(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetFeatureGroupRequest request;
  request.set_name(name);
  return connection_->GetFeatureGroup(request);
}

StatusOr<google::cloud::aiplatform::v1::FeatureGroup>
FeatureRegistryServiceClient::GetFeatureGroup(
    google::cloud::aiplatform::v1::GetFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFeatureGroup(request);
}

StreamRange<google::cloud::aiplatform::v1::FeatureGroup>
FeatureRegistryServiceClient::ListFeatureGroups(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListFeatureGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListFeatureGroups(request);
}

StreamRange<google::cloud::aiplatform::v1::FeatureGroup>
FeatureRegistryServiceClient::ListFeatureGroups(
    google::cloud::aiplatform::v1::ListFeatureGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFeatureGroups(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::UpdateFeatureGroup(
    google::cloud::aiplatform::v1::FeatureGroup const& feature_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeatureGroupRequest request;
  *request.mutable_feature_group() = feature_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::UpdateFeatureGroup(
    NoAwaitTag,
    google::cloud::aiplatform::v1::FeatureGroup const& feature_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeatureGroupRequest request;
  *request.mutable_feature_group() = feature_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::UpdateFeatureGroup(
    google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::UpdateFeatureGroup(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdateFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::FeatureGroup>>
FeatureRegistryServiceClient::UpdateFeatureGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeatureGroup(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeatureGroup(std::string const& name,
                                                 bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureGroupRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::DeleteFeatureGroup(NoAwaitTag,
                                                 std::string const& name,
                                                 bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureGroupRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeatureGroup(
    google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureGroup(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::DeleteFeatureGroup(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureGroup(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeatureGroup(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeatureGroup(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::CreateFeature(
    std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature,
    std::string const& feature_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  request.set_feature_id(feature_id);
  return connection_->CreateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::CreateFeature(
    NoAwaitTag, std::string const& parent,
    google::cloud::aiplatform::v1::Feature const& feature,
    std::string const& feature_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_feature() = feature;
  request.set_feature_id(feature_id);
  return connection_->CreateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::CreateFeature(
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::CreateFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::CreateFeature(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFeature(operation);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeatureRegistryServiceClient::GetFeature(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::GetFeatureRequest request;
  request.set_name(name);
  return connection_->GetFeature(request);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeatureRegistryServiceClient::GetFeature(
    google::cloud::aiplatform::v1::GetFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFeature(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeatureRegistryServiceClient::ListFeatures(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ListFeaturesRequest request;
  request.set_parent(parent);
  return connection_->ListFeatures(request);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeatureRegistryServiceClient::ListFeatures(
    google::cloud::aiplatform::v1::ListFeaturesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFeatures(std::move(request));
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::UpdateFeature(
    google::cloud::aiplatform::v1::Feature const& feature,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeatureRequest request;
  *request.mutable_feature() = feature;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::UpdateFeature(
    NoAwaitTag, google::cloud::aiplatform::v1::Feature const& feature,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::UpdateFeatureRequest request;
  *request.mutable_feature() = feature;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::UpdateFeature(
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::UpdateFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeatureRegistryServiceClient::UpdateFeature(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFeature(operation);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeature(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureRequest request;
  request.set_name(name);
  return connection_->DeleteFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::DeleteFeature(NoAwaitTag, std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::DeleteFeatureRequest request;
  request.set_name(name);
  return connection_->DeleteFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeature(
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::DeleteFeature(
    NoAwaitTag,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeatureRegistryServiceClient::DeleteFeature(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFeature(operation);
}

StreamRange<google::cloud::location::Location>
FeatureRegistryServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
FeatureRegistryServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> FeatureRegistryServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> FeatureRegistryServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FeatureRegistryServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
FeatureRegistryServiceClient::ListOperations(std::string const& name,
                                             std::string const& filter,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
FeatureRegistryServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::GetOperation(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status FeatureRegistryServiceClient::DeleteOperation(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status FeatureRegistryServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status FeatureRegistryServiceClient::CancelOperation(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status FeatureRegistryServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

StatusOr<google::longrunning::Operation>
FeatureRegistryServiceClient::WaitOperation(
    google::longrunning::WaitOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WaitOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
