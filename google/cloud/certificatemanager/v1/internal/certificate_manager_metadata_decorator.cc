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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/v1/internal/certificate_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerMetadata::CertificateManagerMetadata(
    std::shared_ptr<CertificateManagerStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::certificatemanager::v1::ListCertificatesResponse>
CertificateManagerMetadata::ListCertificates(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::ListCertificatesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCertificates(context, request);
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerMetadata::GetCertificate(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::GetCertificateRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCertificate(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncCreateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateCertificate(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncUpdateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  SetMetadata(*context, "certificate.name=" + request.certificate().name());
  return child_->AsyncUpdateCertificate(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncDeleteCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteCertificate(cq, std::move(context), request);
}

StatusOr<google::cloud::certificatemanager::v1::ListCertificateMapsResponse>
CertificateManagerMetadata::ListCertificateMaps(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCertificateMaps(context, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerMetadata::GetCertificateMap(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCertificateMap(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncCreateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateCertificateMap(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncUpdateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  SetMetadata(*context,
              "certificate_map.name=" + request.certificate_map().name());
  return child_->AsyncUpdateCertificateMap(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncDeleteCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteCertificateMap(cq, std::move(context), request);
}

StatusOr<
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse>
CertificateManagerMetadata::ListCertificateMapEntries(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCertificateMapEntries(context, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerMetadata::GetCertificateMapEntry(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCertificateMapEntry(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncCreateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateCertificateMapEntry(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncUpdateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  SetMetadata(*context, "certificate_map_entry.name=" +
                            request.certificate_map_entry().name());
  return child_->AsyncUpdateCertificateMapEntry(cq, std::move(context),
                                                request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncDeleteCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteCertificateMapEntry(cq, std::move(context),
                                                request);
}

StatusOr<google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse>
CertificateManagerMetadata::ListDnsAuthorizations(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDnsAuthorizations(context, request);
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerMetadata::GetDnsAuthorization(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDnsAuthorization(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncCreateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateDnsAuthorization(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncUpdateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  SetMetadata(*context,
              "dns_authorization.name=" + request.dns_authorization().name());
  return child_->AsyncUpdateDnsAuthorization(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncDeleteDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteDnsAuthorization(cq, std::move(context), request);
}

StatusOr<google::cloud::certificatemanager::v1::
             ListCertificateIssuanceConfigsResponse>
CertificateManagerMetadata::ListCertificateIssuanceConfigs(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCertificateIssuanceConfigs(context, request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerMetadata::GetCertificateIssuanceConfig(
    grpc::ClientContext& context,
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCertificateIssuanceConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncCreateCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateCertificateIssuanceConfig(cq, std::move(context),
                                                      request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncDeleteCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteCertificateIssuanceConfig(cq, std::move(context),
                                                      request);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CertificateManagerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CertificateManagerMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CertificateManagerMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_internal
}  // namespace cloud
}  // namespace google
