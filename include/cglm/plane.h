/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglm_plane_h
#define cglm_plane_h

#include "common.h"
#include "vec3.h"
#include "vec4.h"

#if defined(cglm_plane_c) && !defined(CGLM_INLINE)
#  define CGLM_INLINE static
#endif

/*
 Plane equation:  Ax + By + Cz + D = 0;

 It stored in vec4 as [A, B, C, D]. (A, B, C) is normal and D is distance
*/

/*
 Functions:
   CGLM_INLINE void  glm_plane_normalize(vec4 plane);
 */

#ifdef CGLM_INLINE
/*!
 * @brief normalizes a plane
 *
 * @param[in, out] plane plane to normalize
 */
CGLM_INLINE
void
glm_plane_normalize(vec4 plane) {
  float norm;
  
  if ((norm = glm_vec3_norm(plane)) == 0.0f) {
    glm_vec4_zero(plane);
    return;
  }
  
  glm_vec4_scale(plane, 1.0f / norm, plane);
}
#else /* standard interface */
#  include "call/plane.h"
#  define glm_plane_normalize  glmc_plane_normalize
#endif /* C89 interface */
#endif /* cglm_plane_h */
