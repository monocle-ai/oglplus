/**
 *  @file oglplus/face_mode.hpp
 *  @brief OpenGL face type-related enumeration
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2015 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OGLPLUS_FACE_MODE_1107121519_HPP
#define OGLPLUS_FACE_MODE_1107121519_HPP

#ifdef Opposite
#undef Opposite
#endif

#include <oglplus/enums/face.hpp>
#include <oglplus/enums/face_orientation.hpp>

namespace oglplus {

inline Face Opposite(Face facing)
{
	if(facing == Face::Front)
		return Face::Back;
	else if(facing == Face::Back)
		return Face::Front;
	else return facing;
}

/// Inverts the face orientation (CW to CCW and CCW to CW)
/**
 *  @see FaceOrientation
 *
 *  @glsymbols
 *  @glfunref{FrontFace}
 */
inline FaceOrientation Inverted(FaceOrientation winding)
{
	if(winding == FaceOrientation::CW)
		return FaceOrientation::CCW;
	else return FaceOrientation::CW;
}

} // namespace oglplus

#endif // include guard
