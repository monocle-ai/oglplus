/*
 *  .file oglplus/enums/sync_wait_result_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/sync_wait_result.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	SyncWaitResult
> EnumValueRange(SyncWaitResult*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_CONDITION_SATISFIED
GL_CONDITION_SATISFIED,
#endif
#if defined GL_ALREADY_SIGNALED
GL_ALREADY_SIGNALED,
#endif
#if defined GL_TIMEOUT_EXPIRED
GL_TIMEOUT_EXPIRED,
#endif
#if defined GL_WAIT_FAILED
GL_WAIT_FAILED,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	SyncWaitResult
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

