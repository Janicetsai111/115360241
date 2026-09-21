#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c;
	printf("Enter three integers:");
	scanf("%d %d %d", &a, &b, &c);
	int min, max;
	min = a;
	max = a;
	if (b > max) {
		max = b;
	}
	if (b < min) {
		min = b;
	}
	if (c > max) {
		max = c;
	}
	if (c < min) {
		min = c;
	}
	printf("The largest integer is %d.\n", max);
	printf("The smallest integer is %d.\n", min);
	return 0;
}