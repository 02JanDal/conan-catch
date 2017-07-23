/*
 *  Created by Phil on 22/10/2010.
 *  Copyright 2010 Two Blue Cubes Ltd
 *
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
 #define CATCH_CONFIG_MAIN
 #include "catch.hpp"

unsigned int Factorial( unsigned int number ) {
   return number > 1 ? Factorial(number-1)*number : 1;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Catch version", "[version]" ) {
    const Catch::Version expected_version = Catch::Version( 1, 9, 6, "", 0 );
    const Catch::Version current_version = Catch::libraryVersion();
    REQUIRE(expected_version.majorVersion == current_version.majorVersion);
    REQUIRE(expected_version.minorVersion == current_version.minorVersion);
    REQUIRE(expected_version.patchNumber == current_version.patchNumber);
}
