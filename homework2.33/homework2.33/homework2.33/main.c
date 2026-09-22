#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c, d, e;double sum;
    printf("Total miles driven per day: ");
    scanf("%d", &a);
    printf("Cost per gallon of gasoline: ");
    scanf("%d", &b);
    printf("Average miles per gallon: ");
    scanf("%d", &c);
    printf("Parking fees per day: ");
    scanf("%d", &d);
    printf("Tolls per day: ");
    scanf("%d", &e);
    sum = ((double)a / c * b + d + e);
    printf("The total cost of driving per day is $ % .2f\n", sum);
    return 0;
}