/**
 *  @file eglplus/enumerations.hpp
 *  @brief Enumeration-related declarations
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2012-2019 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef EGLPLUS_ENUMERATIONS_1303201759_HPP
#define EGLPLUS_ENUMERATIONS_1303201759_HPP

#include <eglplus/config.hpp>
#include <eglplus/detail/base_range.hpp>
#include <eglplus/detail/enum_class.hpp>
#include <eglplus/string.hpp>
#include <eglplus/utils/type_tag.hpp>

namespace eglplus {
namespace enums {

template <typename Enum>
struct EnumBaseType {
    using Type = EGLenum;
};

template <typename EnumType>
inline StrCRef EnumValueName(EnumType enum_value) {
#if !EGLPLUS_NO_ENUM_VALUE_NAMES
    using BaseType = typename EnumBaseType<EnumType>::Type;
    return ValueName_(&TypeTag<EnumType>(), BaseType(enum_value));
#else
    OGLPLUS_FAKE_USE(enum_value);
    return StrCRef();
#endif
}

template <typename EnumType>
inline aux::
  CastIterRange<const typename EnumBaseType<EnumType>::Type*, EnumType>
  EnumValueRange() {
#if !EGLPLUS_NO_ENUM_VALUE_RANGES
    return ValueRange_(&TypeTag<EnumType>());
#else
    const typename EnumBaseType<EnumType>::Type* x = nullptr;
    return aux::
      CastIterRange<const typename EnumBaseType<EnumType>::Type*, EnumType>(
        x, x);

#endif
}

} // namespace enums

using enums::EnumValueName;
using enums::EnumValueRange;

} // namespace eglplus

#endif // include guard
