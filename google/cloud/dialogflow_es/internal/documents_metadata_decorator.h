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
// source: google/cloud/dialogflow/v2/document.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_DOCUMENTS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_DOCUMENTS_METADATA_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/documents_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentsMetadata : public DocumentsStub {
 public:
  ~DocumentsMetadata() override = default;
  DocumentsMetadata(std::shared_ptr<DocumentsStub> child,
                    std::multimap<std::string, std::string> fixed_metadata,
                    std::string api_client_header = "");

  StatusOr<google::cloud::dialogflow::v2::ListDocumentsResponse> ListDocuments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListDocumentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Document> GetDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::CreateDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::CreateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportDocuments(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::ImportDocumentsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportDocuments(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::ImportDocumentsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::DeleteDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::DeleteDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::UpdateDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::UpdateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncReloadDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::ReloadDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ReloadDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::ReloadDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::v2::ExportDocumentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportDocument(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::v2::ExportDocumentRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<DocumentsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_DOCUMENTS_METADATA_DECORATOR_H
