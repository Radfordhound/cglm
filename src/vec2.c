/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#define cglm_vec2_c
#include "../include/cglm/vec2.h"
#undef CGLM_INLINE
#include "../include/cglm/call/vec2.h"

CGLM_EXPORT
void
glmc_vec2(float * __restrict v, vec2 dest) {
  glm_vec2(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_copy(vec2 a, vec2 dest) {
  glm_vec2_copy(a, dest);
}

CGLM_EXPORT
void
glmc_vec2_zero(vec2 v) {
  glm_vec2_zero(v);
}

CGLM_EXPORT
void
glmc_vec2_one(vec2 v) {
  glm_vec2_one(v);
}

CGLM_EXPORT
float
glmc_vec2_dot(vec2 a, vec2 b) {
  return glm_vec2_dot(a, b);
}

CGLM_EXPORT
float
glmc_vec2_cross(vec2 a, vec2 b) {
  return glm_vec2_cross(a, b);
}

CGLM_EXPORT
float
glmc_vec2_norm2(vec2 v) {
  return glm_vec2_norm2(v);
}

CGLM_EXPORT
float
glmc_vec2_norm(vec2 v) {
  return glm_vec2_norm(v);
}

CGLM_EXPORT
void
glmc_vec2_add(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_add(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_adds(vec2 v, float s, vec2 dest) {
  glm_vec2_adds(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_sub(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_sub(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_subs(vec2 v, float s, vec2 dest) {
  glm_vec2_subs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_mul(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_mul(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_scale(vec2 v, float s, vec2 dest) {
  glm_vec2_scale(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_scale_as(vec2 v, float s, vec2 dest) {
  glm_vec2_scale_as(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_div(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_div(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_divs(vec2 v, float s, vec2 dest) {
  glm_vec2_divs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_addadd(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_addadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_subadd(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_subadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_muladd(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_muladd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_muladds(vec2 a, float s, vec2 dest) {
  glm_vec2_muladds(a, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_maxadd(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_maxadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_minadd(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_minadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_negate_to(vec2 v, vec2 dest) {
  glm_vec2_negate_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_negate(vec2 v) {
  glm_vec2_negate(v);
}

CGLM_EXPORT
void
glmc_vec2_normalize(vec2 v) {
  glm_vec2_normalize(v);
}

CGLM_EXPORT
void
glmc_vec2_normalize_to(vec2 v, vec2 dest) {
  glm_vec2_normalize_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_rotate(vec2 v, float angle, vec2 dest) {
  glm_vec2_rotate(v, angle, dest);
}

CGLM_EXPORT
float
glmc_vec2_distance2(vec2 a, vec2 b) {
  return glm_vec2_distance2(a, b);
}

CGLM_EXPORT
float
glmc_vec2_distance(vec2 a, vec2 b) {
  return glm_vec2_distance(a, b);
}

CGLM_EXPORT
void
glmc_vec2_maxv(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_maxv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_minv(vec2 a, vec2 b, vec2 dest) {
  glm_vec2_minv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_clamp(vec2 v, float minval, float maxval) {
  glm_vec2_clamp(v, minval, maxval);
}

CGLM_EXPORT
void
glmc_vec2_lerp(vec2 from, vec2 to, float t, vec2 dest) {
  glm_vec2_lerp(from, to, t, dest);
}

/* ext */

CGLM_EXPORT
void
glmc_vec2_fill(vec2 v, float val) {
  glm_vec2_fill(v, val);
}

CGLM_EXPORT
bool
glmc_vec2_eq(vec2 v, float val) {
  return glm_vec2_eq(v, val);
}

CGLM_EXPORT
bool
glmc_vec2_eq_eps(vec2 v, float val) {
  return glm_vec2_eq_eps(v, val);
}

CGLM_EXPORT
bool
glmc_vec2_eq_all(vec2 v) {
  return glm_vec2_eq_all(v);
}

CGLM_EXPORT
bool
glmc_vec2_eqv(vec2 a, vec2 b) {
  return glm_vec2_eqv(a, b);
}

CGLM_EXPORT
bool
glmc_vec2_eqv_eps(vec2 a, vec2 b) {
  return glm_vec2_eqv_eps(a, b);
}

CGLM_EXPORT
float
glmc_vec2_max(vec2 v) {
  return glm_vec2_max(v);
}

CGLM_EXPORT
float
glmc_vec2_min(vec2 v) {
  return glm_vec2_min(v);
}

CGLM_EXPORT
bool
glmc_vec2_isnan(vec2 v) {
  return glm_vec2_isnan(v);
}

CGLM_EXPORT
bool
glmc_vec2_isinf(vec2 v) {
  return glm_vec2_isinf(v);
}

CGLM_EXPORT
bool
glmc_vec2_isvalid(vec2 v) {
  return glm_vec2_isvalid(v);
}

CGLM_EXPORT
void
glmc_vec2_sign(vec2 v, vec2 dest) {
  glm_vec2_sign(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_sqrt(vec2 v, vec2 dest) {
  glm_vec2_sqrt(v, dest);
}
