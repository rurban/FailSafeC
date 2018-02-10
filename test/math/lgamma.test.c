/*
   This file is automatically generated.
 */

/**
 * @file math/lgamma.test.c
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
 * @testname lgamma_2
 * @testfor lgamma
 */
TEST_CASE(lgamma_2)
{

  static struct {
    double a;

  } args[] = {
    { 0x0p+0 },
    { -0x0p+0 },
    { 0x1p+0 },
    { -0x1p+0 },
    { 0x1p-1022 },
    { -0x1p-1022 },
    { 0x1.fffffffffffffp+1023 },
    { -0x1.fffffffffffffp+1023 },
    { INF },
    { -INF },
    { NAN },
    { NAN },
    { 0x1.ccccccccccccdp-1 },
    { 0x1.199999999999ap+0 },
    { -0x1.ccccccccccccdp-1 },
    { -0x1.199999999999ap+0 },

  };
  static struct {
    double e;

    int e2;

  } expected[] = {
    { INF, 1 } ,
    { INF, 1 } ,
    { 0x0p+0, 1 } ,
    { INF, 1 } ,
    { 0x1.6232bdd7abcd2p+9, 1 } ,
    { 0x1.6232bdd7abcd2p+9, -1 } ,
    { INF, 1 } ,
    { INF, 1 } ,
    { INF, 1 } ,
    { INF, 1 } ,
    { NAN, 1 } ,
    { NAN, 1 } ,
    { 0x1.0fe0882e465b1p-4, 1 } ,
    { -0x1.988e1705d89eap-5, 1 } ,
    { 0x1.2dd5576fc30f9p+1, -1 } ,
    { 0x1.230700402960bp+1, 1 } ,

  };
  int i;
  int ok = 1;
  for (i = 0; i < sizeof(args) / sizeof(args[0]); ++i) {

    int result2;

    double result = lgamma(args[i].a


                                );

    result2 = signgam;

    if (!CMP(DOUBLE, result, expected[i].e)

        || !CMP(INT, result2, expected[i].e2)

        ) {
      fprintf(stderr,
              "lgamma(%.16e"


              ", &r2"

              ")\n",
              args[i].a

              );

      fprintf(stderr,
              "returned: (%.16e, %d), "
              "expected: (%.16e, %d)\n",
              result, result2,
              expected[i].e, expected[i].e2
              );

      ok = 0;
    }
  }
  TEST(ok);
}
