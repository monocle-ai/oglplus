//  File doc/quickbook/oglplus/quickref/enums/buffer_usage_class.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/buffer_usage.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2019 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_buffer_usage_class
#if !__OGLPLUS_NO_ENUM_VALUE_CLASSES
namespace enums {

template <typename Base, template <__BufferUsage> class Transform>
class __EnumToClass<Base, __BufferUsage, Transform> /*<
Specialization of __EnumToClass for the __BufferUsage enumeration.
>*/
  : public Base {
public:
    EnumToClass();
    EnumToClass(Base&& base);

    Transform<BufferUsage::StreamDraw> StreamDraw;
    Transform<BufferUsage::StreamRead> StreamRead;
    Transform<BufferUsage::StreamCopy> StreamCopy;
    Transform<BufferUsage::StaticDraw> StaticDraw;
    Transform<BufferUsage::StaticRead> StaticRead;
    Transform<BufferUsage::StaticCopy> StaticCopy;
    Transform<BufferUsage::DynamicDraw> DynamicDraw;
    Transform<BufferUsage::DynamicRead> DynamicRead;
    Transform<BufferUsage::DynamicCopy> DynamicCopy;
};

} // namespace enums
#endif
//]
