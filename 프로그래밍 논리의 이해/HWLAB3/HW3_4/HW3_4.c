/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int base, height, width, area, circumference;

	//삼각형 밑변, 높이 입력
	printf("밑변과 높이를 입력하세요: ");
	scanf("%d %d", &base, &height);

	//삼각형 넓이 계산
	area = (base * height) / 2;

	//결과 출력
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다.\n", base, height, area);

	//직사각형 가로, 높이 입력
	printf("직사각형의 가로와 높이를 입력하세요: ");
	scanf("%d %d", &width, &height);

	//직사각형 둘레, 넓이 계산
	area = width * height;
	circumference = (width + height) * 2;

	//결과 출력
	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다.\n", width, height, circumference, area);

	return 0;
}