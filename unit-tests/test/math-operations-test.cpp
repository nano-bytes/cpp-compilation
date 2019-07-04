#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../math-operations.cpp"

TEST_CASE("Should Sum two numbers properly") {
    int n1 = 3, n2 = 6, expectedResult = 9;
    REQUIRE(sum(n1, n2) == expectedResult);
}

TEST_CASE("Should Subtract two numbers properly") {
    int n1 = 13, n2 = 2, expectedResult = 11;
    REQUIRE(subtract(n1, n2) == expectedResult);
}

TEST_CASE("Should Multiply two numbers properly") {
    int n1 = 5, n2 = 11, expectedResult = 55;
    REQUIRE(multiply(n1, n2) == expectedResult);
}

TEST_CASE("Should Divide two numbers properly") {
    int n1 = 49, n2 = 13, expectedResult = 3;
    REQUIRE(division(n1, n2) == expectedResult);
}
