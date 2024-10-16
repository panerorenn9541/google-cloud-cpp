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
// source: google/cloud/dialogflow/v2/conversation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/conversations_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationsTracingConnection
    : public dialogflow_es::ConversationsConnection {
 public:
  ~ConversationsTracingConnection() override = default;

  explicit ConversationsTracingConnection(
      std::shared_ptr<dialogflow_es::ConversationsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::dialogflow::v2::Conversation> CreateConversation(
      google::cloud::dialogflow::v2::CreateConversationRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::Conversation> ListConversations(
      google::cloud::dialogflow::v2::ListConversationsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> GetConversation(
      google::cloud::dialogflow::v2::GetConversationRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Conversation> CompleteConversation(
      google::cloud::dialogflow::v2::CompleteConversationRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::Message> ListMessages(
      google::cloud::dialogflow::v2::ListMessagesRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
  SuggestConversationSummary(
      google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
  GenerateStatelessSummary(
      google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
  GenerateStatelessSuggestion(
      google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
  SearchKnowledge(google::cloud::dialogflow::v2::SearchKnowledgeRequest const&
                      request) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<dialogflow_es::ConversationsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dialogflow_es::ConversationsConnection>
MakeConversationsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATIONS_TRACING_CONNECTION_H
