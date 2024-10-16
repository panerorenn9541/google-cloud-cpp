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
// source: google/cloud/managedkafka/v1/managed_kafka.proto

#include "google/cloud/managedkafka/v1/internal/managed_kafka_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/managedkafka/v1/managed_kafka.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedkafka_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedKafkaStub::~ManagedKafkaStub() = default;

StatusOr<google::cloud::managedkafka::v1::ListClustersResponse>
DefaultManagedKafkaStub::ListClusters(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::ListClustersRequest const& request) {
  google::cloud::managedkafka::v1::ListClustersResponse response;
  auto status = grpc_stub_->ListClusters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::Cluster>
DefaultManagedKafkaStub::GetCluster(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::GetClusterRequest const& request) {
  google::cloud::managedkafka::v1::Cluster response;
  auto status = grpc_stub_->GetCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedKafkaStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedkafka::v1::CreateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::managedkafka::v1::CreateClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultManagedKafkaStub::CreateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedKafkaStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedkafka::v1::UpdateClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::managedkafka::v1::UpdateClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultManagedKafkaStub::UpdateCluster(
    grpc::ClientContext& context, Options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedKafkaStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedkafka::v1::DeleteClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::managedkafka::v1::DeleteClusterRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultManagedKafkaStub::DeleteCluster(
    grpc::ClientContext& context, Options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteCluster(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse>
DefaultManagedKafkaStub::ListTopics(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::ListTopicsRequest const& request) {
  google::cloud::managedkafka::v1::ListTopicsResponse response;
  auto status = grpc_stub_->ListTopics(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::Topic>
DefaultManagedKafkaStub::GetTopic(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::GetTopicRequest const& request) {
  google::cloud::managedkafka::v1::Topic response;
  auto status = grpc_stub_->GetTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::Topic>
DefaultManagedKafkaStub::CreateTopic(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::CreateTopicRequest const& request) {
  google::cloud::managedkafka::v1::Topic response;
  auto status = grpc_stub_->CreateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::Topic>
DefaultManagedKafkaStub::UpdateTopic(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::UpdateTopicRequest const& request) {
  google::cloud::managedkafka::v1::Topic response;
  auto status = grpc_stub_->UpdateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultManagedKafkaStub::DeleteTopic(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::DeleteTopicRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
DefaultManagedKafkaStub::ListConsumerGroups(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::ListConsumerGroupsRequest const& request) {
  google::cloud::managedkafka::v1::ListConsumerGroupsResponse response;
  auto status = grpc_stub_->ListConsumerGroups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
DefaultManagedKafkaStub::GetConsumerGroup(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::GetConsumerGroupRequest const& request) {
  google::cloud::managedkafka::v1::ConsumerGroup response;
  auto status = grpc_stub_->GetConsumerGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
DefaultManagedKafkaStub::UpdateConsumerGroup(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
        request) {
  google::cloud::managedkafka::v1::ConsumerGroup response;
  auto status = grpc_stub_->UpdateConsumerGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultManagedKafkaStub::DeleteConsumerGroup(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteConsumerGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultManagedKafkaStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultManagedKafkaStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultManagedKafkaStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultManagedKafkaStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultManagedKafkaStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultManagedKafkaStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedKafkaStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultManagedKafkaStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedkafka_v1_internal
}  // namespace cloud
}  // namespace google
