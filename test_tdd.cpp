#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

TEST_CASE("Check the continous range is detected") {
  int test_array[] = {3, 3, 5, 4, 10, 11, 12}
  REQUIRE(isContinousRangeDetected(test_array) == true)
}
