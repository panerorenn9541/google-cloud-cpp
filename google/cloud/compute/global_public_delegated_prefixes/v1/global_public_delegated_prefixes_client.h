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
// source:
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CLIENT_H

#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the globalPublicDelegatedPrefixes resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GlobalPublicDelegatedPrefixesClient {
 public:
  explicit GlobalPublicDelegatedPrefixesClient(
      std::shared_ptr<GlobalPublicDelegatedPrefixesConnection> connection,
      Options opts = {});
  ~GlobalPublicDelegatedPrefixesClient();

  ///@{
  /// @name Copy and move support
  GlobalPublicDelegatedPrefixesClient(
      GlobalPublicDelegatedPrefixesClient const&) = default;
  GlobalPublicDelegatedPrefixesClient& operator=(
      GlobalPublicDelegatedPrefixesClient const&) = default;
  GlobalPublicDelegatedPrefixesClient(GlobalPublicDelegatedPrefixesClient&&) =
      default;
  GlobalPublicDelegatedPrefixesClient& operator=(
      GlobalPublicDelegatedPrefixesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GlobalPublicDelegatedPrefixesClient const& a,
                         GlobalPublicDelegatedPrefixesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GlobalPublicDelegatedPrefixesClient const& a,
                         GlobalPublicDelegatedPrefixesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified global PublicDelegatedPrefix.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/delete
  ///
  /// @param project  Project ID for this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L103}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(std::string const& project,
                              std::string const& public_delegated_prefix,
                              Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeletePublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePublicDelegatedPrefix(NoAwaitTag, std::string const& project,
                              std::string const& public_delegated_prefix,
                              Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified global PublicDelegatedPrefix.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L103}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeletePublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeletePublicDelegatedPrefix(
      NoAwaitTag,
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeletePublicDelegatedPrefix
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified global PublicDelegatedPrefix resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/get
  ///
  /// @param project  Project ID for this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicDelegatedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L131}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(std::string const& project,
                           std::string const& public_delegated_prefix,
                           Options opts = {});

  // clang-format off
  ///
  /// Returns the specified global PublicDelegatedPrefix resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicDelegatedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L131}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a global PublicDelegatedPrefix in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/insert
  ///
  /// @param project  Project ID for this request.
  /// @param public_delegated_prefix_resource  The PublicDelegatedPrefix for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L144}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      std::string const& project,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertPublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertPublicDelegatedPrefix(
      NoAwaitTag, std::string const& project,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a global PublicDelegatedPrefix in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L144}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertPublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertPublicDelegatedPrefix(
      NoAwaitTag,
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertPublicDelegatedPrefix
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the global PublicDelegatedPrefixes for a project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/list
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.ListGlobalPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L170}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListGlobalPublicDelegatedPrefixes(std::string const& project,
                                    Options opts = {});

  // clang-format off
  ///
  /// Lists the global PublicDelegatedPrefixes for a project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.ListGlobalPublicDelegatedPrefixesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.ListGlobalPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L170}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          ListGlobalPublicDelegatedPrefixesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified global PublicDelegatedPrefix resource with the data
  /// included in the request. This method supports PATCH semantics and uses JSON
  /// merge patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/patch
  ///
  /// @param project  Project ID for this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to patch.
  /// @param public_delegated_prefix_resource  The PublicDelegatedPrefix for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L238}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      std::string const& project, std::string const& public_delegated_prefix,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchPublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPublicDelegatedPrefix(
      NoAwaitTag, std::string const& project,
      std::string const& public_delegated_prefix,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified global PublicDelegatedPrefix resource with the data
  /// included in the request. This method supports PATCH semantics and uses JSON
  /// merge patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalPublicDelegatedPrefixes/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.global_public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto#L238}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchPublicDelegatedPrefix
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchPublicDelegatedPrefix(
      NoAwaitTag,
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief PatchPublicDelegatedPrefix
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<GlobalPublicDelegatedPrefixesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CLIENT_H
