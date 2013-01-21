/*
 *  .file oglplus/enums/provoke_mode_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/provoke_mode.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	ProvokeMode
> EnumValueRange(ProvokeMode*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_FIRST_VERTEX_CONVENTION
GL_FIRST_VERTEX_CONVENTION,
#endif
#if defined GL_LAST_VERTEX_CONVENTION
GL_LAST_VERTEX_CONVENTION,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	ProvokeMode
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

