#ifndef MY_SQRT_H
#define MY_SQRT_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(mysqrtTest, num4) {
    ASSERT_EQ(my_sqrt(4), 2);
}

TEST(mysqrtTest, num0) {
    ASSERT_EQ(my_sqrt(0), 0);
}

TEST(mysqrtTest, negative) {
    ASSERT_EQ(my_sqrt(-1), 0);
}


#endif // MY_SQRT_H
