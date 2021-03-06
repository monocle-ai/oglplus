/*
 *  Copyright 2014-2019 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

//[oglplus_vertex_array_common

template <>
class __ObjCommonOps<__tag_VertexArray> : public __VertexArrayName {
public:
    static __VertexArrayName Binding(); /*<
    Returns the currently bound vertex array.
    See [glfunc Get], [glconst VERTEX_ARRAY_BINDING].
    >*/

    static void Bind(__VertexArrayName vertex_array); /*<
    Binds the specified [^vertex_array] object.
    See [glfunc BindVertexArray].
    >*/
    void Bind() const; /*<
    Binds the [^this] vertex array object.
    See [glfunc BindVertexArray].
    >*/
};
//]
//[oglplus_vertex_array_def

using VertexArrayOps = __ObjectOps<__tag_ImplicitSel, __tag_VertexArray>; /*<
 Indirectly inherits from __ObjCommonOps_VertexArray<__tag_VertexArray>.
 >*/

using VertexArray = __Object<VertexArrayOps>;

using NoVertexArray =
  __ObjectZero<__ObjZeroOps<__tag_ImplicitSel, __tag_VertexArray>>; /*<
 Indirectly inherits from __ObjCommonOps_VertexArray<__tag_VertexArray>.
 >*/

//]
