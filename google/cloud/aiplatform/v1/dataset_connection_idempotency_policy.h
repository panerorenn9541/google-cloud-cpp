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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_DATASET_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_DATASET_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/dataset_service.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatasetServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DatasetServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DatasetServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateDataset(
      google::cloud::aiplatform::v1::CreateDatasetRequest const& request);

  virtual google::cloud::Idempotency GetDataset(
      google::cloud::aiplatform::v1::GetDatasetRequest const& request);

  virtual google::cloud::Idempotency UpdateDataset(
      google::cloud::aiplatform::v1::UpdateDatasetRequest const& request);

  virtual google::cloud::Idempotency ListDatasets(
      google::cloud::aiplatform::v1::ListDatasetsRequest request);

  virtual google::cloud::Idempotency DeleteDataset(
      google::cloud::aiplatform::v1::DeleteDatasetRequest const& request);

  virtual google::cloud::Idempotency ImportData(
      google::cloud::aiplatform::v1::ImportDataRequest const& request);

  virtual google::cloud::Idempotency ExportData(
      google::cloud::aiplatform::v1::ExportDataRequest const& request);

  virtual google::cloud::Idempotency CreateDatasetVersion(
      google::cloud::aiplatform::v1::CreateDatasetVersionRequest const&
          request);

  virtual google::cloud::Idempotency UpdateDatasetVersion(
      google::cloud::aiplatform::v1::UpdateDatasetVersionRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDatasetVersion(
      google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const&
          request);

  virtual google::cloud::Idempotency GetDatasetVersion(
      google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request);

  virtual google::cloud::Idempotency ListDatasetVersions(
      google::cloud::aiplatform::v1::ListDatasetVersionsRequest request);

  virtual google::cloud::Idempotency RestoreDatasetVersion(
      google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
          request);

  virtual google::cloud::Idempotency ListDataItems(
      google::cloud::aiplatform::v1::ListDataItemsRequest request);

  virtual google::cloud::Idempotency SearchDataItems(
      google::cloud::aiplatform::v1::SearchDataItemsRequest request);

  virtual google::cloud::Idempotency ListSavedQueries(
      google::cloud::aiplatform::v1::ListSavedQueriesRequest request);

  virtual google::cloud::Idempotency DeleteSavedQuery(
      google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request);

  virtual google::cloud::Idempotency GetAnnotationSpec(
      google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request);

  virtual google::cloud::Idempotency ListAnnotations(
      google::cloud::aiplatform::v1::ListAnnotationsRequest request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);

  virtual google::cloud::Idempotency WaitOperation(
      google::longrunning::WaitOperationRequest const& request);
};

std::unique_ptr<DatasetServiceConnectionIdempotencyPolicy>
MakeDefaultDatasetServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_DATASET_CONNECTION_IDEMPOTENCY_POLICY_H
