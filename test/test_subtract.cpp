#include <gtest/gtest.h>

#include "arithmetic.h"

TEST(arithmetic, subtract) {
  double res;
  res = subtract_numbers(1.0, 2.0);
  ASSERT_NEAR(res, -1.0, 1.0e-11);
}



TEST(arithmetic, devided) {
  double res;
  res = diveded_numbers(2.0, 1.0);
  ASSERT_NEAR(res, 2, 1.0e-11);
}