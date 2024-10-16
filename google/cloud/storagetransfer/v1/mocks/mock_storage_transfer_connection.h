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
// source: google/storagetransfer/v1/transfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_MOCKS_MOCK_STORAGE_TRANSFER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_MOCKS_MOCK_STORAGE_TRANSFER_CONNECTION_H

#include "google/cloud/storagetransfer/v1/storage_transfer_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storagetransfer_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `StorageTransferServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `StorageTransferServiceClient`. To
 * do so, construct an object of type `StorageTransferServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockStorageTransferServiceConnection
    : public storagetransfer_v1::StorageTransferServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::GoogleServiceAccount>,
      GetGoogleServiceAccount,
      (google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::TransferJob>, CreateTransferJob,
      (google::storagetransfer::v1::CreateTransferJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::TransferJob>, UpdateTransferJob,
      (google::storagetransfer::v1::UpdateTransferJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::TransferJob>, GetTransferJob,
      (google::storagetransfer::v1::GetTransferJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::storagetransfer::v1::TransferJob>),
              ListTransferJobs,
              (google::storagetransfer::v1::ListTransferJobsRequest request),
              (override));

  MOCK_METHOD(Status, PauseTransferOperation,
              (google::storagetransfer::v1::PauseTransferOperationRequest const&
                   request),
              (override));

  MOCK_METHOD(
      Status, ResumeTransferOperation,
      (google::storagetransfer::v1::ResumeTransferOperationRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RunTransferJob(Matcher<google::storagetransfer::v1::RunTransferJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::storagetransfer::v1::TransferOperation>>,
      RunTransferJob,
      (google::storagetransfer::v1::RunTransferJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RunTransferJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RunTransferJob,
      (NoAwaitTag,
       google::storagetransfer::v1::RunTransferJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RunTransferJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::storagetransfer::v1::TransferOperation>>,
              RunTransferJob, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      Status, DeleteTransferJob,
      (google::storagetransfer::v1::DeleteTransferJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::AgentPool>, CreateAgentPool,
      (google::storagetransfer::v1::CreateAgentPoolRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::storagetransfer::v1::AgentPool>, UpdateAgentPool,
      (google::storagetransfer::v1::UpdateAgentPoolRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::storagetransfer::v1::AgentPool>, GetAgentPool,
              (google::storagetransfer::v1::GetAgentPoolRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::storagetransfer::v1::AgentPool>),
              ListAgentPools,
              (google::storagetransfer::v1::ListAgentPoolsRequest request),
              (override));

  MOCK_METHOD(
      Status, DeleteAgentPool,
      (google::storagetransfer::v1::DeleteAgentPoolRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGETRANSFER_V1_MOCKS_MOCK_STORAGE_TRANSFER_CONNECTION_H
