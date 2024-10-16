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

#include "generator/internal/forwarding_options_generator.h"

namespace google {
namespace cloud {
namespace generator_internal {

ForwardingOptionsGenerator::ForwardingOptionsGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context,
    std::vector<MixinMethod> const& mixin_methods)
    : ServiceCodeGenerator("forwarding_options_header_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context,
                           mixin_methods) {}

Status ForwardingOptionsGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$

)""");

  // includes
  HeaderLocalIncludes({
      vars("forwarding_connection_header_path"),
      vars("forwarding_idempotency_policy_header_path"),
      vars("options_header_path"),
  });

  auto result = HeaderOpenForwardingNamespaces();
  if (!result.ok()) return result;

  // forwards
  if (HasLongrunningMethod()) {
    HeaderPrint(R"""(
/// @deprecated Use $product_namespace$::$service_name$PollingPolicyOption directly.
using ::google::cloud::$product_namespace$::$service_name$PollingPolicyOption;
)""");
  }
  HeaderPrint(R"""(
/// @deprecated Use $product_namespace$::$service_name$BackoffPolicyOption directly.
using ::google::cloud::$product_namespace$::$service_name$BackoffPolicyOption;

/// @deprecated Use $product_namespace$::$service_name$ConnectionIdempotencyPolicyOption directly.
using ::google::cloud::$product_namespace$::$service_name$ConnectionIdempotencyPolicyOption;

/// @deprecated Use $product_namespace$::$service_name$PolicyOptionList directly.
using ::google::cloud::$product_namespace$::$service_name$PolicyOptionList;

/// @deprecated Use $product_namespace$::$service_name$RetryPolicyOption directly.
using ::google::cloud::$product_namespace$::$service_name$RetryPolicyOption;
)""");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint(R"""(
#endif  // $header_include_guard$
)""");
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
