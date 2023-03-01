/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int totalMinutes, hour, minute;

	//입력
	printf("Enter hour: ");
	scanf("%d", &hour);
	printf("Enter minute: ");
	scanf("%d", &minute);

	//계산
	totalMinutes = hour * 60 + minute;

	//결과 출력
	printf("Total %d minutes\n",totalMinutes);

	return 0;
}