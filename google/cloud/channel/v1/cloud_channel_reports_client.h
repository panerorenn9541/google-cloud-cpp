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
// source: google/cloud/channel/v1/reports_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_REPORTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_REPORTS_CLIENT_H

#include "google/cloud/internal/disable_deprecation_warnings.inc"
#include "google/cloud/channel/v1/cloud_channel_reports_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// CloudChannelReportsService lets Google Cloud resellers and
/// distributors retrieve and combine a variety of data in Cloud Channel for
/// multiple products (Google Cloud, Google Voice, and Google Workspace.)
///
/// Deprecated: This service is being deprecated. Please use [Export Channel
/// Services data to
/// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
/// instead.
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
class GOOGLE_CLOUD_CPP_DEPRECATED(
    "CloudChannelReportsService has been deprecated and will be turned down in "
    "the future.") CloudChannelReportsServiceClient {
 public:
  explicit CloudChannelReportsServiceClient(
      std::shared_ptr<CloudChannelReportsServiceConnection> connection,
      Options opts = {});
  ~CloudChannelReportsServiceClient();

  ///@{
  /// @name Copy and move support
  CloudChannelReportsServiceClient(CloudChannelReportsServiceClient const&) =
      default;
  CloudChannelReportsServiceClient& operator=(
      CloudChannelReportsServiceClient const&) = default;
  CloudChannelReportsServiceClient(CloudChannelReportsServiceClient&&) =
      default;
  CloudChannelReportsServiceClient& operator=(
      CloudChannelReportsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(CloudChannelReportsServiceClient const& a,
                         CloudChannelReportsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CloudChannelReportsServiceClient const& a,
                         CloudChannelReportsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// Begins generation of data for a given report. The report
  /// identifier is a UID (for example, `613bf59q`).
  ///
  /// Possible error codes:
  ///
  /// * PERMISSION_DENIED: The user doesn't have access to this report.
  /// * INVALID_ARGUMENT: Required request parameters are missing
  ///   or invalid.
  /// * NOT_FOUND: The report identifier was not found.
  /// * INTERNAL: Any non-user error related to a technical issue
  ///   in the backend. Contact Cloud Channel support.
  /// * UNKNOWN: Any non-user error related to a technical issue
  ///   in the backend. Contact Cloud Channel support.
  ///
  /// Return value:
  /// The ID of a long-running operation.
  ///
  /// To get the results of the operation, call the GetOperation method of
  /// CloudChannelOperationsService. The Operation metadata contains an
  /// instance of [OperationMetadata][google.cloud.channel.v1.OperationMetadata].
  ///
  /// To get the results of report generation, call
  /// [CloudChannelReportsService.FetchReportResults][google.cloud.channel.v1.CloudChannelReportsService.FetchReportResults]
  /// with the
  /// [RunReportJobResponse.report_job][google.cloud.channel.v1.RunReportJobResponse.report_job].
  ///
  /// Deprecated: Please use [Export Channel Services data to
  /// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
  /// instead.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.channel.v1.RunReportJobRequest].
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
  ///     [google.cloud.channel.v1.RunReportJobResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.channel.v1.CloudChannelReportsService.FetchReportResults]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L97}
  /// [google.cloud.channel.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/channel/v1/operations.proto#L26}
  /// [google.cloud.channel.v1.RunReportJobRequest]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L124}
  /// [google.cloud.channel.v1.RunReportJobResponse]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L163}
  /// [google.cloud.channel.v1.RunReportJobResponse.report_job]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L169}
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
  RunReportJob(google::cloud::channel::v1::RunReportJobRequest const& request,
               Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// @copybrief RunReportJob
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  StatusOr<google::longrunning::Operation> RunReportJob(
      NoAwaitTag,
      google::cloud::channel::v1::RunReportJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// @copybrief RunReportJob
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
  RunReportJob(google::longrunning::Operation const& operation,
               Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// Retrieves data generated by
  /// [CloudChannelReportsService.RunReportJob][google.cloud.channel.v1.CloudChannelReportsService.RunReportJob].
  ///
  /// Deprecated: Please use [Export Channel Services data to
  /// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
  /// instead.
  ///
  /// @param report_job  Required. The report job created by
  ///  [CloudChannelReportsService.RunReportJob][google.cloud.channel.v1.CloudChannelReportsService.RunReportJob].
  ///  Report_job uses the format:
  ///  accounts/{account_id}/reportJobs/{report_job_id}
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
  ///     [google.cloud.channel.v1.Row], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.channel.v1.CloudChannelReportsService.RunReportJob]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L79}
  /// [google.cloud.channel.v1.FetchReportResultsRequest]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L179}
  /// [google.cloud.channel.v1.Row]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L399}
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  StreamRange<google::cloud::channel::v1::Row> FetchReportResults(
      std::string const& report_job, Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// Retrieves data generated by
  /// [CloudChannelReportsService.RunReportJob][google.cloud.channel.v1.CloudChannelReportsService.RunReportJob].
  ///
  /// Deprecated: Please use [Export Channel Services data to
  /// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
  /// instead.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.channel.v1.FetchReportResultsRequest].
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
  ///     [google.cloud.channel.v1.Row], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.channel.v1.CloudChannelReportsService.RunReportJob]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L79}
  /// [google.cloud.channel.v1.FetchReportResultsRequest]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L179}
  /// [google.cloud.channel.v1.Row]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L399}
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  StreamRange<google::cloud::channel::v1::Row> FetchReportResults(
      google::cloud::channel::v1::FetchReportResultsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// Lists the reports that RunReportJob can run. These reports include an ID,
  /// a description, and the list of columns that will be in the result.
  ///
  /// Deprecated: Please use [Export Channel Services data to
  /// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
  /// instead.
  ///
  /// @param parent  Required. The resource name of the partner account to list available
  ///  reports for. Parent uses the format: accounts/{account_id}
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
  ///     [google.cloud.channel.v1.Report], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.channel.v1.ListReportsRequest]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L236}
  /// [google.cloud.channel.v1.Report]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L474}
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  StreamRange<google::cloud::channel::v1::Report> ListReports(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// @deprecated This RPC is deprecated.
  ///
  /// Lists the reports that RunReportJob can run. These reports include an ID,
  /// a description, and the list of columns that will be in the result.
  ///
  /// Deprecated: Please use [Export Channel Services data to
  /// BigQuery](https://cloud.google.com/channel/docs/rebilling/export-data-to-bigquery)
  /// instead.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.channel.v1.ListReportsRequest].
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
  ///     [google.cloud.channel.v1.Report], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.channel.v1.ListReportsRequest]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L236}
  /// [google.cloud.channel.v1.Report]: @googleapis_reference_link{google/cloud/channel/v1/reports_service.proto#L474}
  ///
  // clang-format on
  GOOGLE_CLOUD_CPP_DEPRECATED("This RPC is deprecated.")
  StreamRange<google::cloud::channel::v1::Report> ListReports(
      google::cloud::channel::v1::ListReportsRequest request,
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

  // clang-format off
  ///
  /// Deletes a long-running operation. This method indicates that the client is
  /// no longer interested in the operation result. It does not cancel the
  /// operation. If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.
  ///
  /// @param name  The name of the operation resource to be deleted.
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
  /// [google.longrunning.DeleteOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L201}
  ///
  // clang-format on
  Status DeleteOperation(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a long-running operation. This method indicates that the client is
  /// no longer interested in the operation result. It does not cancel the
  /// operation. If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.DeleteOperationRequest].
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
  /// [google.longrunning.DeleteOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L201}
  ///
  // clang-format on
  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts asynchronous cancellation on a long-running operation.  The server
  /// makes a best effort to cancel the operation, but success is not
  /// guaranteed.  If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
  /// [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
  /// other methods to check whether the cancellation succeeded or whether the
  /// operation completed despite cancellation. On successful cancellation,
  /// the operation is not deleted; instead, it becomes an operation with
  /// an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
  /// corresponding to `Code.CANCELLED`.
  ///
  /// @param name  The name of the operation resource to be cancelled.
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
  /// [google.longrunning.CancelOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L195}
  /// [google.longrunning.Operation.error]: @googleapis_reference_link{google/longrunning/operations.proto#L150}
  /// [google.longrunning.Operations.GetOperation]: @googleapis_reference_link{google/longrunning/operations.proto#L77}
  /// [google.rpc.Status.code]: @googleapis_reference_link{google/rpc/status.proto#L38}
  ///
  // clang-format on
  Status CancelOperation(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Starts asynchronous cancellation on a long-running operation.  The server
  /// makes a best effort to cancel the operation, but success is not
  /// guaranteed.  If the server doesn't support this method, it returns
  /// `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
  /// [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
  /// other methods to check whether the cancellation succeeded or whether the
  /// operation completed despite cancellation. On successful cancellation,
  /// the operation is not deleted; instead, it becomes an operation with
  /// an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
  /// corresponding to `Code.CANCELLED`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.CancelOperationRequest].
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
  /// [google.longrunning.CancelOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L195}
  /// [google.longrunning.Operation.error]: @googleapis_reference_link{google/longrunning/operations.proto#L150}
  /// [google.longrunning.Operations.GetOperation]: @googleapis_reference_link{google/longrunning/operations.proto#L77}
  /// [google.rpc.Status.code]: @googleapis_reference_link{google/rpc/status.proto#L38}
  ///
  // clang-format on
  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CloudChannelReportsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_CLOUD_CHANNEL_REPORTS_CLIENT_H
