/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int base, height, area;

	//밑변, 높이 입력
	printf("밑변과 높이를 입력하세요: ");
	scanf("%d %d", &base, &height);

	//삼각형 넓이 계산
	area = (base * height) / 2;

	//결과 출력
	printf("밑변과 높이가 각각 %d 와 %d인 삼각형의 넓이는 %d이다.\n", base, height, area);
}