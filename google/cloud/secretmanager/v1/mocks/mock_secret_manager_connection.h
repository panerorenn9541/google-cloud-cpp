// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_MOCKS_MOCK_SECRET_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_MOCKS_MOCK_SECRET_MANAGER_CONNECTION_H

#include "google/cloud/secretmanager/v1/secret_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace secretmanager_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SecretManagerServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SecretManagerServiceClient`. To do
 * so, construct an object of type `SecretManagerServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSecretManagerServiceConnection
    : public secretmanager_v1::SecretManagerServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::secretmanager::v1::Secret>),
              ListSecrets,
              (google::cloud::secretmanager::v1::ListSecretsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::Secret>, CreateSecret,
      (google::cloud::secretmanager::v1::CreateSecretRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::secretmanager::v1::SecretVersion>,
              AddSecretVersion,
              (google::cloud::secretmanager::v1::AddSecretVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::Secret>, GetSecret,
      (google::cloud::secretmanager::v1::GetSecretRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::Secret>, UpdateSecret,
      (google::cloud::secretmanager::v1::UpdateSecretRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteSecret,
      (google::cloud::secretmanager::v1::DeleteSecretRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::secretmanager::v1::SecretVersion>),
      ListSecretVersions,
      (google::cloud::secretmanager::v1::ListSecretVersionsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::secretmanager::v1::SecretVersion>,
              GetSecretVersion,
              (google::cloud::secretmanager::v1::GetSecretVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>,
      AccessSecretVersion,
      (google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::SecretVersion>,
      DisableSecretVersion,
      (google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::SecretVersion>,
      EnableSecretVersion,
      (google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::secretmanager::v1::SecretVersion>,
      DestroySecretVersion,
      (google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_MOCKS_MOCK_SECRET_MANAGER_CONNECTION_H
