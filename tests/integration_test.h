#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(integrationTest, sqrtFibonachi) {
    ASSERT_EQ(my_sqrt(fibonachi(4)), sqrt(3));
}


#endif // MY_SQRT_H
