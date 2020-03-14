#include "calculator.h"
#define  CATCH_CONFIG_MAIN //catch provides main method
#include "catch.hpp"

calculator* calc = new calculator();

TEST_CASE( "sum of 3 and 5 is 8 (fail)", "[single-file]" ) {
    REQUIRE(calc->sum(3,5) == 8);
}
TEST_CASE( "multiplication of 4 and 5 is 20 (fail)", "[single-file]" ) {
    REQUIRE(calc->multiply(4,5) == 20);
}
TEST_CASE( "subtraction of 1-8 is -7", "[single-file]" ) {
    REQUIRE(calc->subtract(1,8) == -7);
}
TEST_CASE( "division of 1024 and 8 is 128 (fail)", "[single-file]" ) {
    REQUIRE(calc->divide(1024,8) == 128);
}