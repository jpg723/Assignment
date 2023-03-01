/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int weight, height;

	//변수 입력
	printf("Enter your height: ");
	scanf("%d", &height);
	printf("Enter your weight: ");
	scanf("%d", &weight);

	//만약 height <= 110이면
	if (height <= weight + 110)
		printf("You need a diet\n");

	printf("BYE\n");

	return 0;
}