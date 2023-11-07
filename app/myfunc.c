
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfunc.h"

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

int square(double a, double b, double c, double* roots) {
    if (a ==0 && b !=0){
	roots[0] = (-c)/b;
	roots[1] = (-c)/b;
        return 0;
    }
    if (a ==0 && b ==0){
	return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        roots[0] = (-b + sqrt(discriminant)) / (2 * a);
        roots[1] = (-b - sqrt(discriminant)) / (2 * a);
    } else {
        return 1;
    }

    return 0;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}