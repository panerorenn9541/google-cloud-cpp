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
// source: google/cloud/security/privateca/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_INTERNAL_CERTIFICATE_AUTHORITY_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_INTERNAL_CERTIFICATE_AUTHORITY_AUTH_DECORATOR_H

#include "google/cloud/privateca/v1/internal/certificate_authority_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CertificateAuthorityServiceAuth : public CertificateAuthorityServiceStub {
 public:
  ~CertificateAuthorityServiceAuth() override = default;
  CertificateAuthorityServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<CertificateAuthorityServiceStub> child);

  StatusOr<google::cloud::security::privateca::v1::Certificate>
  CreateCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::CreateCertificateRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::Certificate> GetCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::GetCertificateRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::ListCertificatesResponse>
  ListCertificates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::ListCertificatesRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::Certificate>
  RevokeCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::RevokeCertificateRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::Certificate>
  UpdateCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::UpdateCertificateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncActivateCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> ActivateCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDisableCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> DisableCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncEnableCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> EnableCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const& request) override;

  StatusOr<google::cloud::security::privateca::v1::
               FetchCertificateAuthorityCsrResponse>
  FetchCertificateAuthorityCsr(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          FetchCertificateAuthorityCsrRequest const& request) override;

  StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
  GetCertificateAuthority(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          GetCertificateAuthorityRequest const& request) override;

  StatusOr<google::cloud::security::privateca::v1::
               ListCertificateAuthoritiesResponse>
  ListCertificateAuthorities(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          ListCertificateAuthoritiesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUndeleteCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> UndeleteCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateCertificateAuthority(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateCertificateAuthority(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCaPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateCaPool(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCaPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateCaPool(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::CaPool> GetCaPool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::GetCaPoolRequest const& request)
      override;

  StatusOr<google::cloud::security::privateca::v1::ListCaPoolsResponse>
  ListCaPools(grpc::ClientContext& context, Options const& options,
              google::cloud::security::privateca::v1::ListCaPoolsRequest const&
                  request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCaPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteCaPool(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
  FetchCaCerts(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::FetchCaCertsRequest const&
          request) override;

  StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
  GetCertificateRevocationList(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          GetCertificateRevocationListRequest const& request) override;

  StatusOr<google::cloud::security::privateca::v1::
               ListCertificateRevocationListsResponse>
  ListCertificateRevocationLists(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          ListCertificateRevocationListsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateCertificateRevocationList(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateCertificateRevocationList(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCertificateTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateCertificateTemplate(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteCertificateTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteCertificateTemplate(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const& request) override;

  StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
  GetCertificateTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          GetCertificateTemplateRequest const& request) override;

  StatusOr<
      google::cloud::security::privateca::v1::ListCertificateTemplatesResponse>
  ListCertificateTemplates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::security::privateca::v1::
          ListCertificateTemplatesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateCertificateTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateCertificateTemplate(
      grpc::ClientContext& context, Options options,
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<CertificateAuthorityServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_INTERNAL_CERTIFICATE_AUTHORITY_AUTH_DECORATOR_H
