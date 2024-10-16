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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BareMetalSolutionTracingConnection::BareMetalSolutionTracingConnection(
    std::shared_ptr<baremetalsolution_v2::BareMetalSolutionConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionTracingConnection::ListInstances(
    google::cloud::baremetalsolution::v2::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListInstances");
  internal::OTelScope scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::Instance>(std::move(span),
                                                      std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionTracingConnection::GetInstance(
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionTracingConnection::UpdateInstance(
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::UpdateInstance(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateInstance(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionTracingConnection::UpdateInstance(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(operation));
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionTracingConnection::RenameInstance(
    google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::RenameInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameInstance(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
BareMetalSolutionTracingConnection::ResetInstance(
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::ResetInstance(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResetInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->ResetInstance(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
BareMetalSolutionTracingConnection::ResetInstance(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResetInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
BareMetalSolutionTracingConnection::StartInstance(
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::StartInstance(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StartInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->StartInstance(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
BareMetalSolutionTracingConnection::StartInstance(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StartInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
BareMetalSolutionTracingConnection::StopInstance(
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::StopInstance(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StopInstance");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->StopInstance(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
BareMetalSolutionTracingConnection::StopInstance(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::StopInstance");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    EnableInteractiveSerialConsoleResponse>>
BareMetalSolutionTracingConnection::EnableInteractiveSerialConsole(
    google::cloud::baremetalsolution::v2::
        EnableInteractiveSerialConsoleRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "EnableInteractiveSerialConsole");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->EnableInteractiveSerialConsole(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::EnableInteractiveSerialConsole(
    NoAwaitTag, google::cloud::baremetalsolution::v2::
                    EnableInteractiveSerialConsoleRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "EnableInteractiveSerialConsole");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->EnableInteractiveSerialConsole(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    EnableInteractiveSerialConsoleResponse>>
BareMetalSolutionTracingConnection::EnableInteractiveSerialConsole(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "EnableInteractiveSerialConsole");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->EnableInteractiveSerialConsole(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    DisableInteractiveSerialConsoleResponse>>
BareMetalSolutionTracingConnection::DisableInteractiveSerialConsole(
    google::cloud::baremetalsolution::v2::
        DisableInteractiveSerialConsoleRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "DisableInteractiveSerialConsole");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DisableInteractiveSerialConsole(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::DisableInteractiveSerialConsole(
    NoAwaitTag, google::cloud::baremetalsolution::v2::
                    DisableInteractiveSerialConsoleRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "DisableInteractiveSerialConsole");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DisableInteractiveSerialConsole(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    DisableInteractiveSerialConsoleResponse>>
BareMetalSolutionTracingConnection::DisableInteractiveSerialConsole(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "DisableInteractiveSerialConsole");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DisableInteractiveSerialConsole(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionTracingConnection::DetachLun(
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DetachLun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DetachLun(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::DetachLun(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DetachLun");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DetachLun(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionTracingConnection::DetachLun(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DetachLun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DetachLun(operation));
}

StreamRange<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionTracingConnection::ListSSHKeys(
    google::cloud::baremetalsolution::v2::ListSSHKeysRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListSSHKeys");
  internal::OTelScope scope(span);
  auto sr = child_->ListSSHKeys(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::SSHKey>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionTracingConnection::CreateSSHKey(
    google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::CreateSSHKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSSHKey(request));
}

Status BareMetalSolutionTracingConnection::DeleteSSHKey(
    google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DeleteSSHKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSSHKey(request));
}

StreamRange<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionTracingConnection::ListVolumes(
    google::cloud::baremetalsolution::v2::ListVolumesRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListVolumes");
  internal::OTelScope scope(span);
  auto sr = child_->ListVolumes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::Volume>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionTracingConnection::GetVolume(
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVolume(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionTracingConnection::UpdateVolume(
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateVolume(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::UpdateVolume(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateVolume");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateVolume(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionTracingConnection::UpdateVolume(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateVolume(operation));
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionTracingConnection::RenameVolume(
    google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::RenameVolume");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameVolume(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::EvictVolume(
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EvictVolume(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::EvictVolume(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictVolume");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->EvictVolume(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::EvictVolume(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EvictVolume(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionTracingConnection::ResizeVolume(
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResizeVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResizeVolume(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::ResizeVolume(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResizeVolume");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->ResizeVolume(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionTracingConnection::ResizeVolume(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ResizeVolume");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ResizeVolume(operation));
}

StreamRange<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionTracingConnection::ListNetworks(
    google::cloud::baremetalsolution::v2::ListNetworksRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListNetworks");
  internal::OTelScope scope(span);
  auto sr = child_->ListNetworks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::Network>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionTracingConnection::ListNetworkUsage(
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListNetworkUsage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListNetworkUsage(request));
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionTracingConnection::GetNetwork(
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetwork(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
BareMetalSolutionTracingConnection::UpdateNetwork(
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNetwork(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::UpdateNetwork(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNetwork");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateNetwork(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
BareMetalSolutionTracingConnection::UpdateNetwork(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNetwork");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNetwork(operation));
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionTracingConnection::CreateVolumeSnapshot(
    google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "CreateVolumeSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateVolumeSnapshot(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
BareMetalSolutionTracingConnection::RestoreVolumeSnapshot(
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "RestoreVolumeSnapshot");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RestoreVolumeSnapshot(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::RestoreVolumeSnapshot(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "RestoreVolumeSnapshot");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->RestoreVolumeSnapshot(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
BareMetalSolutionTracingConnection::RestoreVolumeSnapshot(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "RestoreVolumeSnapshot");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RestoreVolumeSnapshot(operation));
}

Status BareMetalSolutionTracingConnection::DeleteVolumeSnapshot(
    google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "DeleteVolumeSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteVolumeSnapshot(request));
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionTracingConnection::GetVolumeSnapshot(
    google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetVolumeSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVolumeSnapshot(request));
}

StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionTracingConnection::ListVolumeSnapshots(
    google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListVolumeSnapshots");
  internal::OTelScope scope(span);
  auto sr = child_->ListVolumeSnapshots(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::VolumeSnapshot>(std::move(span),
                                                            std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionTracingConnection::GetLun(
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetLun");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLun(request));
}

StreamRange<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionTracingConnection::ListLuns(
    google::cloud::baremetalsolution::v2::ListLunsRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListLuns");
  internal::OTelScope scope(span);
  auto sr = child_->ListLuns(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::Lun>(std::move(span),
                                                 std::move(sr));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::EvictLun(
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictLun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EvictLun(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::EvictLun(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictLun");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->EvictLun(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::EvictLun(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::EvictLun");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EvictLun(operation));
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionTracingConnection::GetNfsShare(
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetNfsShare");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNfsShare(request));
}

StreamRange<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionTracingConnection::ListNfsShares(
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListNfsShares");
  internal::OTelScope scope(span);
  auto sr = child_->ListNfsShares(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::NfsShare>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionTracingConnection::UpdateNfsShare(
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNfsShare(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::UpdateNfsShare(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNfsShare");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateNfsShare(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionTracingConnection::UpdateNfsShare(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::UpdateNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNfsShare(operation));
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionTracingConnection::CreateNfsShare(
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::CreateNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNfsShare(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::CreateNfsShare(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::CreateNfsShare");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateNfsShare(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionTracingConnection::CreateNfsShare(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::CreateNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNfsShare(operation));
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionTracingConnection::RenameNfsShare(
    google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::RenameNfsShare");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameNfsShare(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::DeleteNfsShare(
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DeleteNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNfsShare(request));
}

StatusOr<google::longrunning::Operation>
BareMetalSolutionTracingConnection::DeleteNfsShare(
    NoAwaitTag,
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DeleteNfsShare");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteNfsShare(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionTracingConnection::DeleteNfsShare(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::DeleteNfsShare");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNfsShare(operation));
}

StreamRange<google::cloud::baremetalsolution::v2::ProvisioningQuota>
BareMetalSolutionTracingConnection::ListProvisioningQuotas(
    google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "ListProvisioningQuotas");
  internal::OTelScope scope(span);
  auto sr = child_->ListProvisioningQuotas(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::ProvisioningQuota>(std::move(span),
                                                               std::move(sr));
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
BareMetalSolutionTracingConnection::SubmitProvisioningConfig(
    google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "SubmitProvisioningConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SubmitProvisioningConfig(request));
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionTracingConnection::GetProvisioningConfig(
    google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "GetProvisioningConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProvisioningConfig(request));
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionTracingConnection::CreateProvisioningConfig(
    google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "CreateProvisioningConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateProvisioningConfig(request));
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionTracingConnection::UpdateProvisioningConfig(
    google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::"
      "UpdateProvisioningConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateProvisioningConfig(request));
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionTracingConnection::RenameNetwork(
    google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::RenameNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameNetwork(request));
}

StreamRange<google::cloud::baremetalsolution::v2::OSImage>
BareMetalSolutionTracingConnection::ListOSImages(
    google::cloud::baremetalsolution::v2::ListOSImagesRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListOSImages");
  internal::OTelScope scope(span);
  auto sr = child_->ListOSImages(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::baremetalsolution::v2::OSImage>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::location::Location>
BareMetalSolutionTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
BareMetalSolutionTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "baremetalsolution_v2::BareMetalSolutionConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<baremetalsolution_v2::BareMetalSolutionConnection>
MakeBareMetalSolutionTracingConnection(
    std::shared_ptr<baremetalsolution_v2::BareMetalSolutionConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<BareMetalSolutionTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google
