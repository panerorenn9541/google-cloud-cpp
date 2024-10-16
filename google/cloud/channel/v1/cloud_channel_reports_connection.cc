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
// source: google/cloud/channel/v1/reports_service.proto

#include "google/cloud/channel/v1/cloud_channel_reports_connection.h"
#include "google/cloud/channel/v1/cloud_channel_reports_options.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_connection_impl.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_option_defaults.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_stub_factory.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelReportsServiceConnection::~CloudChannelReportsServiceConnection() =
    default;

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceConnection::RunReportJob(
    google::cloud::channel::v1::RunReportJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::RunReportJobResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceConnection::RunReportJob(
    NoAwaitTag, google::cloud::channel::v1::RunReportJobRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceConnection::RunReportJob(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::channel::v1::RunReportJobResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::channel::v1::Row>
CloudChannelReportsServiceConnection::FetchReportResults(
    google::cloud::channel::v1::
        FetchReportResultsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Row>>();
}

StreamRange<google::cloud::channel::v1::Report>
CloudChannelReportsServiceConnection::ListReports(
    google::cloud::channel::v1::
        ListReportsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::channel::v1::Report>>();
}

StreamRange<google::longrunning::Operation>
CloudChannelReportsServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudChannelReportsServiceConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudChannelReportsServiceConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudChannelReportsServiceConnection>
MakeCloudChannelReportsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudChannelReportsServicePolicyOptionList>(
      options, __func__);
  options = channel_v1_internal::CloudChannelReportsServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = channel_v1_internal::CreateDefaultCloudChannelReportsServiceStub(
      std::move(auth), options);
  return channel_v1_internal::MakeCloudChannelReportsServiceTracingConnection(
      std::make_shared<
          channel_v1_internal::CloudChannelReportsServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google
