/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct MyIntField;
struct MyStringField;
struct MyDataField;
struct myEnum;
struct myEnum;
struct myStruct;
struct myDataItem;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyIntField
#define APACHE_THRIFT_ACCESSOR_MyIntField
APACHE_THRIFT_DEFINE_ACCESSOR(MyIntField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyStringField
#define APACHE_THRIFT_ACCESSOR_MyStringField
APACHE_THRIFT_DEFINE_ACCESSOR(MyStringField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyDataField
#define APACHE_THRIFT_ACCESSOR_MyDataField
APACHE_THRIFT_DEFINE_ACCESSOR(MyDataField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myStruct
#define APACHE_THRIFT_ACCESSOR_myStruct
APACHE_THRIFT_DEFINE_ACCESSOR(myStruct);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myDataItem
#define APACHE_THRIFT_ACCESSOR_myDataItem
APACHE_THRIFT_DEFINE_ACCESSOR(myDataItem);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::MyEnum> : public apache::thrift::detail::enum_hash<typename ::cpp2::MyEnum> {};
template<> struct equal_to<typename ::cpp2::MyEnum> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::MyEnum> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::MyEnum>;

template <> struct TEnumTraits<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::MyValue2; }
};


}} // apache::thrift

namespace cpp2 {

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum>;
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class MyDataItem;
class MyStruct;
class MyUnion;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class MyDataItem final : private apache::thrift::detail::st::ComparisonOperators<MyDataItem> {
 public:

  MyDataItem() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyDataItem(apache::thrift::FragileConstructor);

  MyDataItem(MyDataItem&&) = default;

  MyDataItem(const MyDataItem&) = default;

  MyDataItem& operator=(MyDataItem&&) = default;

  MyDataItem& operator=(const MyDataItem&) = default;
  void __clear();
  bool operator==(const MyDataItem& rhs) const;
  bool operator<(const MyDataItem& rhs) const;

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

  friend class ::apache::thrift::Cpp2Ops< MyDataItem >;
};

void swap(MyDataItem& a, MyDataItem& b);

template <class Protocol_>
uint32_t MyDataItem::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class MyStruct final : private apache::thrift::detail::st::ComparisonOperators<MyStruct> {
 public:

  MyStruct() :
      MyIntField(0),
      myEnum( ::cpp2::MyEnum::MyValue1) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, int64_t MyIntField__arg, ::std::string MyStringField__arg,  ::cpp2::MyDataItem MyDataField__arg,  ::cpp2::MyEnum myEnum__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;

  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();
 public:
  int64_t MyIntField;
 public:
  ::std::string MyStringField;
 public:
   ::cpp2::MyDataItem MyDataField;
 public:
   ::cpp2::MyEnum myEnum;

 public:
  struct __isset {
    bool MyIntField;
    bool MyStringField;
    bool MyDataField;
    bool myEnum;
  } __isset = {};
  bool operator==(const MyStruct& rhs) const;
  bool operator<(const MyStruct& rhs) const;

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }

  const ::std::string& get_MyStringField() const& {
    return MyStringField;
  }

  ::std::string get_MyStringField() && {
    return std::move(MyStringField);
  }

  template <typename T_MyStruct_MyStringField_struct_setter = ::std::string>
  ::std::string& set_MyStringField(T_MyStruct_MyStringField_struct_setter&& MyStringField_) {
    MyStringField = std::forward<T_MyStruct_MyStringField_struct_setter>(MyStringField_);
    __isset.MyStringField = true;
    return MyStringField;
  }
  const  ::cpp2::MyDataItem& get_MyDataField() const&;
   ::cpp2::MyDataItem get_MyDataField() &&;

  template <typename T_MyStruct_MyDataField_struct_setter =  ::cpp2::MyDataItem>
   ::cpp2::MyDataItem& set_MyDataField(T_MyStruct_MyDataField_struct_setter&& MyDataField_) {
    MyDataField = std::forward<T_MyStruct_MyDataField_struct_setter>(MyDataField_);
    __isset.MyDataField = true;
    return MyDataField;
  }

   ::cpp2::MyEnum get_myEnum() const {
    return myEnum;
  }

   ::cpp2::MyEnum& set_myEnum( ::cpp2::MyEnum myEnum_) {
    myEnum = myEnum_;
    __isset.myEnum = true;
    return myEnum;
  }

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

  friend class ::apache::thrift::Cpp2Ops< MyStruct >;
};

void swap(MyStruct& a, MyStruct& b);

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class MyUnion final : private apache::thrift::detail::st::ComparisonOperators<MyUnion> {
 public:
  enum Type {
    __EMPTY__ = 0,
    myEnum = 1,
    myStruct = 2,
    myDataItem = 3,
  } ;

  MyUnion()
      : type_(Type::__EMPTY__) {}

  MyUnion(MyUnion&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  MyUnion(const MyUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(rhs.value_.myStruct);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  MyUnion& operator=(MyUnion&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(std::move(rhs.value_.myStruct));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myStruct:
      {
        set_myStruct(rhs.value_.myStruct);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~MyUnion() {
    __clear();
  }
  union storage_type {
     ::cpp2::MyEnum myEnum;
     ::cpp2::MyStruct myStruct;
     ::cpp2::MyDataItem myDataItem;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const MyUnion& rhs) const;
  bool operator<(const MyUnion& rhs) const;

   ::cpp2::MyEnum& set_myEnum( ::cpp2::MyEnum t =  ::cpp2::MyEnum()) {
    __clear();
    type_ = Type::myEnum;
    ::new (std::addressof(value_.myEnum))  ::cpp2::MyEnum(t);
    return value_.myEnum;
  }

   ::cpp2::MyStruct& set_myStruct( ::cpp2::MyStruct const &t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct))  ::cpp2::MyStruct(t);
    return value_.myStruct;
  }

   ::cpp2::MyStruct& set_myStruct( ::cpp2::MyStruct&& t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct))  ::cpp2::MyStruct(std::move(t));
    return value_.myStruct;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t< ::cpp2::MyStruct, T...>>  ::cpp2::MyStruct& set_myStruct(T&&... t) {
    __clear();
    type_ = Type::myStruct;
    ::new (std::addressof(value_.myStruct))  ::cpp2::MyStruct(std::forward<T>(t)...);
    return value_.myStruct;
  }

   ::cpp2::MyDataItem& set_myDataItem( ::cpp2::MyDataItem const &t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem))  ::cpp2::MyDataItem(t);
    return value_.myDataItem;
  }

   ::cpp2::MyDataItem& set_myDataItem( ::cpp2::MyDataItem&& t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem))  ::cpp2::MyDataItem(std::move(t));
    return value_.myDataItem;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t< ::cpp2::MyDataItem, T...>>  ::cpp2::MyDataItem& set_myDataItem(T&&... t) {
    __clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem))  ::cpp2::MyDataItem(std::forward<T>(t)...);
    return value_.myDataItem;
  }

   ::cpp2::MyEnum const & get_myEnum() const {
    assert(type_ == Type::myEnum);
    return value_.myEnum;
  }

   ::cpp2::MyStruct const & get_myStruct() const {
    assert(type_ == Type::myStruct);
    return value_.myStruct;
  }

   ::cpp2::MyDataItem const & get_myDataItem() const {
    assert(type_ == Type::myDataItem);
    return value_.myDataItem;
  }

   ::cpp2::MyEnum & mutable_myEnum() {
    assert(type_ == Type::myEnum);
    return value_.myEnum;
  }

   ::cpp2::MyStruct & mutable_myStruct() {
    assert(type_ == Type::myStruct);
    return value_.myStruct;
  }

   ::cpp2::MyDataItem & mutable_myDataItem() {
    assert(type_ == Type::myDataItem);
    return value_.myDataItem;
  }

   ::cpp2::MyEnum move_myEnum() {
    assert(type_ == Type::myEnum);
    return std::move(value_.myEnum);
  }

   ::cpp2::MyStruct move_myStruct() {
    assert(type_ == Type::myStruct);
    return std::move(value_.myStruct);
  }

   ::cpp2::MyDataItem move_myDataItem() {
    assert(type_ == Type::myDataItem);
    return std::move(value_.myDataItem);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyUnion >;
};

void swap(MyUnion& a, MyUnion& b);

template <class Protocol_>
uint32_t MyUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
