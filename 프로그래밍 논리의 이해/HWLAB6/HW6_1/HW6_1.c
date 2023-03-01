/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	double num1, num2, bigNumber;

	//변수 입력
	printf("Enter a floating number: ");
	scanf("%lf", &num1);
	printf("Enter a floating number: ");
	scanf("%lf", &num2);

	//더 큰 수 고르기
	if (num1 > num2)
		bigNumber = num1;

	else
		bigNumber = num2;

	printf("The bigger number is %.2lf\n", bigNumber);

	return 0;
}