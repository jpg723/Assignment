/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf("%c", &gender);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your height: ");
	scanf("%lf", &height);

	printf("����\t����\tŰ\n");
	printf("%c\t%d\t%lf\n", gender, age, height);

	return 0;
}