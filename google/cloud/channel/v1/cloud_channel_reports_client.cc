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

#include "google/cloud/internal/disable_deprecation_warnings.inc"
#include "google/cloud/channel/v1/cloud_channel_reports_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelReportsServiceClient::CloudChannelReportsServiceClient(
    std::shared_ptr<CloudChannelReportsServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudChannelReportsServiceClient::~CloudChannelReportsServiceClient() = default;

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceClient::RunReportJob(
    google::cloud::channel::v1::RunReportJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunReportJob(request);
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceClient::RunReportJob(
    NoAwaitTag, google::cloud::channel::v1::RunReportJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunReportJob(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceClient::RunReportJob(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunReportJob(operation);
}

StreamRange<google::cloud::channel::v1::Row>
CloudChannelReportsServiceClient::FetchReportResults(
    std::string const& report_job, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::channel::v1::FetchReportResultsRequest request;
  request.set_report_job(report_job);
  return connection_->FetchReportResults(request);
}

StreamRange<google::cloud::channel::v1::Row>
CloudChannelReportsServiceClient::FetchReportResults(
    google::cloud::channel::v1::FetchReportResultsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchReportResults(std::move(request));
}

StreamRange<google::cloud::channel::v1::Report>
CloudChannelReportsServiceClient::ListReports(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::channel::v1::ListReportsRequest request;
  request.set_parent(parent);
  return connection_->ListReports(request);
}

StreamRange<google::cloud::channel::v1::Report>
CloudChannelReportsServiceClient::ListReports(
    google::cloud::channel::v1::ListReportsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListReports(std::move(request));
}

StreamRange<google::longrunning::Operation>
CloudChannelReportsServiceClient::ListOperations(std::string const& name,
                                                 std::string const& filter,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
CloudChannelReportsServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceClient::GetOperation(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
CloudChannelReportsServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status CloudChannelReportsServiceClient::DeleteOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status CloudChannelReportsServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status CloudChannelReportsServiceClient::CancelOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status CloudChannelReportsServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google
