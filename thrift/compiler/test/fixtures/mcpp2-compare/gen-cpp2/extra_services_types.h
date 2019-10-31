/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <folly/Optional.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct fieldA;
struct req_fieldA;
struct opt_fieldA;
struct fieldB;
struct req_fieldB;
struct opt_fieldB;
struct fieldC;
struct req_fieldC;
struct opt_fieldC;
struct fieldD;
struct fieldE;
struct req_fieldE;
struct opt_fieldE;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldA
#define APACHE_THRIFT_ACCESSOR_req_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldA
#define APACHE_THRIFT_ACCESSOR_opt_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldB
#define APACHE_THRIFT_ACCESSOR_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldB
#define APACHE_THRIFT_ACCESSOR_req_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldB
#define APACHE_THRIFT_ACCESSOR_opt_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldC
#define APACHE_THRIFT_ACCESSOR_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldC
#define APACHE_THRIFT_ACCESSOR_req_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldC
#define APACHE_THRIFT_ACCESSOR_opt_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldD
#define APACHE_THRIFT_ACCESSOR_fieldD
APACHE_THRIFT_DEFINE_ACCESSOR(fieldD);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldE
#define APACHE_THRIFT_ACCESSOR_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldE
#define APACHE_THRIFT_ACCESSOR_req_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldE
#define APACHE_THRIFT_ACCESSOR_opt_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldE);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace extra { namespace svc {
class containerStruct2;
}} // extra::svc
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace extra { namespace svc {
class containerStruct2 final : private apache::thrift::detail::st::ComparisonOperators<containerStruct2> {
 public:

  containerStruct2();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  containerStruct2(apache::thrift::FragileConstructor, bool fieldA__arg, bool req_fieldA__arg, bool opt_fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::map<::std::string, bool> req_fieldB__arg, ::std::map<::std::string, bool> opt_fieldB__arg, ::std::set<int32_t> fieldC__arg, ::std::set<int32_t> req_fieldC__arg, ::std::set<int32_t> opt_fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::string req_fieldE__arg, ::std::string opt_fieldE__arg);

  containerStruct2(containerStruct2&&) = default;

  containerStruct2(const containerStruct2&) = default;

  containerStruct2& operator=(containerStruct2&&) = default;

  containerStruct2& operator=(const containerStruct2&) = default;
  void __clear();

  ~containerStruct2();

 public:
  bool fieldA;
 public:
  bool req_fieldA;
 public:
  folly::Optional<bool> opt_fieldA;
 public:
  ::std::map<::std::string, bool> fieldB;
 public:
  ::std::map<::std::string, bool> req_fieldB;
 public:
  folly::Optional<::std::map<::std::string, bool>> opt_fieldB;
 public:
  ::std::set<int32_t> fieldC;
 public:
  ::std::set<int32_t> req_fieldC;
 public:
  folly::Optional<::std::set<int32_t>> opt_fieldC;
 public:
  ::std::string fieldD;
 public:
  ::std::string fieldE;
 public:
  ::std::string req_fieldE;
 public:
  folly::Optional<::std::string> opt_fieldE;

 public:
  bool operator==(const containerStruct2& rhs) const;
  bool operator<(const containerStruct2& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< containerStruct2 >;
};

void swap(containerStruct2& a, containerStruct2& b);

template <class Protocol_>
uint32_t containerStruct2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}} // extra::svc
