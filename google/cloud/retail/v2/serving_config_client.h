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
// source: google/cloud/retail/v2/serving_config_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CLIENT_H

#include "google/cloud/retail/v2/serving_config_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for modifying ServingConfig.
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
class ServingConfigServiceClient {
 public:
  explicit ServingConfigServiceClient(
      std::shared_ptr<ServingConfigServiceConnection> connection,
      Options opts = {});
  ~ServingConfigServiceClient();

  ///@{
  /// @name Copy and move support
  ServingConfigServiceClient(ServingConfigServiceClient const&) = default;
  ServingConfigServiceClient& operator=(ServingConfigServiceClient const&) =
      default;
  ServingConfigServiceClient(ServingConfigServiceClient&&) = default;
  ServingConfigServiceClient& operator=(ServingConfigServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ServingConfigServiceClient const& a,
                         ServingConfigServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ServingConfigServiceClient const& a,
                         ServingConfigServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a ServingConfig.
  ///
  /// A maximum of 100 [ServingConfig][google.cloud.retail.v2.ServingConfig]s are
  /// allowed in a [Catalog][google.cloud.retail.v2.Catalog], otherwise a
  /// FAILED_PRECONDITION error is returned.
  ///
  /// @param parent  Required. Full resource name of parent. Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}`
  /// @param serving_config  Required. The ServingConfig to create.
  /// @param serving_config_id  Required. The ID to use for the ServingConfig, which will become the final
  ///  component of the ServingConfig's resource name.
  ///  @n
  ///  This value should be 4-63 characters, and valid characters
  ///  are /[a-z][0-9]-_/.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.CreateServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L124}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> CreateServingConfig(
      std::string const& parent,
      google::cloud::retail::v2::ServingConfig const& serving_config,
      std::string const& serving_config_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a ServingConfig.
  ///
  /// A maximum of 100 [ServingConfig][google.cloud.retail.v2.ServingConfig]s are
  /// allowed in a [Catalog][google.cloud.retail.v2.Catalog], otherwise a
  /// FAILED_PRECONDITION error is returned.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.CreateServingConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.CreateServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L124}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> CreateServingConfig(
      google::cloud::retail::v2::CreateServingConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a ServingConfig.
  ///
  /// Returns a NotFound error if the ServingConfig does not exist.
  ///
  /// @param name  Required. The resource name of the ServingConfig to delete. Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}/servingConfigs/{serving_config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.DeleteServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L159}
  ///
  // clang-format on
  Status DeleteServingConfig(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a ServingConfig.
  ///
  /// Returns a NotFound error if the ServingConfig does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.DeleteServingConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.DeleteServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L159}
  ///
  // clang-format on
  Status DeleteServingConfig(
      google::cloud::retail::v2::DeleteServingConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a ServingConfig.
  ///
  /// @param serving_config  Required. The ServingConfig to update.
  /// @param update_mask  Indicates which fields in the provided
  ///  [ServingConfig][google.cloud.retail.v2.ServingConfig] to update. The
  ///  following are NOT supported:
  ///  @n
  ///  * [ServingConfig.name][google.cloud.retail.v2.ServingConfig.name]
  ///  @n
  ///  If not set, all supported fields are updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  /// [google.cloud.retail.v2.ServingConfig.name]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L55}
  /// [google.cloud.retail.v2.UpdateServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L144}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> UpdateServingConfig(
      google::cloud::retail::v2::ServingConfig const& serving_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a ServingConfig.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.UpdateServingConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  /// [google.cloud.retail.v2.UpdateServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L144}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> UpdateServingConfig(
      google::cloud::retail::v2::UpdateServingConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a ServingConfig.
  ///
  /// Returns a NotFound error if the ServingConfig does not exist.
  ///
  /// @param name  Required. The resource name of the ServingConfig to get. Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}/servingConfigs/{serving_config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.GetServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L171}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> GetServingConfig(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a ServingConfig.
  ///
  /// Returns a NotFound error if the ServingConfig does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.GetServingConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.GetServingConfigRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L171}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> GetServingConfig(
      google::cloud::retail::v2::GetServingConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists all ServingConfigs linked to this catalog.
  ///
  /// @param parent  Required. The catalog resource name. Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}`
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
  ///     [google.cloud.retail.v2.ServingConfig], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.ListServingConfigsRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L183}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StreamRange<google::cloud::retail::v2::ServingConfig> ListServingConfigs(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists all ServingConfigs linked to this catalog.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.ListServingConfigsRequest].
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
  ///     [google.cloud.retail.v2.ServingConfig], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.ListServingConfigsRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L183}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StreamRange<google::cloud::retail::v2::ServingConfig> ListServingConfigs(
      google::cloud::retail::v2::ListServingConfigsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Enables a Control on the specified ServingConfig.
  /// The control is added in the last position of the list of controls
  /// it belongs to (e.g. if it's a facet spec control it will be applied
  /// in the last position of servingConfig.facetSpecIds)
  /// Returns a ALREADY_EXISTS error if the control has already been applied.
  /// Returns a FAILED_PRECONDITION error if the addition could exceed maximum
  /// number of control allowed for that type of control.
  ///
  /// @param serving_config  Required. The source ServingConfig resource name . Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}/servingConfigs/{serving_config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.AddControlRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L211}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> AddControl(
      std::string const& serving_config, Options opts = {});

  // clang-format off
  ///
  /// Enables a Control on the specified ServingConfig.
  /// The control is added in the last position of the list of controls
  /// it belongs to (e.g. if it's a facet spec control it will be applied
  /// in the last position of servingConfig.facetSpecIds)
  /// Returns a ALREADY_EXISTS error if the control has already been applied.
  /// Returns a FAILED_PRECONDITION error if the addition could exceed maximum
  /// number of control allowed for that type of control.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.AddControlRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.AddControlRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L211}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> AddControl(
      google::cloud::retail::v2::AddControlRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Disables a Control on the specified ServingConfig.
  /// The control is removed from the ServingConfig.
  /// Returns a NOT_FOUND error if the Control is not enabled for the
  /// ServingConfig.
  ///
  /// @param serving_config  Required. The source ServingConfig resource name . Format:
  ///  `projects/{project_number}/locations/{location_id}/catalogs/{catalog_id}/servingConfigs/{serving_config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.RemoveControlRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L227}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> RemoveControl(
      std::string const& serving_config, Options opts = {});

  // clang-format off
  ///
  /// Disables a Control on the specified ServingConfig.
  /// The control is removed from the ServingConfig.
  /// Returns a NOT_FOUND error if the Control is not enabled for the
  /// ServingConfig.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.RemoveControlRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.ServingConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.RemoveControlRequest]: @googleapis_reference_link{google/cloud/retail/v2/serving_config_service.proto#L227}
  /// [google.cloud.retail.v2.ServingConfig]: @googleapis_reference_link{google/cloud/retail/v2/serving_config.proto#L35}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::ServingConfig> RemoveControl(
      google::cloud::retail::v2::RemoveControlRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param name  The name of the operation's parent resource.
  /// @param filter  The standard list filter.
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
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      std::string const& name, std::string const& filter, Options opts = {});

  // clang-format off
  ///
  /// Lists operations that match the specified filter in the request. If the
  /// server doesn't support this method, it returns `UNIMPLEMENTED`.
  ///
  /// NOTE: the `name` binding allows API services to override the binding
  /// to use different resource name schemes, such as `users/*/operations`. To
  /// override the binding, API services can add a binding such as
  /// `"/v1/{name=users/*}/operations"` to their service configuration.
  /// For backwards compatibility, the default name includes the operations
  /// collection id, however overriding users must ensure the name binding
  /// is the parent resource, without the operations collection id.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.ListOperationsRequest].
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
  ///     [google.longrunning.Operation], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.ListOperationsRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L171}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param name  The name of the operation resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(std::string const& name,
                                                        Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.GetOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L165}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L128}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ServingConfigServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_SERVING_CONFIG_CLIENT_H
