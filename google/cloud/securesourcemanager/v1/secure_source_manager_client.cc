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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/secure_source_manager_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecureSourceManagerClient::SecureSourceManagerClient(
    std::shared_ptr<SecureSourceManagerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SecureSourceManagerClient::~SecureSourceManagerClient() = default;

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerClient::ListInstances(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerClient::ListInstances(
    google::cloud::securesourcemanager::v1::ListInstancesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerClient::GetInstance(
    google::cloud::securesourcemanager::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerClient::CreateInstance(
    std::string const& parent,
    google::cloud::securesourcemanager::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::CreateInstance(
    NoAwaitTag, std::string const& parent,
    google::cloud::securesourcemanager::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerClient::CreateInstance(
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::CreateInstance(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerClient::CreateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(operation);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteInstance(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::DeleteInstance(NoAwaitTag, std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteInstance(
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::DeleteInstance(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(operation);
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerClient::ListRepositories(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::ListRepositoriesRequest request;
  request.set_parent(parent);
  return connection_->ListRepositories(request);
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerClient::ListRepositories(
    google::cloud::securesourcemanager::v1::ListRepositoriesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRepositories(std::move(request));
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerClient::GetRepository(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::GetRepositoryRequest request;
  request.set_name(name);
  return connection_->GetRepository(request);
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerClient::GetRepository(
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRepository(request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerClient::CreateRepository(
    std::string const& parent,
    google::cloud::securesourcemanager::v1::Repository const& repository,
    std::string const& repository_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::CreateRepositoryRequest request;
  request.set_parent(parent);
  *request.mutable_repository() = repository;
  request.set_repository_id(repository_id);
  return connection_->CreateRepository(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::CreateRepository(
    NoAwaitTag, std::string const& parent,
    google::cloud::securesourcemanager::v1::Repository const& repository,
    std::string const& repository_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::CreateRepositoryRequest request;
  request.set_parent(parent);
  *request.mutable_repository() = repository;
  request.set_repository_id(repository_id);
  return connection_->CreateRepository(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerClient::CreateRepository(
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRepository(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::CreateRepository(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRepository(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerClient::CreateRepository(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRepository(operation);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteRepository(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::DeleteRepositoryRequest request;
  request.set_name(name);
  return connection_->DeleteRepository(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::DeleteRepository(NoAwaitTag, std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securesourcemanager::v1::DeleteRepositoryRequest request;
  request.set_name(name);
  return connection_->DeleteRepository(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteRepository(
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRepository(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::DeleteRepository(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRepository(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerClient::DeleteRepository(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRepository(operation);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::GetIamPolicyRepo(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicyRepo(request);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::GetIamPolicyRepo(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicyRepo(request);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::SetIamPolicyRepo(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->SetIamPolicyRepo(request);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::SetIamPolicyRepo(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicyRepo(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerClient::TestIamPermissionsRepo(std::string const& resource,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  return connection_->TestIamPermissionsRepo(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerClient::TestIamPermissionsRepo(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissionsRepo(request);
}

StreamRange<google::cloud::location::Location>
SecureSourceManagerClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
SecureSourceManagerClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
SecureSourceManagerClient::ListOperations(std::string const& name,
                                          std::string const& filter,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
SecureSourceManagerClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::GetOperation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status SecureSourceManagerClient::DeleteOperation(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status SecureSourceManagerClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status SecureSourceManagerClient::CancelOperation(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status SecureSourceManagerClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1
}  // namespace cloud
}  // namespace google
