#include "catch2/catch_test_macros.hpp"

#include "my_math/int.hpp"

TEST_CASE("sum", "[int]") {
    REQUIRE(sum_integers(2, 3) == 5);
    REQUIRE(sum_integers(5, 0) == 5);
    REQUIRE(sum_integers(2, -3) == -1);
}

TEST_CASE("substract", "[int]") {
    REQUIRE(subtract_integers(3, 2) == 1);
    REQUIRE(subtract_integers(5, 7) == -2);
    REQUIRE(subtract_integers(3, -2) == 5);
}

TEST_CASE("multiply", "[int]") {
    REQUIRE(multiply_integers(3, 4) == 12);
    REQUIRE(multiply_integers(-3, 4) == -12);
    REQUIRE(multiply_integers(-3, -4) == 12);
}

