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
// source: google/cloud/apphub/v1/apphub_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_TRACING_CONNECTION_H

#include "google/cloud/apphub/v1/app_hub_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apphub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AppHubTracingConnection : public apphub_v1::AppHubConnection {
 public:
  ~AppHubTracingConnection() override = default;

  explicit AppHubTracingConnection(
      std::shared_ptr<apphub_v1::AppHubConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse>
  LookupServiceProjectAttachment(
      google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&
          request) override;

  StreamRange<google::cloud::apphub::v1::ServiceProjectAttachment>
  ListServiceProjectAttachments(
      google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest request)
      override;

  future<StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>>
  CreateServiceProjectAttachment(
      google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateServiceProjectAttachment(
      NoAwaitTag,
      google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>>
  CreateServiceProjectAttachment(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>
  GetServiceProjectAttachment(
      google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>>
  DeleteServiceProjectAttachment(
      google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteServiceProjectAttachment(
      NoAwaitTag,
      google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
          request) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>>
  DeleteServiceProjectAttachment(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse>
  DetachServiceProjectAttachment(
      google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&
          request) override;

  StreamRange<google::cloud::apphub::v1::DiscoveredService>
  ListDiscoveredServices(
      google::cloud::apphub::v1::ListDiscoveredServicesRequest request)
      override;

  StatusOr<google::cloud::apphub::v1::DiscoveredService> GetDiscoveredService(
      google::cloud::apphub::v1::GetDiscoveredServiceRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::LookupDiscoveredServiceResponse>
  LookupDiscoveredService(
      google::cloud::apphub::v1::LookupDiscoveredServiceRequest const& request)
      override;

  StreamRange<google::cloud::apphub::v1::Service> ListServices(
      google::cloud::apphub::v1::ListServicesRequest request) override;

  future<StatusOr<google::cloud::apphub::v1::Service>> CreateService(
      google::cloud::apphub::v1::CreateServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateService(
      NoAwaitTag,
      google::cloud::apphub::v1::CreateServiceRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Service>> CreateService(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::apphub::v1::Service> GetService(
      google::cloud::apphub::v1::GetServiceRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Service>> UpdateService(
      google::cloud::apphub::v1::UpdateServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateService(
      NoAwaitTag,
      google::cloud::apphub::v1::UpdateServiceRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Service>> UpdateService(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>> DeleteService(
      google::cloud::apphub::v1::DeleteServiceRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteService(
      NoAwaitTag,
      google::cloud::apphub::v1::DeleteServiceRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>> DeleteService(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::apphub::v1::DiscoveredWorkload>
  ListDiscoveredWorkloads(
      google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest request)
      override;

  StatusOr<google::cloud::apphub::v1::DiscoveredWorkload> GetDiscoveredWorkload(
      google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse>
  LookupDiscoveredWorkload(
      google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const& request)
      override;

  StreamRange<google::cloud::apphub::v1::Workload> ListWorkloads(
      google::cloud::apphub::v1::ListWorkloadsRequest request) override;

  future<StatusOr<google::cloud::apphub::v1::Workload>> CreateWorkload(
      google::cloud::apphub::v1::CreateWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateWorkload(
      NoAwaitTag,
      google::cloud::apphub::v1::CreateWorkloadRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Workload>> CreateWorkload(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::apphub::v1::Workload> GetWorkload(
      google::cloud::apphub::v1::GetWorkloadRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Workload>> UpdateWorkload(
      google::cloud::apphub::v1::UpdateWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateWorkload(
      NoAwaitTag,
      google::cloud::apphub::v1::UpdateWorkloadRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Workload>> UpdateWorkload(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>> DeleteWorkload(
      google::cloud::apphub::v1::DeleteWorkloadRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteWorkload(
      NoAwaitTag,
      google::cloud::apphub::v1::DeleteWorkloadRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>> DeleteWorkload(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::apphub::v1::Application> ListApplications(
      google::cloud::apphub::v1::ListApplicationsRequest request) override;

  future<StatusOr<google::cloud::apphub::v1::Application>> CreateApplication(
      google::cloud::apphub::v1::CreateApplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateApplication(
      NoAwaitTag,
      google::cloud::apphub::v1::CreateApplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::apphub::v1::Application>> CreateApplication(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::apphub::v1::Application> GetApplication(
      google::cloud::apphub::v1::GetApplicationRequest const& request) override;

  future<StatusOr<google::cloud::apphub::v1::Application>> UpdateApplication(
      google::cloud::apphub::v1::UpdateApplicationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateApplication(
      NoAwaitTag,
      google::cloud::apphub::v1::UpdateApplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::apphub::v1::Application>> UpdateApplication(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>>
  DeleteApplication(google::cloud::apphub::v1::DeleteApplicationRequest const&
                        request) override;

  StatusOr<google::longrunning::Operation> DeleteApplication(
      NoAwaitTag,
      google::cloud::apphub::v1::DeleteApplicationRequest const& request)
      override;

  future<StatusOr<google::cloud::apphub::v1::OperationMetadata>>
  DeleteApplication(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<apphub_v1::AppHubConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<apphub_v1::AppHubConnection> MakeAppHubTracingConnection(
    std::shared_ptr<apphub_v1::AppHubConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apphub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPHUB_V1_INTERNAL_APP_HUB_TRACING_CONNECTION_H
