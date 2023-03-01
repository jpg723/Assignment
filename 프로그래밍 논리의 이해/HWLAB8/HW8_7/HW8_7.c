/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num;

	//변수 입력
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {

		if (num % i == 0) //약수 판별
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}