/*
   This file is automatically generated.
 */

/**
 * @file math/remainder.test.c
 */
#include <math.h>
#include <float.h>
#include <stdio.h>
#include <stdint.h>
#include "common.h"

#ifndef NAN
#define NAN (0.0f/0.0f)
#endif

#ifndef INF
#define INF (1.0f/0.0f)
#endif

#define ABS_FLOAT       fabsf
#define ABS_DOUBLE      fabs
#define ABS_LONG_DOUBLE fabsl

#define TOLERANCE_FLOAT       0x1p-20
#define TOLERANCE_DOUBLE      0x1p-50
#define TOLERANCE_LONG_DOUBLE 0x1p-60

#define RET_MINIMUM_FLOAT       0x1p-126
#define RET_MINIMUM_DOUBLE      0x1p-1022
#define RET_MINIMUM_LONG_DOUBLE 0x1p-16382

#define max(a, b) ((a > b) ? a : b)

#define CMP_FLOAT(x, t) \
  static int compare_##x(t actual, t expected) { \
    if (isnan(actual) && isnan(expected)) \
      return 1; \
    else if (isinf(actual) && isinf(expected)) \
      return ((actual > (t)0.0) == (expected > (t)0.0)); \
    else \
      return (ABS_##x(actual - expected) < max(ABS_##x(expected * TOLERANCE_##x), RET_MINIMUM_##x)); \
  }

#define CMP_INT(x, t) \
  static int compare_##x(t actual, t expected) { return (actual == expected); }

CMP_FLOAT(FLOAT, float)
CMP_FLOAT(DOUBLE, double)
/* CMP_FLOAT(LONG_DOUBLE, long double) */

CMP_INT(INT, int)
CMP_INT(LONG, long)
CMP_INT(LONG_LONG, long long)

#define _CMP(t, a, e) compare_##t(a, e)
#define CMP(t, a, e) _CMP(t, a, e)

/**
 * @testname remainder_2
 * @testfor remainder
 */
TEST_CASE(remainder_2)
{

  static struct {
    double a;

    double a2;

  } args[] = {
    { 0x0p+0, 0x0p+0 },
    { 0x0p+0, -0x0p+0 },
    { 0x0p+0, 0x1p+0 },
    { 0x0p+0, -0x1p+0 },
    { 0x0p+0, 0x1p-1022 },
    { 0x0p+0, -0x1p-1022 },
    { 0x0p+0, 0x1.fffffffffffffp+1023 },
    { 0x0p+0, -0x1.fffffffffffffp+1023 },
    { 0x0p+0, INF },
    { 0x0p+0, -INF },
    { 0x0p+0, NAN },
    { 0x0p+0, NAN },
    { 0x0p+0, 0x1.ccccccccccccdp-1 },
    { 0x0p+0, 0x1.199999999999ap+0 },
    { 0x0p+0, -0x1.ccccccccccccdp-1 },
    { 0x0p+0, -0x1.199999999999ap+0 },
    { -0x0p+0, 0x0p+0 },
    { -0x0p+0, -0x0p+0 },
    { -0x0p+0, 0x1p+0 },
    { -0x0p+0, -0x1p+0 },
    { -0x0p+0, 0x1p-1022 },
    { -0x0p+0, -0x1p-1022 },
    { -0x0p+0, 0x1.fffffffffffffp+1023 },
    { -0x0p+0, -0x1.fffffffffffffp+1023 },
    { -0x0p+0, INF },
    { -0x0p+0, -INF },
    { -0x0p+0, NAN },
    { -0x0p+0, NAN },
    { -0x0p+0, 0x1.ccccccccccccdp-1 },
    { -0x0p+0, 0x1.199999999999ap+0 },
    { -0x0p+0, -0x1.ccccccccccccdp-1 },
    { -0x0p+0, -0x1.199999999999ap+0 },
    { 0x1p+0, 0x0p+0 },
    { 0x1p+0, -0x0p+0 },
    { 0x1p+0, 0x1p+0 },
    { 0x1p+0, -0x1p+0 },
    { 0x1p+0, 0x1p-1022 },
    { 0x1p+0, -0x1p-1022 },
    { 0x1p+0, 0x1.fffffffffffffp+1023 },
    { 0x1p+0, -0x1.fffffffffffffp+1023 },
    { 0x1p+0, INF },
    { 0x1p+0, -INF },
    { 0x1p+0, NAN },
    { 0x1p+0, NAN },
    { 0x1p+0, 0x1.ccccccccccccdp-1 },
    { 0x1p+0, 0x1.199999999999ap+0 },
    { 0x1p+0, -0x1.ccccccccccccdp-1 },
    { 0x1p+0, -0x1.199999999999ap+0 },
    { -0x1p+0, 0x0p+0 },
    { -0x1p+0, -0x0p+0 },
    { -0x1p+0, 0x1p+0 },
    { -0x1p+0, -0x1p+0 },
    { -0x1p+0, 0x1p-1022 },
    { -0x1p+0, -0x1p-1022 },
    { -0x1p+0, 0x1.fffffffffffffp+1023 },
    { -0x1p+0, -0x1.fffffffffffffp+1023 },
    { -0x1p+0, INF },
    { -0x1p+0, -INF },
    { -0x1p+0, NAN },
    { -0x1p+0, NAN },
    { -0x1p+0, 0x1.ccccccccccccdp-1 },
    { -0x1p+0, 0x1.199999999999ap+0 },
    { -0x1p+0, -0x1.ccccccccccccdp-1 },
    { -0x1p+0, -0x1.199999999999ap+0 },
    { 0x1p-1022, 0x0p+0 },
    { 0x1p-1022, -0x0p+0 },
    { 0x1p-1022, 0x1p+0 },
    { 0x1p-1022, -0x1p+0 },
    { 0x1p-1022, 0x1p-1022 },
    { 0x1p-1022, -0x1p-1022 },
    { 0x1p-1022, 0x1.fffffffffffffp+1023 },
    { 0x1p-1022, -0x1.fffffffffffffp+1023 },
    { 0x1p-1022, INF },
    { 0x1p-1022, -INF },
    { 0x1p-1022, NAN },
    { 0x1p-1022, NAN },
    { 0x1p-1022, 0x1.ccccccccccccdp-1 },
    { 0x1p-1022, 0x1.199999999999ap+0 },
    { 0x1p-1022, -0x1.ccccccccccccdp-1 },
    { 0x1p-1022, -0x1.199999999999ap+0 },
    { -0x1p-1022, 0x0p+0 },
    { -0x1p-1022, -0x0p+0 },
    { -0x1p-1022, 0x1p+0 },
    { -0x1p-1022, -0x1p+0 },
    { -0x1p-1022, 0x1p-1022 },
    { -0x1p-1022, -0x1p-1022 },
    { -0x1p-1022, 0x1.fffffffffffffp+1023 },
    { -0x1p-1022, -0x1.fffffffffffffp+1023 },
    { -0x1p-1022, INF },
    { -0x1p-1022, -INF },
    { -0x1p-1022, NAN },
    { -0x1p-1022, NAN },
    { -0x1p-1022, 0x1.ccccccccccccdp-1 },
    { -0x1p-1022, 0x1.199999999999ap+0 },
    { -0x1p-1022, -0x1.ccccccccccccdp-1 },
    { -0x1p-1022, -0x1.199999999999ap+0 },
    { 0x1.fffffffffffffp+1023, 0x0p+0 },
    { 0x1.fffffffffffffp+1023, -0x0p+0 },
    { 0x1.fffffffffffffp+1023, 0x1p+0 },
    { 0x1.fffffffffffffp+1023, -0x1p+0 },
    { 0x1.fffffffffffffp+1023, 0x1p-1022 },
    { 0x1.fffffffffffffp+1023, -0x1p-1022 },
    { 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023 },
    { 0x1.fffffffffffffp+1023, -0x1.fffffffffffffp+1023 },
    { 0x1.fffffffffffffp+1023, INF },
    { 0x1.fffffffffffffp+1023, -INF },
    { 0x1.fffffffffffffp+1023, NAN },
    { 0x1.fffffffffffffp+1023, NAN },
    { 0x1.fffffffffffffp+1023, 0x1.ccccccccccccdp-1 },
    { 0x1.fffffffffffffp+1023, 0x1.199999999999ap+0 },
    { 0x1.fffffffffffffp+1023, -0x1.ccccccccccccdp-1 },
    { 0x1.fffffffffffffp+1023, -0x1.199999999999ap+0 },
    { -0x1.fffffffffffffp+1023, 0x0p+0 },
    { -0x1.fffffffffffffp+1023, -0x0p+0 },
    { -0x1.fffffffffffffp+1023, 0x1p+0 },
    { -0x1.fffffffffffffp+1023, -0x1p+0 },
    { -0x1.fffffffffffffp+1023, 0x1p-1022 },
    { -0x1.fffffffffffffp+1023, -0x1p-1022 },
    { -0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023 },
    { -0x1.fffffffffffffp+1023, -0x1.fffffffffffffp+1023 },
    { -0x1.fffffffffffffp+1023, INF },
    { -0x1.fffffffffffffp+1023, -INF },
    { -0x1.fffffffffffffp+1023, NAN },
    { -0x1.fffffffffffffp+1023, NAN },
    { -0x1.fffffffffffffp+1023, 0x1.ccccccccccccdp-1 },
    { -0x1.fffffffffffffp+1023, 0x1.199999999999ap+0 },
    { -0x1.fffffffffffffp+1023, -0x1.ccccccccccccdp-1 },
    { -0x1.fffffffffffffp+1023, -0x1.199999999999ap+0 },
    { INF, 0x0p+0 },
    { INF, -0x0p+0 },
    { INF, 0x1p+0 },
    { INF, -0x1p+0 },
    { INF, 0x1p-1022 },
    { INF, -0x1p-1022 },
    { INF, 0x1.fffffffffffffp+1023 },
    { INF, -0x1.fffffffffffffp+1023 },
    { INF, INF },
    { INF, -INF },
    { INF, NAN },
    { INF, NAN },
    { INF, 0x1.ccccccccccccdp-1 },
    { INF, 0x1.199999999999ap+0 },
    { INF, -0x1.ccccccccccccdp-1 },
    { INF, -0x1.199999999999ap+0 },
    { -INF, 0x0p+0 },
    { -INF, -0x0p+0 },
    { -INF, 0x1p+0 },
    { -INF, -0x1p+0 },
    { -INF, 0x1p-1022 },
    { -INF, -0x1p-1022 },
    { -INF, 0x1.fffffffffffffp+1023 },
    { -INF, -0x1.fffffffffffffp+1023 },
    { -INF, INF },
    { -INF, -INF },
    { -INF, NAN },
    { -INF, NAN },
    { -INF, 0x1.ccccccccccccdp-1 },
    { -INF, 0x1.199999999999ap+0 },
    { -INF, -0x1.ccccccccccccdp-1 },
    { -INF, -0x1.199999999999ap+0 },
    { NAN, 0x0p+0 },
    { NAN, -0x0p+0 },
    { NAN, 0x1p+0 },
    { NAN, -0x1p+0 },
    { NAN, 0x1p-1022 },
    { NAN, -0x1p-1022 },
    { NAN, 0x1.fffffffffffffp+1023 },
    { NAN, -0x1.fffffffffffffp+1023 },
    { NAN, INF },
    { NAN, -INF },
    { NAN, NAN },
    { NAN, NAN },
    { NAN, 0x1.ccccccccccccdp-1 },
    { NAN, 0x1.199999999999ap+0 },
    { NAN, -0x1.ccccccccccccdp-1 },
    { NAN, -0x1.199999999999ap+0 },
    { NAN, 0x0p+0 },
    { NAN, -0x0p+0 },
    { NAN, 0x1p+0 },
    { NAN, -0x1p+0 },
    { NAN, 0x1p-1022 },
    { NAN, -0x1p-1022 },
    { NAN, 0x1.fffffffffffffp+1023 },
    { NAN, -0x1.fffffffffffffp+1023 },
    { NAN, INF },
    { NAN, -INF },
    { NAN, NAN },
    { NAN, NAN },
    { NAN, 0x1.ccccccccccccdp-1 },
    { NAN, 0x1.199999999999ap+0 },
    { NAN, -0x1.ccccccccccccdp-1 },
    { NAN, -0x1.199999999999ap+0 },
    { 0x1.ccccccccccccdp-1, 0x0p+0 },
    { 0x1.ccccccccccccdp-1, -0x0p+0 },
    { 0x1.ccccccccccccdp-1, 0x1p+0 },
    { 0x1.ccccccccccccdp-1, -0x1p+0 },
    { 0x1.ccccccccccccdp-1, 0x1p-1022 },
    { 0x1.ccccccccccccdp-1, -0x1p-1022 },
    { 0x1.ccccccccccccdp-1, 0x1.fffffffffffffp+1023 },
    { 0x1.ccccccccccccdp-1, -0x1.fffffffffffffp+1023 },
    { 0x1.ccccccccccccdp-1, INF },
    { 0x1.ccccccccccccdp-1, -INF },
    { 0x1.ccccccccccccdp-1, NAN },
    { 0x1.ccccccccccccdp-1, NAN },
    { 0x1.ccccccccccccdp-1, 0x1.ccccccccccccdp-1 },
    { 0x1.ccccccccccccdp-1, 0x1.199999999999ap+0 },
    { 0x1.ccccccccccccdp-1, -0x1.ccccccccccccdp-1 },
    { 0x1.ccccccccccccdp-1, -0x1.199999999999ap+0 },
    { 0x1.199999999999ap+0, 0x0p+0 },
    { 0x1.199999999999ap+0, -0x0p+0 },
    { 0x1.199999999999ap+0, 0x1p+0 },
    { 0x1.199999999999ap+0, -0x1p+0 },
    { 0x1.199999999999ap+0, 0x1p-1022 },
    { 0x1.199999999999ap+0, -0x1p-1022 },
    { 0x1.199999999999ap+0, 0x1.fffffffffffffp+1023 },
    { 0x1.199999999999ap+0, -0x1.fffffffffffffp+1023 },
    { 0x1.199999999999ap+0, INF },
    { 0x1.199999999999ap+0, -INF },
    { 0x1.199999999999ap+0, NAN },
    { 0x1.199999999999ap+0, NAN },
    { 0x1.199999999999ap+0, 0x1.ccccccccccccdp-1 },
    { 0x1.199999999999ap+0, 0x1.199999999999ap+0 },
    { 0x1.199999999999ap+0, -0x1.ccccccccccccdp-1 },
    { 0x1.199999999999ap+0, -0x1.199999999999ap+0 },
    { -0x1.ccccccccccccdp-1, 0x0p+0 },
    { -0x1.ccccccccccccdp-1, -0x0p+0 },
    { -0x1.ccccccccccccdp-1, 0x1p+0 },
    { -0x1.ccccccccccccdp-1, -0x1p+0 },
    { -0x1.ccccccccccccdp-1, 0x1p-1022 },
    { -0x1.ccccccccccccdp-1, -0x1p-1022 },
    { -0x1.ccccccccccccdp-1, 0x1.fffffffffffffp+1023 },
    { -0x1.ccccccccccccdp-1, -0x1.fffffffffffffp+1023 },
    { -0x1.ccccccccccccdp-1, INF },
    { -0x1.ccccccccccccdp-1, -INF },
    { -0x1.ccccccccccccdp-1, NAN },
    { -0x1.ccccccccccccdp-1, NAN },
    { -0x1.ccccccccccccdp-1, 0x1.ccccccccccccdp-1 },
    { -0x1.ccccccccccccdp-1, 0x1.199999999999ap+0 },
    { -0x1.ccccccccccccdp-1, -0x1.ccccccccccccdp-1 },
    { -0x1.ccccccccccccdp-1, -0x1.199999999999ap+0 },
    { -0x1.199999999999ap+0, 0x0p+0 },
    { -0x1.199999999999ap+0, -0x0p+0 },
    { -0x1.199999999999ap+0, 0x1p+0 },
    { -0x1.199999999999ap+0, -0x1p+0 },
    { -0x1.199999999999ap+0, 0x1p-1022 },
    { -0x1.199999999999ap+0, -0x1p-1022 },
    { -0x1.199999999999ap+0, 0x1.fffffffffffffp+1023 },
    { -0x1.199999999999ap+0, -0x1.fffffffffffffp+1023 },
    { -0x1.199999999999ap+0, INF },
    { -0x1.199999999999ap+0, -INF },
    { -0x1.199999999999ap+0, NAN },
    { -0x1.199999999999ap+0, NAN },
    { -0x1.199999999999ap+0, 0x1.ccccccccccccdp-1 },
    { -0x1.199999999999ap+0, 0x1.199999999999ap+0 },
    { -0x1.199999999999ap+0, -0x1.ccccccccccccdp-1 },
    { -0x1.199999999999ap+0, -0x1.199999999999ap+0 },

  };
  static struct {
    double e;

  } expected[] = {
    { NAN } ,
    { NAN } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x1p+0 } ,
    { 0x1p+0 } ,
    { 0x1p+0 } ,
    { 0x1p+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.9999999999998p-4 } ,
    { -0x1.99999999999ap-4 } ,
    { 0x1.9999999999998p-4 } ,
    { -0x1.99999999999ap-4 } ,
    { NAN } ,
    { NAN } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x1p+0 } ,
    { -0x1p+0 } ,
    { -0x1p+0 } ,
    { -0x1p+0 } ,
    { NAN } ,
    { NAN } ,
    { -0x1.9999999999998p-4 } ,
    { 0x1.99999999999ap-4 } ,
    { -0x1.9999999999998p-4 } ,
    { 0x1.99999999999ap-4 } ,
    { NAN } ,
    { NAN } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { NAN } ,
    { NAN } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { 0x1p-1022 } ,
    { NAN } ,
    { NAN } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { NAN } ,
    { NAN } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { -0x1p-1022 } ,
    { NAN } ,
    { NAN } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x1.fffffffffffffp+1023 } ,
    { 0x1.fffffffffffffp+1023 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.716ae7c74c794p-2 } ,
    { 0x1.d38383151ed58p-2 } ,
    { 0x1.716ae7c74c794p-2 } ,
    { 0x1.d38383151ed58p-2 } ,
    { NAN } ,
    { NAN } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x1.fffffffffffffp+1023 } ,
    { -0x1.fffffffffffffp+1023 } ,
    { NAN } ,
    { NAN } ,
    { -0x1.716ae7c74c794p-2 } ,
    { -0x1.d38383151ed58p-2 } ,
    { -0x1.716ae7c74c794p-2 } ,
    { -0x1.d38383151ed58p-2 } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { -0x1.9999999999998p-4 } ,
    { -0x1.9999999999998p-4 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x1.ccccccccccccdp-1 } ,
    { 0x1.ccccccccccccdp-1 } ,
    { 0x1.ccccccccccccdp-1 } ,
    { 0x1.ccccccccccccdp-1 } ,
    { NAN } ,
    { NAN } ,
    { 0x0p+0 } ,
    { -0x1.999999999999cp-3 } ,
    { 0x0p+0 } ,
    { -0x1.999999999999cp-3 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.99999999999ap-4 } ,
    { 0x1.99999999999ap-4 } ,
    { 0x0p+0 } ,
    { 0x0p+0 } ,
    { 0x1.199999999999ap+0 } ,
    { 0x1.199999999999ap+0 } ,
    { 0x1.199999999999ap+0 } ,
    { 0x1.199999999999ap+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.999999999999cp-3 } ,
    { 0x0p+0 } ,
    { 0x1.999999999999cp-3 } ,
    { 0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.9999999999998p-4 } ,
    { 0x1.9999999999998p-4 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x1.ccccccccccccdp-1 } ,
    { -0x1.ccccccccccccdp-1 } ,
    { -0x1.ccccccccccccdp-1 } ,
    { -0x1.ccccccccccccdp-1 } ,
    { NAN } ,
    { NAN } ,
    { -0x0p+0 } ,
    { 0x1.999999999999cp-3 } ,
    { -0x0p+0 } ,
    { 0x1.999999999999cp-3 } ,
    { NAN } ,
    { NAN } ,
    { -0x1.99999999999ap-4 } ,
    { -0x1.99999999999ap-4 } ,
    { -0x0p+0 } ,
    { -0x0p+0 } ,
    { -0x1.199999999999ap+0 } ,
    { -0x1.199999999999ap+0 } ,
    { -0x1.199999999999ap+0 } ,
    { -0x1.199999999999ap+0 } ,
    { NAN } ,
    { NAN } ,
    { -0x1.999999999999cp-3 } ,
    { -0x0p+0 } ,
    { -0x1.999999999999cp-3 } ,
    { -0x0p+0 } ,

  };
  int i;
  int ok = 1;
  for (i = 0; i < sizeof(args) / sizeof(args[0]); ++i) {

    double result = remainder(args[i].a

                                , args[i].a2


                                );

    if (!CMP(DOUBLE, result, expected[i].e)

        ) {
      fprintf(stderr,
              "remainder(%.16e"

              ", %.16e"


              ")\n",
              args[i].a

              , args[i].a2

              );

      fprintf(stderr,
              "returned: %.16e, expected: %.16e\n",
              result,
              expected[i].e
              );

      ok = 0;
    }
  }
  TEST(ok);
}
