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
// source: google/cloud/datastream/v1/datastream.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H

#include "google/cloud/datastream/v1/datastream_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datastream_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DatastreamConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DatastreamClient`. To do so,
 * construct an object of type `DatastreamClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDatastreamConnection : public datastream_v1::DatastreamConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datastream::v1::ConnectionProfile>),
      ListConnectionProfiles,
      (google::cloud::datastream::v1::ListConnectionProfilesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::ConnectionProfile>,
              GetConnectionProfile,
              (google::cloud::datastream::v1::GetConnectionProfileRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnectionProfile(Matcher<google::cloud::datastream::v1::CreateConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (google::cloud::datastream::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnectionProfile,
      (NoAwaitTag,
       google::cloud::datastream::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnectionProfile(Matcher<google::cloud::datastream::v1::UpdateConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConnectionProfile,
      (NoAwaitTag,
       google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnectionProfile(Matcher<google::cloud::datastream::v1::DeleteConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnectionProfile,
      (NoAwaitTag,
       google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::datastream::v1::DiscoverConnectionProfileResponse>,
      DiscoverConnectionProfile,
      (google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
           request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::Stream>), ListStreams,
              (google::cloud::datastream::v1::ListStreamsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::Stream>, GetStream,
              (google::cloud::datastream::v1::GetStreamRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateStream(Matcher<google::cloud::datastream::v1::CreateStreamRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Stream>>, CreateStream,
      (google::cloud::datastream::v1::CreateStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateStream(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateStream,
      (NoAwaitTag,
       google::cloud::datastream::v1::CreateStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateStream(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Stream>>,
              CreateStream, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateStream(Matcher<google::cloud::datastream::v1::UpdateStreamRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Stream>>, UpdateStream,
      (google::cloud::datastream::v1::UpdateStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateStream(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateStream,
      (NoAwaitTag,
       google::cloud::datastream::v1::UpdateStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateStream(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Stream>>,
              UpdateStream, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteStream(Matcher<google::cloud::datastream::v1::DeleteStreamRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteStream,
      (google::cloud::datastream::v1::DeleteStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteStream(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteStream,
      (NoAwaitTag,
       google::cloud::datastream::v1::DeleteStreamRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteStream(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteStream, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StreamObject>, GetStreamObject,
      (google::cloud::datastream::v1::GetStreamObjectRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StreamObject>, LookupStreamObject,
      (google::cloud::datastream::v1::LookupStreamObjectRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::StreamObject>),
              ListStreamObjects,
              (google::cloud::datastream::v1::ListStreamObjectsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>,
      StartBackfillJob,
      (google::cloud::datastream::v1::StartBackfillJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>,
      StopBackfillJob,
      (google::cloud::datastream::v1::StopBackfillJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<std::string>), FetchStaticIps,
              (google::cloud::datastream::v1::FetchStaticIpsRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePrivateConnection(Matcher<google::cloud::datastream::v1::CreatePrivateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>,
      CreatePrivateConnection,
      (google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreatePrivateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreatePrivateConnection,
      (NoAwaitTag,
       google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePrivateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>,
      CreatePrivateConnection,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::PrivateConnection>,
              GetPrivateConnection,
              (google::cloud::datastream::v1::GetPrivateConnectionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::datastream::v1::PrivateConnection>),
      ListPrivateConnections,
      (google::cloud::datastream::v1::ListPrivateConnectionsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePrivateConnection(Matcher<google::cloud::datastream::v1::DeletePrivateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeletePrivateConnection,
      (google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeletePrivateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePrivateConnection,
      (NoAwaitTag,
       google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePrivateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeletePrivateConnection,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateRoute(Matcher<google::cloud::datastream::v1::CreateRouteRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::Route>>, CreateRoute,
      (google::cloud::datastream::v1::CreateRouteRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateRoute(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateRoute,
      (NoAwaitTag,
       google::cloud::datastream::v1::CreateRouteRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateRoute(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::datastream::v1::Route>>,
              CreateRoute, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::datastream::v1::Route>, GetRoute,
              (google::cloud::datastream::v1::GetRouteRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::datastream::v1::Route>), ListRoutes,
              (google::cloud::datastream::v1::ListRoutesRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteRoute(Matcher<google::cloud::datastream::v1::DeleteRouteRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteRoute,
      (google::cloud::datastream::v1::DeleteRouteRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteRoute(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteRoute,
      (NoAwaitTag,
       google::cloud::datastream::v1::DeleteRouteRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteRoute(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>,
      DeleteRoute, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_MOCKS_MOCK_DATASTREAM_CONNECTION_H
