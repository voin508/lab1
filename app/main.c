#include <stdio.h>

#include "myfunc.h"

int main() {
    int g = 0;
	
    printf("enter 1 if fibanchki else 2 if kvadratnoe yravnenie: ");

    if (scanf("%d", &g) != 1) {
	printf("wrong input");
    return 0;}

if(g == 1){
    int s = 0;

    if (scanf("%d", &s) != 1) {
	printf("wrong input \n");
    return 0;}

    printf("%d \n", fibonachi(s));
} else {
    printf("enter a ");
    double a = 0;

    if (scanf("%lf", &a) != 1) {
	printf("wrong input \n");
    return 0;}


    printf("enter b ");
    double b = 0;
    if (scanf("%lf", &b) != 1) {
	printf("wrong input \n");
    return 0;}


    printf("enter c ");
    double c = 0;
    if (scanf("%lf", &c) != 1) {
	printf("wrong input \n");
    return 0;}

    double roots[2];

    if (a == 0) {
        printf("a = 0\n");
        return 1;
    }

    int res = square(a, b, c, roots);

    if (res == 1) {
        printf("no roots\n");
    } else {
        printf("root1: %lf\n ", roots[0]);
        printf("root2: %lf\n ", roots[1]);
    }
}
    return 0;
}