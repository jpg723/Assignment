/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int totalMinutes, hour, minutes;

	//입력
	printf("Enter the total minutes: ");
	scanf("%d", &totalMinutes);
	
	//계산
	hour = totalMinutes / 60;
	minutes = totalMinutes % 60;

	//결과 출력
	printf("%d minutes\n", totalMinutes);
	printf("%dh %dm\n", hour, minutes);

	return 0;
}