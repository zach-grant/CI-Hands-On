#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "Foo.h"

TEST_CASE( "Foo string is correct.", "[foo]" ) {
    Foo f{};
    REQUIRE( f.string() == "Foo" );
}