/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int radius;
	double area, circumference;

	//radius 입력
	printf("Enter a radius: ");
	scanf("%d", &radius);

	//area, circumference 계산
	area = 3.14159200 * radius * radius;
	circumference = 3.14159200 * 2 * radius;

	//결과 출력
	printf("The area of a circle with %d:\t\t%lf\n", radius, area);
	printf("The circumference of a circle with %d:\t%lf\n", radius, circumference);

	return 0;
}