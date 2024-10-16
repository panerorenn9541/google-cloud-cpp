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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/v1/internal/data_catalog_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataCatalogTracingConnection::DataCatalogTracingConnection(
    std::shared_ptr<datacatalog_v1::DataCatalogConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
DataCatalogTracingConnection::SearchCatalog(
    google::cloud::datacatalog::v1::SearchCatalogRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::SearchCatalog");
  internal::OTelScope scope(span);
  auto sr = child_->SearchCatalog(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::v1::SearchCatalogResult>(std::move(span),
                                                           std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::CreateEntryGroup(
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::CreateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEntryGroup(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::GetEntryGroup(
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::GetEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntryGroup(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::UpdateEntryGroup(
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::UpdateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntryGroup(request));
}

Status DataCatalogTracingConnection::DeleteEntryGroup(
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::DeleteEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEntryGroup(request));
}

StreamRange<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingConnection::ListEntryGroups(
    google::cloud::datacatalog::v1::ListEntryGroupsRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ListEntryGroups");
  internal::OTelScope scope(span);
  auto sr = child_->ListEntryGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::datacatalog::v1::EntryGroup>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::CreateEntry(
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::CreateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::UpdateEntry(
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::UpdateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntry(request));
}

Status DataCatalogTracingConnection::DeleteEntry(
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::DeleteEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::GetEntry(
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::GetEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::LookupEntry(
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::LookupEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->LookupEntry(request));
}

StreamRange<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingConnection::ListEntries(
    google::cloud::datacatalog::v1::ListEntriesRequest request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::ListEntries");
  internal::OTelScope scope(span);
  auto sr = child_->ListEntries(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datacatalog::v1::Entry>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogTracingConnection::ModifyEntryOverview(
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ModifyEntryOverview");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModifyEntryOverview(request));
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogTracingConnection::ModifyEntryContacts(
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ModifyEntryContacts");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModifyEntryContacts(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::CreateTagTemplate(
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::CreateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::GetTagTemplate(
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::GetTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingConnection::UpdateTagTemplate(
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::UpdateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTagTemplate(request));
}

Status DataCatalogTracingConnection::DeleteTagTemplate(
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::DeleteTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTagTemplate(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::CreateTagTemplateField(
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::CreateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::UpdateTagTemplateField(
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::UpdateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::RenameTagTemplateField(
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::RenameTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RenameTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingConnection::RenameTagTemplateFieldEnumValue(
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::RenameTagTemplateFieldEnumValue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->RenameTagTemplateFieldEnumValue(request));
}

Status DataCatalogTracingConnection::DeleteTagTemplateField(
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::DeleteTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTagTemplateField(request));
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::CreateTag(
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::CreateTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTag(request));
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::UpdateTag(
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::UpdateTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTag(request));
}

Status DataCatalogTracingConnection::DeleteTag(
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::DeleteTag");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTag(request));
}

StreamRange<google::cloud::datacatalog::v1::Tag>
DataCatalogTracingConnection::ListTags(
    google::cloud::datacatalog::v1::ListTagsRequest request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::ListTags");
  internal::OTelScope scope(span);
  auto sr = child_->ListTags(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::datacatalog::v1::Tag>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
DataCatalogTracingConnection::ReconcileTags(
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ReconcileTags");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReconcileTags(request));
}

StatusOr<google::longrunning::Operation>
DataCatalogTracingConnection::ReconcileTags(
    NoAwaitTag,
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ReconcileTags");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->ReconcileTags(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
DataCatalogTracingConnection::ReconcileTags(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ReconcileTags");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReconcileTags(operation));
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogTracingConnection::StarEntry(
    google::cloud::datacatalog::v1::StarEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::StarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StarEntry(request));
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogTracingConnection::UnstarEntry(
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::UnstarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UnstarEntry(request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
DataCatalogTracingConnection::ImportEntries(
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ImportEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportEntries(request));
}

StatusOr<google::longrunning::Operation>
DataCatalogTracingConnection::ImportEntries(
    NoAwaitTag,
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ImportEntries");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->ImportEntries(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
DataCatalogTracingConnection::ImportEntries(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ImportEntries");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportEntries(operation));
}

StreamRange<google::longrunning::Operation>
DataCatalogTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
DataCatalogTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("datacatalog_v1::DataCatalogConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status DataCatalogTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status DataCatalogTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datacatalog_v1::DataCatalogConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datacatalog_v1::DataCatalogConnection>
MakeDataCatalogTracingConnection(
    std::shared_ptr<datacatalog_v1::DataCatalogConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DataCatalogTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
