/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	double celsius, fahrenheit;

	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);

	//fahrenheit ���
	fahrenheit = celsius * 9.0 / 5.0 + 32;

	//��� ���
	printf("Fahrenheit Equivalent : %lf\n", fahrenheit);

	return 0;
}
