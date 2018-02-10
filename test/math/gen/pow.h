#define TEST_FUNC pow

#define ARG_TYPE DOUBLE
#define ARG2_TYPE DOUBLE
#define RET_TYPE DOUBLE

#define ARGS { \
  { 0.0, 0.0 }, \
  { 0.0, -0.0 }, \
  { 0.0, 1.0 }, \
  { 0.0, -1.0 }, \
  { 0.0, DBL_MIN }, \
  { 0.0, -DBL_MIN }, \
  { 0.0, DBL_MAX }, \
  { 0.0, -DBL_MAX }, \
  { 0.0, 1.0/0.0 }, \
  { 0.0, -1.0/0.0 }, \
  { 0.0, nan("") }, \
  { 0.0, -nan("") }, \
  { 0.0, 0.9 }, \
  { 0.0, 1.1 }, \
  { 0.0, -0.9 }, \
  { 0.0, -1.1 }, \
  { -0.0, 0.0 }, \
  { -0.0, -0.0 }, \
  { -0.0, 1.0 }, \
  { -0.0, -1.0 }, \
  { -0.0, DBL_MIN }, \
  { -0.0, -DBL_MIN }, \
  { -0.0, DBL_MAX }, \
  { -0.0, -DBL_MAX }, \
  { -0.0, 1.0/0.0 }, \
  { -0.0, -1.0/0.0 }, \
  { -0.0, nan("") }, \
  { -0.0, -nan("") }, \
  { -0.0, 0.9 }, \
  { -0.0, 1.1 }, \
  { -0.0, -0.9 }, \
  { -0.0, -1.1 }, \
  { 1.0, 0.0 }, \
  { 1.0, -0.0 }, \
  { 1.0, 1.0 }, \
  { 1.0, -1.0 }, \
  { 1.0, DBL_MIN }, \
  { 1.0, -DBL_MIN }, \
  { 1.0, DBL_MAX }, \
  { 1.0, -DBL_MAX }, \
  { 1.0, 1.0/0.0 }, \
  { 1.0, -1.0/0.0 }, \
  { 1.0, nan("") }, \
  { 1.0, -nan("") }, \
  { 1.0, 0.9 }, \
  { 1.0, 1.1 }, \
  { 1.0, -0.9 }, \
  { 1.0, -1.1 }, \
  { -1.0, 0.0 }, \
  { -1.0, -0.0 }, \
  { -1.0, 1.0 }, \
  { -1.0, -1.0 }, \
  { -1.0, DBL_MIN }, \
  { -1.0, -DBL_MIN }, \
  { -1.0, DBL_MAX }, \
  { -1.0, -DBL_MAX }, \
  { -1.0, 1.0/0.0 }, \
  { -1.0, -1.0/0.0 }, \
  { -1.0, nan("") }, \
  { -1.0, -nan("") }, \
  { -1.0, 0.9 }, \
  { -1.0, 1.1 }, \
  { -1.0, -0.9 }, \
  { -1.0, -1.1 }, \
  { DBL_MIN, 0.0 }, \
  { DBL_MIN, -0.0 }, \
  { DBL_MIN, 1.0 }, \
  { DBL_MIN, -1.0 }, \
  { DBL_MIN, DBL_MIN }, \
  { DBL_MIN, -DBL_MIN }, \
  { DBL_MIN, DBL_MAX }, \
  { DBL_MIN, -DBL_MAX }, \
  { DBL_MIN, 1.0/0.0 }, \
  { DBL_MIN, -1.0/0.0 }, \
  { DBL_MIN, nan("") }, \
  { DBL_MIN, -nan("") }, \
  { DBL_MIN, 0.9 }, \
  { DBL_MIN, 1.1 }, \
  { DBL_MIN, -0.9 }, \
  { DBL_MIN, -1.1 }, \
  { -DBL_MIN, 0.0 }, \
  { -DBL_MIN, -0.0 }, \
  { -DBL_MIN, 1.0 }, \
  { -DBL_MIN, -1.0 }, \
  { -DBL_MIN, DBL_MIN }, \
  { -DBL_MIN, -DBL_MIN }, \
  { -DBL_MIN, DBL_MAX }, \
  { -DBL_MIN, -DBL_MAX }, \
  { -DBL_MIN, 1.0/0.0 }, \
  { -DBL_MIN, -1.0/0.0 }, \
  { -DBL_MIN, nan("") }, \
  { -DBL_MIN, -nan("") }, \
  { -DBL_MIN, 0.9 }, \
  { -DBL_MIN, 1.1 }, \
  { -DBL_MIN, -0.9 }, \
  { -DBL_MIN, -1.1 }, \
  { DBL_MAX, 0.0 }, \
  { DBL_MAX, -0.0 }, \
  { DBL_MAX, 1.0 }, \
  { DBL_MAX, -1.0 }, \
  { DBL_MAX, DBL_MIN }, \
  { DBL_MAX, -DBL_MIN }, \
  { DBL_MAX, DBL_MAX }, \
  { DBL_MAX, -DBL_MAX }, \
  { DBL_MAX, 1.0/0.0 }, \
  { DBL_MAX, -1.0/0.0 }, \
  { DBL_MAX, nan("") }, \
  { DBL_MAX, -nan("") }, \
  { DBL_MAX, 0.9 }, \
  { DBL_MAX, 1.1 }, \
  { DBL_MAX, -0.9 }, \
  { DBL_MAX, -1.1 }, \
  { -DBL_MAX, 0.0 }, \
  { -DBL_MAX, -0.0 }, \
  { -DBL_MAX, 1.0 }, \
  { -DBL_MAX, -1.0 }, \
  { -DBL_MAX, DBL_MIN }, \
  { -DBL_MAX, -DBL_MIN }, \
  { -DBL_MAX, DBL_MAX }, \
  { -DBL_MAX, -DBL_MAX }, \
  { -DBL_MAX, 1.0/0.0 }, \
  { -DBL_MAX, -1.0/0.0 }, \
  { -DBL_MAX, nan("") }, \
  { -DBL_MAX, -nan("") }, \
  { -DBL_MAX, 0.9 }, \
  { -DBL_MAX, 1.1 }, \
  { -DBL_MAX, -0.9 }, \
  { -DBL_MAX, -1.1 }, \
  { 1.0/0.0, 0.0 }, \
  { 1.0/0.0, -0.0 }, \
  { 1.0/0.0, 1.0 }, \
  { 1.0/0.0, -1.0 }, \
  { 1.0/0.0, DBL_MIN }, \
  { 1.0/0.0, -DBL_MIN }, \
  { 1.0/0.0, DBL_MAX }, \
  { 1.0/0.0, -DBL_MAX }, \
  { 1.0/0.0, 1.0/0.0 }, \
  { 1.0/0.0, -1.0/0.0 }, \
  { 1.0/0.0, nan("") }, \
  { 1.0/0.0, -nan("") }, \
  { 1.0/0.0, 0.9 }, \
  { 1.0/0.0, 1.1 }, \
  { 1.0/0.0, -0.9 }, \
  { 1.0/0.0, -1.1 }, \
  { -1.0/0.0, 0.0 }, \
  { -1.0/0.0, -0.0 }, \
  { -1.0/0.0, 1.0 }, \
  { -1.0/0.0, -1.0 }, \
  { -1.0/0.0, DBL_MIN }, \
  { -1.0/0.0, -DBL_MIN }, \
  { -1.0/0.0, DBL_MAX }, \
  { -1.0/0.0, -DBL_MAX }, \
  { -1.0/0.0, 1.0/0.0 }, \
  { -1.0/0.0, -1.0/0.0 }, \
  { -1.0/0.0, nan("") }, \
  { -1.0/0.0, -nan("") }, \
  { -1.0/0.0, 0.9 }, \
  { -1.0/0.0, 1.1 }, \
  { -1.0/0.0, -0.9 }, \
  { -1.0/0.0, -1.1 }, \
  { nan(""), 0.0 }, \
  { nan(""), -0.0 }, \
  { nan(""), 1.0 }, \
  { nan(""), -1.0 }, \
  { nan(""), DBL_MIN }, \
  { nan(""), -DBL_MIN }, \
  { nan(""), DBL_MAX }, \
  { nan(""), -DBL_MAX }, \
  { nan(""), 1.0/0.0 }, \
  { nan(""), -1.0/0.0 }, \
  { nan(""), nan("") }, \
  { nan(""), -nan("") }, \
  { nan(""), 0.9 }, \
  { nan(""), 1.1 }, \
  { nan(""), -0.9 }, \
  { nan(""), -1.1 }, \
  { -nan(""), 0.0 }, \
  { -nan(""), -0.0 }, \
  { -nan(""), 1.0 }, \
  { -nan(""), -1.0 }, \
  { -nan(""), DBL_MIN }, \
  { -nan(""), -DBL_MIN }, \
  { -nan(""), DBL_MAX }, \
  { -nan(""), -DBL_MAX }, \
  { -nan(""), 1.0/0.0 }, \
  { -nan(""), -1.0/0.0 }, \
  { -nan(""), nan("") }, \
  { -nan(""), -nan("") }, \
  { -nan(""), 0.9 }, \
  { -nan(""), 1.1 }, \
  { -nan(""), -0.9 }, \
  { -nan(""), -1.1 }, \
  { 0.9, 0.0 }, \
  { 0.9, -0.0 }, \
  { 0.9, 1.0 }, \
  { 0.9, -1.0 }, \
  { 0.9, DBL_MIN }, \
  { 0.9, -DBL_MIN }, \
  { 0.9, DBL_MAX }, \
  { 0.9, -DBL_MAX }, \
  { 0.9, 1.0/0.0 }, \
  { 0.9, -1.0/0.0 }, \
  { 0.9, nan("") }, \
  { 0.9, -nan("") }, \
  { 0.9, 0.9 }, \
  { 0.9, 1.1 }, \
  { 0.9, -0.9 }, \
  { 0.9, -1.1 }, \
  { 1.1, 0.0 }, \
  { 1.1, -0.0 }, \
  { 1.1, 1.0 }, \
  { 1.1, -1.0 }, \
  { 1.1, DBL_MIN }, \
  { 1.1, -DBL_MIN }, \
  { 1.1, DBL_MAX }, \
  { 1.1, -DBL_MAX }, \
  { 1.1, 1.0/0.0 }, \
  { 1.1, -1.0/0.0 }, \
  { 1.1, nan("") }, \
  { 1.1, -nan("") }, \
  { 1.1, 0.9 }, \
  { 1.1, 1.1 }, \
  { 1.1, -0.9 }, \
  { 1.1, -1.1 }, \
  { -0.9, 0.0 }, \
  { -0.9, -0.0 }, \
  { -0.9, 1.0 }, \
  { -0.9, -1.0 }, \
  { -0.9, DBL_MIN }, \
  { -0.9, -DBL_MIN }, \
  { -0.9, DBL_MAX }, \
  { -0.9, -DBL_MAX }, \
  { -0.9, 1.0/0.0 }, \
  { -0.9, -1.0/0.0 }, \
  { -0.9, nan("") }, \
  { -0.9, -nan("") }, \
  { -0.9, 0.9 }, \
  { -0.9, 1.1 }, \
  { -0.9, -0.9 }, \
  { -0.9, -1.1 }, \
  { -1.1, 0.0 }, \
  { -1.1, -0.0 }, \
  { -1.1, 1.0 }, \
  { -1.1, -1.0 }, \
  { -1.1, DBL_MIN }, \
  { -1.1, -DBL_MIN }, \
  { -1.1, DBL_MAX }, \
  { -1.1, -DBL_MAX }, \
  { -1.1, 1.0/0.0 }, \
  { -1.1, -1.0/0.0 }, \
  { -1.1, nan("") }, \
  { -1.1, -nan("") }, \
  { -1.1, 0.9 }, \
  { -1.1, 1.1 }, \
  { -1.1, -0.9 }, \
  { -1.1, -1.1 }, \
}
