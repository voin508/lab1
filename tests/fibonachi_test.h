#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(fibonachiTest, num4) {
    ASSERT_EQ(fibonachi(4), 3);
}

TEST(fibonachiTest, num0) {
    ASSERT_EQ(fibonachi(0), 0);
}

TEST(fibonachiTest, negative) {
    ASSERT_EQ(fibonachi(-1), 0);
}


#endif // FIBONACHI_H
