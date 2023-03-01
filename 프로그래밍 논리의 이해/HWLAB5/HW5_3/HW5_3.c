/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	double celsius, fahrenheit;

	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);

	//fahrenheit 계산
	fahrenheit = celsius * 9.0 / 5.0 + 32;

	//결과 출력
	printf("Fahrenheit Equivalent : %lf\n", fahrenheit);

	return 0;
}
