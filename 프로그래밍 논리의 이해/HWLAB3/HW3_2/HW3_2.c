/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int totalSeconds, hour, minute, seconds;

	//총초 입력
	printf("Enter the total seconds: ");
	scanf("%d", &totalSeconds);

	//시, 분, 초 계산
	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, seconds);

	return 0;
}