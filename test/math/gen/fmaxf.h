#define TEST_FUNC fmaxf

#define ARG_TYPE FLOAT
#define ARG2_TYPE FLOAT
#define RET_TYPE FLOAT

#define ARGS { \
  { 0.0f, 0.0f }, \
  { 0.0f, -0.0f }, \
  { 0.0f, 1.0 }, \
  { 0.0f, -1.0 }, \
  { 0.0f, FLT_MIN }, \
  { 0.0f, -FLT_MIN }, \
  { 0.0f, FLT_MAX }, \
  { 0.0f, -FLT_MAX }, \
  { 0.0f, 1.0f/0.0f }, \
  { 0.0f, -1.0f/0.0f }, \
  { 0.0f, nanf("") }, \
  { 0.0f, -nanf("") }, \
  { 0.0f, 0.9f }, \
  { 0.0f, 1.1f }, \
  { 0.0f, -0.9f }, \
  { 0.0f, -1.1f }, \
  { -0.0f, 0.0f }, \
  { -0.0f, -0.0f }, \
  { -0.0f, 1.0 }, \
  { -0.0f, -1.0 }, \
  { -0.0f, FLT_MIN }, \
  { -0.0f, -FLT_MIN }, \
  { -0.0f, FLT_MAX }, \
  { -0.0f, -FLT_MAX }, \
  { -0.0f, 1.0f/0.0f }, \
  { -0.0f, -1.0f/0.0f }, \
  { -0.0f, nanf("") }, \
  { -0.0f, -nanf("") }, \
  { -0.0f, 0.9f }, \
  { -0.0f, 1.1f }, \
  { -0.0f, -0.9f }, \
  { -0.0f, -1.1f }, \
  { 1.0, 0.0f }, \
  { 1.0, -0.0f }, \
  { 1.0, 1.0 }, \
  { 1.0, -1.0 }, \
  { 1.0, FLT_MIN }, \
  { 1.0, -FLT_MIN }, \
  { 1.0, FLT_MAX }, \
  { 1.0, -FLT_MAX }, \
  { 1.0, 1.0f/0.0f }, \
  { 1.0, -1.0f/0.0f }, \
  { 1.0, nanf("") }, \
  { 1.0, -nanf("") }, \
  { 1.0, 0.9f }, \
  { 1.0, 1.1f }, \
  { 1.0, -0.9f }, \
  { 1.0, -1.1f }, \
  { -1.0, 0.0f }, \
  { -1.0, -0.0f }, \
  { -1.0, 1.0 }, \
  { -1.0, -1.0 }, \
  { -1.0, FLT_MIN }, \
  { -1.0, -FLT_MIN }, \
  { -1.0, FLT_MAX }, \
  { -1.0, -FLT_MAX }, \
  { -1.0, 1.0f/0.0f }, \
  { -1.0, -1.0f/0.0f }, \
  { -1.0, nanf("") }, \
  { -1.0, -nanf("") }, \
  { -1.0, 0.9f }, \
  { -1.0, 1.1f }, \
  { -1.0, -0.9f }, \
  { -1.0, -1.1f }, \
  { FLT_MIN, 0.0f }, \
  { FLT_MIN, -0.0f }, \
  { FLT_MIN, 1.0 }, \
  { FLT_MIN, -1.0 }, \
  { FLT_MIN, FLT_MIN }, \
  { FLT_MIN, -FLT_MIN }, \
  { FLT_MIN, FLT_MAX }, \
  { FLT_MIN, -FLT_MAX }, \
  { FLT_MIN, 1.0f/0.0f }, \
  { FLT_MIN, -1.0f/0.0f }, \
  { FLT_MIN, nanf("") }, \
  { FLT_MIN, -nanf("") }, \
  { FLT_MIN, 0.9f }, \
  { FLT_MIN, 1.1f }, \
  { FLT_MIN, -0.9f }, \
  { FLT_MIN, -1.1f }, \
  { -FLT_MIN, 0.0f }, \
  { -FLT_MIN, -0.0f }, \
  { -FLT_MIN, 1.0 }, \
  { -FLT_MIN, -1.0 }, \
  { -FLT_MIN, FLT_MIN }, \
  { -FLT_MIN, -FLT_MIN }, \
  { -FLT_MIN, FLT_MAX }, \
  { -FLT_MIN, -FLT_MAX }, \
  { -FLT_MIN, 1.0f/0.0f }, \
  { -FLT_MIN, -1.0f/0.0f }, \
  { -FLT_MIN, nanf("") }, \
  { -FLT_MIN, -nanf("") }, \
  { -FLT_MIN, 0.9f }, \
  { -FLT_MIN, 1.1f }, \
  { -FLT_MIN, -0.9f }, \
  { -FLT_MIN, -1.1f }, \
  { FLT_MAX, 0.0f }, \
  { FLT_MAX, -0.0f }, \
  { FLT_MAX, 1.0 }, \
  { FLT_MAX, -1.0 }, \
  { FLT_MAX, FLT_MIN }, \
  { FLT_MAX, -FLT_MIN }, \
  { FLT_MAX, FLT_MAX }, \
  { FLT_MAX, -FLT_MAX }, \
  { FLT_MAX, 1.0f/0.0f }, \
  { FLT_MAX, -1.0f/0.0f }, \
  { FLT_MAX, nanf("") }, \
  { FLT_MAX, -nanf("") }, \
  { FLT_MAX, 0.9f }, \
  { FLT_MAX, 1.1f }, \
  { FLT_MAX, -0.9f }, \
  { FLT_MAX, -1.1f }, \
  { -FLT_MAX, 0.0f }, \
  { -FLT_MAX, -0.0f }, \
  { -FLT_MAX, 1.0 }, \
  { -FLT_MAX, -1.0 }, \
  { -FLT_MAX, FLT_MIN }, \
  { -FLT_MAX, -FLT_MIN }, \
  { -FLT_MAX, FLT_MAX }, \
  { -FLT_MAX, -FLT_MAX }, \
  { -FLT_MAX, 1.0f/0.0f }, \
  { -FLT_MAX, -1.0f/0.0f }, \
  { -FLT_MAX, nanf("") }, \
  { -FLT_MAX, -nanf("") }, \
  { -FLT_MAX, 0.9f }, \
  { -FLT_MAX, 1.1f }, \
  { -FLT_MAX, -0.9f }, \
  { -FLT_MAX, -1.1f }, \
  { 1.0f/0.0f, 0.0f }, \
  { 1.0f/0.0f, -0.0f }, \
  { 1.0f/0.0f, 1.0 }, \
  { 1.0f/0.0f, -1.0 }, \
  { 1.0f/0.0f, FLT_MIN }, \
  { 1.0f/0.0f, -FLT_MIN }, \
  { 1.0f/0.0f, FLT_MAX }, \
  { 1.0f/0.0f, -FLT_MAX }, \
  { 1.0f/0.0f, 1.0f/0.0f }, \
  { 1.0f/0.0f, -1.0f/0.0f }, \
  { 1.0f/0.0f, nanf("") }, \
  { 1.0f/0.0f, -nanf("") }, \
  { 1.0f/0.0f, 0.9f }, \
  { 1.0f/0.0f, 1.1f }, \
  { 1.0f/0.0f, -0.9f }, \
  { 1.0f/0.0f, -1.1f }, \
  { -1.0f/0.0f, 0.0f }, \
  { -1.0f/0.0f, -0.0f }, \
  { -1.0f/0.0f, 1.0 }, \
  { -1.0f/0.0f, -1.0 }, \
  { -1.0f/0.0f, FLT_MIN }, \
  { -1.0f/0.0f, -FLT_MIN }, \
  { -1.0f/0.0f, FLT_MAX }, \
  { -1.0f/0.0f, -FLT_MAX }, \
  { -1.0f/0.0f, 1.0f/0.0f }, \
  { -1.0f/0.0f, -1.0f/0.0f }, \
  { -1.0f/0.0f, nanf("") }, \
  { -1.0f/0.0f, -nanf("") }, \
  { -1.0f/0.0f, 0.9f }, \
  { -1.0f/0.0f, 1.1f }, \
  { -1.0f/0.0f, -0.9f }, \
  { -1.0f/0.0f, -1.1f }, \
  { nanf(""), 0.0f }, \
  { nanf(""), -0.0f }, \
  { nanf(""), 1.0 }, \
  { nanf(""), -1.0 }, \
  { nanf(""), FLT_MIN }, \
  { nanf(""), -FLT_MIN }, \
  { nanf(""), FLT_MAX }, \
  { nanf(""), -FLT_MAX }, \
  { nanf(""), 1.0f/0.0f }, \
  { nanf(""), -1.0f/0.0f }, \
  { nanf(""), nanf("") }, \
  { nanf(""), -nanf("") }, \
  { nanf(""), 0.9f }, \
  { nanf(""), 1.1f }, \
  { nanf(""), -0.9f }, \
  { nanf(""), -1.1f }, \
  { -nanf(""), 0.0f }, \
  { -nanf(""), -0.0f }, \
  { -nanf(""), 1.0 }, \
  { -nanf(""), -1.0 }, \
  { -nanf(""), FLT_MIN }, \
  { -nanf(""), -FLT_MIN }, \
  { -nanf(""), FLT_MAX }, \
  { -nanf(""), -FLT_MAX }, \
  { -nanf(""), 1.0f/0.0f }, \
  { -nanf(""), -1.0f/0.0f }, \
  { -nanf(""), nanf("") }, \
  { -nanf(""), -nanf("") }, \
  { -nanf(""), 0.9f }, \
  { -nanf(""), 1.1f }, \
  { -nanf(""), -0.9f }, \
  { -nanf(""), -1.1f }, \
  { 0.9f, 0.0f }, \
  { 0.9f, -0.0f }, \
  { 0.9f, 1.0 }, \
  { 0.9f, -1.0 }, \
  { 0.9f, FLT_MIN }, \
  { 0.9f, -FLT_MIN }, \
  { 0.9f, FLT_MAX }, \
  { 0.9f, -FLT_MAX }, \
  { 0.9f, 1.0f/0.0f }, \
  { 0.9f, -1.0f/0.0f }, \
  { 0.9f, nanf("") }, \
  { 0.9f, -nanf("") }, \
  { 0.9f, 0.9f }, \
  { 0.9f, 1.1f }, \
  { 0.9f, -0.9f }, \
  { 0.9f, -1.1f }, \
  { 1.1f, 0.0f }, \
  { 1.1f, -0.0f }, \
  { 1.1f, 1.0 }, \
  { 1.1f, -1.0 }, \
  { 1.1f, FLT_MIN }, \
  { 1.1f, -FLT_MIN }, \
  { 1.1f, FLT_MAX }, \
  { 1.1f, -FLT_MAX }, \
  { 1.1f, 1.0f/0.0f }, \
  { 1.1f, -1.0f/0.0f }, \
  { 1.1f, nanf("") }, \
  { 1.1f, -nanf("") }, \
  { 1.1f, 0.9f }, \
  { 1.1f, 1.1f }, \
  { 1.1f, -0.9f }, \
  { 1.1f, -1.1f }, \
  { -0.9f, 0.0f }, \
  { -0.9f, -0.0f }, \
  { -0.9f, 1.0 }, \
  { -0.9f, -1.0 }, \
  { -0.9f, FLT_MIN }, \
  { -0.9f, -FLT_MIN }, \
  { -0.9f, FLT_MAX }, \
  { -0.9f, -FLT_MAX }, \
  { -0.9f, 1.0f/0.0f }, \
  { -0.9f, -1.0f/0.0f }, \
  { -0.9f, nanf("") }, \
  { -0.9f, -nanf("") }, \
  { -0.9f, 0.9f }, \
  { -0.9f, 1.1f }, \
  { -0.9f, -0.9f }, \
  { -0.9f, -1.1f }, \
  { -1.1f, 0.0f }, \
  { -1.1f, -0.0f }, \
  { -1.1f, 1.0 }, \
  { -1.1f, -1.0 }, \
  { -1.1f, FLT_MIN }, \
  { -1.1f, -FLT_MIN }, \
  { -1.1f, FLT_MAX }, \
  { -1.1f, -FLT_MAX }, \
  { -1.1f, 1.0f/0.0f }, \
  { -1.1f, -1.0f/0.0f }, \
  { -1.1f, nanf("") }, \
  { -1.1f, -nanf("") }, \
  { -1.1f, 0.9f }, \
  { -1.1f, 1.1f }, \
  { -1.1f, -0.9f }, \
  { -1.1f, -1.1f }, \
}
