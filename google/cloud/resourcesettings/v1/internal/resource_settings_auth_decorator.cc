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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/internal/disable_deprecation_warnings.inc"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_auth_decorator.h"
#include <google/cloud/resourcesettings/v1/resource_settings.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourceSettingsServiceAuth::ResourceSettingsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ResourceSettingsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::resourcesettings::v1::ListSettingsResponse>
ResourceSettingsServiceAuth::ListSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::ListSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSettings(context, options, request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceAuth::GetSetting(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSetting(context, options, request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceAuth::UpdateSetting(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSetting(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
