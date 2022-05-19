#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "Bar.h"

TEST_CASE( "Bar magic number is correct.", "[bar]" ) {
    Bar b{};
    REQUIRE( b.getMagicNumber() == 2049 );
}