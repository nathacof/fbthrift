/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"

namespace cpp2 {

const _MyEnumA_EnumMapFactory::ValuesToNamesMapType _MyEnumA_VALUES_TO_NAMES = _MyEnumA_EnumMapFactory::makeValuesToNamesMap();
const _MyEnumA_EnumMapFactory::NamesToValuesMapType _MyEnumA_NAMES_TO_VALUES = _MyEnumA_EnumMapFactory::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::cpp2::MyEnumA>::size = 3;
template <> const folly::Range<const  ::cpp2::MyEnumA*> TEnumTraits< ::cpp2::MyEnumA>::values = folly::range( ::cpp2::_MyEnumAEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::cpp2::MyEnumA>::names = folly::range( ::cpp2::_MyEnumAEnumDataStorage::names);
template <> const char* TEnumTraits< ::cpp2::MyEnumA>::findName( ::cpp2::MyEnumA value) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnumA_EnumMapFactory::ValuesToNamesMapType>{ ::cpp2::_MyEnumA_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::cpp2::MyEnumA>::findValue(const char* name,  ::cpp2::MyEnumA* outValue) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnumA_EnumMapFactory::NamesToValuesMapType>{ ::cpp2::_MyEnumA_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

SmallStruct::SmallStruct(apache::thrift::FragileConstructor, bool small_A__arg, int32_t small_B__arg) :
    small_A(std::move(small_A__arg)),
    small_B(std::move(small_B__arg)) {
  __isset.small_A = true;
  __isset.small_B = true;
}

void SmallStruct::__clear() {
  // clear all fields
  small_A = 0;
  small_B = 0;
  __isset = {};
}

bool SmallStruct::operator==(const SmallStruct& rhs) const {
  (void)rhs;
  if (!(small_A == rhs.small_A)) {
    return false;
  }
  if (!(small_B == rhs.small_B)) {
    return false;
  }
  return true;
}

bool SmallStruct::operator<(const SmallStruct& rhs) const {
  (void)rhs;
  if (!(small_A == rhs.small_A)) {
    return small_A < rhs.small_A;
  }
  if (!(small_B == rhs.small_B)) {
    return small_B < rhs.small_B;
  }
  return false;
}

void SmallStruct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "small_A") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "small_B") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

void swap(SmallStruct& a, SmallStruct& b) {
  using ::std::swap;
  swap(a.small_A, b.small_A);
  swap(a.small_B, b.small_B);
  swap(a.__isset, b.__isset);
}

template void SmallStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SmallStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

containerStruct::containerStruct(const containerStruct& src) {
  fieldA = src.fieldA;
  __isset.fieldA = src.__isset.fieldA;
  fieldB = src.fieldB;
  __isset.fieldB = src.__isset.fieldB;
  fieldC = src.fieldC;
  __isset.fieldC = src.__isset.fieldC;
  fieldD = src.fieldD;
  __isset.fieldD = src.__isset.fieldD;
  fieldE = src.fieldE;
  __isset.fieldE = src.__isset.fieldE;
  fieldF = src.fieldF;
  __isset.fieldF = src.__isset.fieldF;
  fieldG = src.fieldG;
  __isset.fieldG = src.__isset.fieldG;
  fieldH = src.fieldH;
  __isset.fieldH = src.__isset.fieldH;
  fieldI = src.fieldI;
  __isset.fieldI = src.__isset.fieldI;
  fieldJ = src.fieldJ;
  __isset.fieldJ = src.__isset.fieldJ;
  fieldK = src.fieldK;
  __isset.fieldK = src.__isset.fieldK;
  fieldL = src.fieldL;
  __isset.fieldL = src.__isset.fieldL;
  fieldM = src.fieldM;
  __isset.fieldM = src.__isset.fieldM;
  fieldN = src.fieldN;
  __isset.fieldN = src.__isset.fieldN;
  fieldO = src.fieldO;
  __isset.fieldO = src.__isset.fieldO;
  fieldP = src.fieldP;
  __isset.fieldP = src.__isset.fieldP;
  fieldQ = src.fieldQ;
  __isset.fieldQ = src.__isset.fieldQ;
  if (src.fieldR) fieldR.reset(new std::map<std::string, bool>(*src.fieldR));
  if (src.fieldS) fieldS.reset(new  ::cpp2::SmallStruct(*src.fieldS));
  fieldT = src.fieldT;
  fieldU = src.fieldU;
  if (src.fieldX) fieldX.reset(new  ::cpp2::SmallStruct(*src.fieldX));
}

containerStruct& containerStruct::operator=(const containerStruct& src) {
  containerStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

containerStruct::containerStruct() :
      fieldA(0),
      fieldC(std::initializer_list<int32_t>{1,
  2,
  3,
  4}),
      fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")),
      fieldI(true),
      fieldJ(std::initializer_list<std::pair<const std::string, std::vector<int32_t>>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldA"), std::initializer_list<int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldB"), std::initializer_list<int32_t>{2,
  5,
  9,
  13}}}),
      fieldQ(static_cast< ::cpp2::MyEnumA>(0)),
      fieldR(std::make_unique<std::map<std::string, bool>>()) {}


containerStruct::~containerStruct() {}

containerStruct::containerStruct(apache::thrift::FragileConstructor, bool fieldA__arg, std::map<std::string, bool> fieldB__arg, std::set<int32_t> fieldC__arg, std::string fieldD__arg, std::string fieldE__arg, std::vector<std::vector<std::vector<int32_t>>> fieldF__arg, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> fieldG__arg, std::vector<std::set<int32_t>> fieldH__arg, bool fieldI__arg, std::map<std::string, std::vector<int32_t>> fieldJ__arg, std::vector<std::vector<std::vector<std::vector<int32_t>>>> fieldK__arg, std::set<std::set<std::set<bool>>> fieldL__arg, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> fieldM__arg, std::vector< ::cpp2::IndirectionA> fieldN__arg, std::vector< ::cpp2::IndirectionB> fieldO__arg, std::vector< ::cpp2::IndirectionC> fieldP__arg,  ::cpp2::MyEnumA fieldQ__arg, std::unique_ptr<std::map<std::string, bool>> fieldR__arg, std::unique_ptr< ::cpp2::SmallStruct> fieldS__arg, std::shared_ptr< ::cpp2::SmallStruct> fieldT__arg, std::shared_ptr<const  ::cpp2::SmallStruct> fieldU__arg, std::unique_ptr< ::cpp2::SmallStruct> fieldX__arg) :
    fieldA(std::move(fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)),
    fieldF(std::move(fieldF__arg)),
    fieldG(std::move(fieldG__arg)),
    fieldH(std::move(fieldH__arg)),
    fieldI(std::move(fieldI__arg)),
    fieldJ(std::move(fieldJ__arg)),
    fieldK(std::move(fieldK__arg)),
    fieldL(std::move(fieldL__arg)),
    fieldM(std::move(fieldM__arg)),
    fieldN(std::move(fieldN__arg)),
    fieldO(std::move(fieldO__arg)),
    fieldP(std::move(fieldP__arg)),
    fieldQ(std::move(fieldQ__arg)),
    fieldR(std::move(fieldR__arg)),
    fieldS(std::move(fieldS__arg)),
    fieldT(std::move(fieldT__arg)),
    fieldU(std::move(fieldU__arg)),
    fieldX(std::move(fieldX__arg)) {
  __isset.fieldA = true;
  __isset.fieldB = true;
  __isset.fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
  __isset.fieldF = true;
  __isset.fieldG = true;
  __isset.fieldH = true;
  __isset.fieldI = true;
  __isset.fieldJ = true;
  __isset.fieldK = true;
  __isset.fieldL = true;
  __isset.fieldM = true;
  __isset.fieldN = true;
  __isset.fieldO = true;
  __isset.fieldP = true;
  __isset.fieldQ = true;
}

void containerStruct::__clear() {
  // clear all fields
  fieldA = 0;
  fieldB.clear();
  fieldC.clear();
  fieldD = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
  fieldF.clear();
  fieldG.clear();
  fieldH.clear();
  fieldI = true;
  fieldJ.clear();
  fieldK.clear();
  fieldL.clear();
  fieldM.clear();
  fieldN.clear();
  fieldO.clear();
  fieldP.clear();
  fieldQ = static_cast< ::cpp2::MyEnumA>(0);
  fieldR.reset(new typename decltype(fieldR)::element_type());
  if (fieldS) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldS.get());
  if (fieldT) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldT.get());
  fieldU.reset();
  if (fieldX) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldX.get());
  __isset = {};
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  (void)rhs;
  if (!(fieldA == rhs.fieldA)) {
    return false;
  }
  if (!(fieldB == rhs.fieldB)) {
    return false;
  }
  if (!(fieldC == rhs.fieldC)) {
    return false;
  }
  if (!(fieldD == rhs.fieldD)) {
    return false;
  }
  if (!(fieldE == rhs.fieldE)) {
    return false;
  }
  if (!(fieldF == rhs.fieldF)) {
    return false;
  }
  if (!(fieldG == rhs.fieldG)) {
    return false;
  }
  if (!(fieldH == rhs.fieldH)) {
    return false;
  }
  if (!(fieldI == rhs.fieldI)) {
    return false;
  }
  if (!(fieldJ == rhs.fieldJ)) {
    return false;
  }
  if (!(fieldK == rhs.fieldK)) {
    return false;
  }
  if (!(fieldL == rhs.fieldL)) {
    return false;
  }
  if (!(fieldM == rhs.fieldM)) {
    return false;
  }
  if (!(fieldN == rhs.fieldN)) {
    return false;
  }
  if (!(fieldO == rhs.fieldO)) {
    return false;
  }
  if (!(fieldP == rhs.fieldP)) {
    return false;
  }
  if (!(fieldQ == rhs.fieldQ)) {
    return false;
  }
  if (!!fieldR != !!rhs.fieldR) {
    return false;
  }
  if (!!fieldR) {
    if (fieldR != rhs.fieldR && !(*fieldR == *rhs.fieldR)) {
      return false;
    }
  }
  if (!!fieldS != !!rhs.fieldS) {
    return false;
  }
  if (!!fieldS) {
    if (fieldS != rhs.fieldS && !(*fieldS == *rhs.fieldS)) {
      return false;
    }
  }
  if (!!fieldT != !!rhs.fieldT) {
    return false;
  }
  if (!!fieldT) {
    if (fieldT != rhs.fieldT && !(*fieldT == *rhs.fieldT)) {
      return false;
    }
  }
  if (!!fieldU != !!rhs.fieldU) {
    return false;
  }
  if (!!fieldU) {
    if (fieldU != rhs.fieldU && !(*fieldU == *rhs.fieldU)) {
      return false;
    }
  }
  if (!!fieldX != !!rhs.fieldX) {
    return false;
  }
  if (!!fieldX) {
    if (fieldX != rhs.fieldX && !(*fieldX == *rhs.fieldX)) {
      return false;
    }
  }
  return true;
}

const std::map<std::string, bool>& containerStruct::get_fieldB() const& {
  return fieldB;
}

std::map<std::string, bool> containerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::set<int32_t>& containerStruct::get_fieldC() const& {
  return fieldC;
}

std::set<int32_t> containerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const std::vector<std::vector<std::vector<int32_t>>>& containerStruct::get_fieldF() const& {
  return fieldF;
}

std::vector<std::vector<std::vector<int32_t>>> containerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>& containerStruct::get_fieldG() const& {
  return fieldG;
}

std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> containerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const std::vector<std::set<int32_t>>& containerStruct::get_fieldH() const& {
  return fieldH;
}

std::vector<std::set<int32_t>> containerStruct::get_fieldH() && {
  return std::move(fieldH);
}

const std::map<std::string, std::vector<int32_t>>& containerStruct::get_fieldJ() const& {
  return fieldJ;
}

std::map<std::string, std::vector<int32_t>> containerStruct::get_fieldJ() && {
  return std::move(fieldJ);
}

const std::vector<std::vector<std::vector<std::vector<int32_t>>>>& containerStruct::get_fieldK() const& {
  return fieldK;
}

std::vector<std::vector<std::vector<std::vector<int32_t>>>> containerStruct::get_fieldK() && {
  return std::move(fieldK);
}

const std::set<std::set<std::set<bool>>>& containerStruct::get_fieldL() const& {
  return fieldL;
}

std::set<std::set<std::set<bool>>> containerStruct::get_fieldL() && {
  return std::move(fieldL);
}

const std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>& containerStruct::get_fieldM() const& {
  return fieldM;
}

std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> containerStruct::get_fieldM() && {
  return std::move(fieldM);
}

const std::vector< ::cpp2::IndirectionA>& containerStruct::get_fieldN() const& {
  return fieldN;
}

std::vector< ::cpp2::IndirectionA> containerStruct::get_fieldN() && {
  return std::move(fieldN);
}

const std::vector< ::cpp2::IndirectionB>& containerStruct::get_fieldO() const& {
  return fieldO;
}

std::vector< ::cpp2::IndirectionB> containerStruct::get_fieldO() && {
  return std::move(fieldO);
}

const std::vector< ::cpp2::IndirectionC>& containerStruct::get_fieldP() const& {
  return fieldP;
}

std::vector< ::cpp2::IndirectionC> containerStruct::get_fieldP() && {
  return std::move(fieldP);
}

void containerStruct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "fieldA") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "fieldB") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldC") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "fieldD") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "fieldE") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "fieldF") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldG") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldH") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldI") {
    fid = 9;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "fieldJ") {
    fid = 10;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldK") {
    fid = 11;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldL") {
    fid = 12;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "fieldM") {
    fid = 13;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldN") {
    fid = 14;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldO") {
    fid = 15;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldP") {
    fid = 16;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldQ") {
    fid = 17;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "fieldR") {
    fid = 18;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldS") {
    fid = 19;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldT") {
    fid = 20;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldU") {
    fid = 21;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldX") {
    fid = 23;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(containerStruct& a, containerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.fieldD, b.fieldD);
  swap(a.fieldE, b.fieldE);
  swap(a.fieldF, b.fieldF);
  swap(a.fieldG, b.fieldG);
  swap(a.fieldH, b.fieldH);
  swap(a.fieldI, b.fieldI);
  swap(a.fieldJ, b.fieldJ);
  swap(a.fieldK, b.fieldK);
  swap(a.fieldL, b.fieldL);
  swap(a.fieldM, b.fieldM);
  swap(a.fieldN, b.fieldN);
  swap(a.fieldO, b.fieldO);
  swap(a.fieldP, b.fieldP);
  swap(a.fieldQ, b.fieldQ);
  swap(a.fieldR, b.fieldR);
  swap(a.fieldS, b.fieldS);
  swap(a.fieldT, b.fieldT);
  swap(a.fieldU, b.fieldU);
  swap(a.fieldX, b.fieldX);
  swap(a.__isset, b.__isset);
}

template void containerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
