#ifndef SQUARE_H
#define SQUARE_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

int compareSquareResults(double a, double b, double c, double* expected, int numRoots) {
    double roots[2];
    int test = square(a, b, c, roots);

    if (test != 1 && numRoots == 0 || test == 1 && numRoots != 0) {
        return 0;
    }
    if (test == 1 && numRoots == 0){
	return 1;
    }

    if (numRoots == 1 && roots[0] != roots[1]) {
	return 0;
    }

    for (int i = 0; i < 2; i++) {
        if (roots[i] != roots[0] && roots[i] != roots[1]) {
            return 0;
        }
    }

    return 1;
}

TEST(SQUARETest, discr_greater_0) {
    double a = 1, b = -3, c = 2;
    double expected[] = {2.0, 1.0};
    int numRoots = 2;
    ASSERT_EQ(compareSquareResults(a, b, c, expected, numRoots), 1);
}

TEST(SQUARETest, discr_less_0) {
    double a = 2, b = 2, c = 2;
    int numRoots = 0;
    ASSERT_EQ(compareSquareResults(a, b, c, NULL, numRoots), 1);
}

TEST(SQUARETest, discr_eq_0) {
    double a = 1, b = -2, c = 1;
    double expected[] = {1.0, 1.0};
    int numRoots = 1;
    ASSERT_EQ(compareSquareResults(a, b, c, expected, numRoots), 1);
}
TEST(SQUARETest, integrated) {
    double a = double(fibonachi(5)), b = double(fibonachi(5)), c = double(fibonachi(5));
    int numRoots = 0;
    ASSERT_EQ(compareSquareResults(a, b, c, NULL, numRoots), 1);
}
#endif // SQUARE_H