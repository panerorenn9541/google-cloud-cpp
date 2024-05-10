// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

#include "google/cloud/storage/internal/grpc/monitoring_project.h"
#include "google/cloud/storage/options.h"
#include <opentelemetry/sdk/resource/semantic_conventions.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

absl::optional<Project> MonitoringProject(
    opentelemetry::sdk::resource::Resource const& resource) {
  namespace sc = ::opentelemetry::sdk::resource::SemanticConventions;
  auto const& attributes = resource.GetAttributes();
  auto l = attributes.find(sc::kCloudProvider);
  if (l == attributes.end() ||
      opentelemetry::nostd::get<std::string>(l->second) != "gcp") {
    return absl::nullopt;
  }
  l = attributes.find(sc::kCloudAccountId);
  if (l == attributes.end()) return absl::nullopt;
  return Project(opentelemetry::nostd::get<std::string>(l->second));
}

absl::optional<Project> MonitoringProject(Options const& options) {
  if (!options.has<storage::ProjectIdOption>()) return absl::nullopt;
  auto project_id = options.get<storage::ProjectIdOption>();
  if (project_id.empty()) return absl::nullopt;
  return Project(std::move(project_id));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
