/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int n, integer, i, count = 0;

	printf("Enter the # of integers: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Enter an integer: ");
		scanf("%d", &integer);

		if (integer% 2 == 0)
			count++;
	}

	printf("Enter of even numbers is %d\n", count);

	return 0;
}