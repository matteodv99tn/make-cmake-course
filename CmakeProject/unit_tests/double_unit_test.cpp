#include "catch2/catch_test_macros.hpp"

#include "my_math/double.hpp"

TEST_CASE("sum", "[double]") {
    REQUIRE(sum_reals(2.2, 3.0) == 5.2);
    REQUIRE(sum_reals(2.33, 2.33) == 4.66);
    REQUIRE(sum_reals(-2.6524, 2.6524) == 0.0);
}

TEST_CASE("substract", "[double]") {
    REQUIRE(subtract_reals(3.0, 2.0) == 1.0);
    REQUIRE(subtract_reals(5.0, 7.0) == -2.0);
}

TEST_CASE("multiply", "[double]") {
    REQUIRE(multiply_reals(3.0, 4.5) == 13.5);
    // REQUIRE(multiply_reals(-3, 5.2) == -15.6);
    REQUIRE(multiply_reals(-3, 5) == -15);
}

