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
// source: google/ai/generativelanguage/v1/model_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GENERATIVELANGUAGE_V1_INTERNAL_MODEL_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GENERATIVELANGUAGE_V1_INTERNAL_MODEL_METADATA_DECORATOR_H

#include "google/cloud/generativelanguage/v1/internal/model_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace generativelanguage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ModelServiceMetadata : public ModelServiceStub {
 public:
  ~ModelServiceMetadata() override = default;
  ModelServiceMetadata(std::shared_ptr<ModelServiceStub> child,
                       std::multimap<std::string, std::string> fixed_metadata,
                       std::string api_client_header = "");

  StatusOr<google::ai::generativelanguage::v1::Model> GetModel(
      grpc::ClientContext& context, Options const& options,
      google::ai::generativelanguage::v1::GetModelRequest const& request)
      override;

  StatusOr<google::ai::generativelanguage::v1::ListModelsResponse> ListModels(
      grpc::ClientContext& context, Options const& options,
      google::ai::generativelanguage::v1::ListModelsRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<ModelServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace generativelanguage_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GENERATIVELANGUAGE_V1_INTERNAL_MODEL_METADATA_DECORATOR_H
