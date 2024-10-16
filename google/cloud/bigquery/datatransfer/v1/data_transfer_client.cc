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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/data_transfer_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTransferServiceClient::DataTransferServiceClient(
    std::shared_ptr<DataTransferServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DataTransferServiceClient::~DataTransferServiceClient() = default;

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceClient::GetDataSource(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest request;
  request.set_name(name);
  return connection_->GetDataSource(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceClient::GetDataSource(
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDataSource(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceClient::ListDataSources(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest request;
  request.set_parent(parent);
  return connection_->ListDataSources(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceClient::ListDataSources(
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDataSources(std::move(request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::CreateTransferConfig(
    std::string const& parent,
    google::cloud::bigquery::datatransfer::v1::TransferConfig const&
        transfer_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::CreateTransferConfigRequest
      request;
  request.set_parent(parent);
  *request.mutable_transfer_config() = transfer_config;
  return connection_->CreateTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::CreateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::TransferConfig const&
        transfer_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::UpdateTransferConfigRequest
      request;
  *request.mutable_transfer_config() = transfer_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTransferConfig(request);
}

Status DataTransferServiceClient::DeleteTransferConfig(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::DeleteTransferConfigRequest
      request;
  request.set_name(name);
  return connection_->DeleteTransferConfig(request);
}

Status DataTransferServiceClient::DeleteTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::GetTransferConfig(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest request;
  request.set_name(name);
  return connection_->GetTransferConfig(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::GetTransferConfig(
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTransferConfig(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::ListTransferConfigs(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListTransferConfigs(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceClient::ListTransferConfigs(
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferConfigs(std::move(request));
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceClient::ScheduleTransferRuns(
    std::string const& parent, google::protobuf::Timestamp const& start_time,
    google::protobuf::Timestamp const& end_time, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsRequest
      request;
  request.set_parent(parent);
  *request.mutable_start_time() = start_time;
  *request.mutable_end_time() = end_time;
  return connection_->ScheduleTransferRuns(request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceClient::ScheduleTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ScheduleTransferRuns(request);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceClient::StartManualTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartManualTransferRuns(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceClient::GetTransferRun(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest request;
  request.set_name(name);
  return connection_->GetTransferRun(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceClient::GetTransferRun(
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTransferRun(request);
}

Status DataTransferServiceClient::DeleteTransferRun(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest request;
  request.set_name(name);
  return connection_->DeleteTransferRun(request);
}

Status DataTransferServiceClient::DeleteTransferRun(
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTransferRun(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceClient::ListTransferRuns(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest request;
  request.set_parent(parent);
  return connection_->ListTransferRuns(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceClient::ListTransferRuns(
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferRuns(std::move(request));
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
DataTransferServiceClient::ListTransferLogs(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest request;
  request.set_parent(parent);
  return connection_->ListTransferLogs(request);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
DataTransferServiceClient::ListTransferLogs(
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferLogs(std::move(request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceClient::CheckValidCreds(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest request;
  request.set_name(name);
  return connection_->CheckValidCreds(request);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceClient::CheckValidCreds(
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CheckValidCreds(request);
}

Status DataTransferServiceClient::EnrollDataSources(
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EnrollDataSources(request);
}

Status DataTransferServiceClient::UnenrollDataSources(
    google::cloud::bigquery::datatransfer::v1::UnenrollDataSourcesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UnenrollDataSources(request);
}

StreamRange<google::cloud::location::Location>
DataTransferServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
DataTransferServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1
}  // namespace cloud
}  // namespace google
