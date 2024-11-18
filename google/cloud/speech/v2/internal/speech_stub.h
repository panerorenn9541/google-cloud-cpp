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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_STUB_H

#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/speech/v2/cloud_speech.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpeechStub {
 public:
  virtual ~SpeechStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateRecognizerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreateRecognizerRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::ListRecognizersResponse>
  ListRecognizers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListRecognizersRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::Recognizer> GetRecognizer(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetRecognizerRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUndeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UndeleteRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::RecognizeResponse> Recognize(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::RecognizeRequest const& request) = 0;

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>>
  AsyncStreamingRecognize(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncBatchRecognize(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> BatchRecognize(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::Config> GetConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetConfigRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::Config> UpdateConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::UpdateConfigRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateCustomClassRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreateCustomClassRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
  ListCustomClasses(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListCustomClassesRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::CustomClass> GetCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetCustomClassRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUndeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UndeleteCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreatePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse>
  ListPhraseSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListPhraseSetsRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v2::PhraseSet> GetPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetPhraseSetRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdatePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeletePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUndeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UndeletePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultSpeechStub : public SpeechStub {
 public:
  DefaultSpeechStub(
      std::unique_ptr<google::cloud::speech::v2::Speech::StubInterface>
          grpc_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreateRecognizerRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListRecognizersResponse> ListRecognizers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListRecognizersRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::Recognizer> GetRecognizer(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetRecognizerRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdateRecognizerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeleteRecognizerRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteRecognizer(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteRecognizer(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::RecognizeResponse> Recognize(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::RecognizeRequest const& request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v2::StreamingRecognizeRequest,
      google::cloud::speech::v2::StreamingRecognizeResponse>>
  AsyncStreamingRecognize(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchRecognize(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) override;

  StatusOr<google::longrunning::Operation> BatchRecognize(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::BatchRecognizeRequest const& request) override;

  StatusOr<google::cloud::speech::v2::Config> GetConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetConfigRequest const& request) override;

  StatusOr<google::cloud::speech::v2::Config> UpdateConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::UpdateConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreateCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreateCustomClassRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
  ListCustomClasses(grpc::ClientContext& context, Options const& options,
                    google::cloud::speech::v2::ListCustomClassesRequest const&
                        request) override;

  StatusOr<google::cloud::speech::v2::CustomClass> GetCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetCustomClassRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdateCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteCustomClass(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeleteCustomClass(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreatePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::CreatePhraseSetRequest const& request)
      override;

  StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse> ListPhraseSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::ListPhraseSetsRequest const& request) override;

  StatusOr<google::cloud::speech::v2::PhraseSet> GetPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v2::GetPhraseSetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdatePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeletePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::DeletePhraseSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeletePhraseSet(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UndeletePhraseSet(
      grpc::ClientContext& context, Options options,
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request)
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

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

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
  std::unique_ptr<google::cloud::speech::v2::Speech::StubInterface> grpc_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_INTERNAL_SPEECH_STUB_H
