//
// Created by Merlin on 18-May-15.
//
#include "fakeit.hpp"
#include "catch.hpp"

using namespace fakeit;

struct SomeInterface {
    virtual int foo(int) = 0;

    virtual int bar(std::string) = 0;
};


SCENARIO("Can use FakeIt with Catch") {
    GIVEN("A mock for SomeInterface") {
        // Instantiate a mock object.
        Mock<SomeInterface> mock;
        WHEN("foo was stub and return 1") {
            // Setup mock behavior.
            When(Method(mock, foo)).Return(1);

            THEN("calling foo should return 1") {
                REQUIRE(mock.get().foo(1) == 1);
            }

        }
    }

}