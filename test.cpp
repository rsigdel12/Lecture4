#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Check if number is negative or not", "[sign]")
{
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(2) == 1);
    REQUIRE(Sign(-5) == -1);
    REQUIRE(Sign(-10) == -1);
}