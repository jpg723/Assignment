/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	double num1, num2, bigNumber;

	//���� �Է�
	printf("Enter a floating number: ");
	scanf("%lf", &num1);
	printf("Enter a floating number: ");
	scanf("%lf", &num2);

	//�� ū �� ����
	if (num1 > num2)
		bigNumber = num1;

	else
		bigNumber = num2;

	printf("The bigger number is %.2lf\n", bigNumber);

	return 0;
}