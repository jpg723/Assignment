/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num;
	long long result = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {

		result *= i;
		printf("%d! = %d\n", i, result);
	}

	return 0;
}