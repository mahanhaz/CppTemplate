//
// Created by nguyentd on 4/23/2015.
//

#include <gtest/gtest.h>

class OneTest : public ::testing::Test {

public:
    OneTest() { }

    virtual void SetUp() {
    }

    virtual void TearDown() {
    }
};

TEST_F(OneTest, PassTest) {
    EXPECT_TRUE(true);
}

TEST_F(OneTest, FailTest){
    EXPECT_TRUE(false);
}