/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf("%c", &gender);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your height: ");
	scanf("%lf", &height);

	printf("성별\t나이\t키\n");
	printf("%c\t%d\t%lf\n", gender, age, height);

	return 0;
}