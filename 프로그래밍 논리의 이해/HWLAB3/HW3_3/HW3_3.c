/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int hour, minute, seconds, totalSeconds;

	//시, 분, 초 입력
	printf("Enter h m s: ");
	scanf("%d %d %d", &hour, &minute, &seconds);

	//총초 계산
	totalSeconds = (hour * 3600) + (minute * 60) + seconds;
	
	//결과 출력
	printf("---CalculationResult---\n");
	printf("Total %d seconds\n", totalSeconds);

	return 0;
}