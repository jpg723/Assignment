/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
int main(void) {

	//변수 값 배정
	int totalSeconds = 14000;
	int hour = totalSeconds / 3600;
	int minute = totalSeconds % 3600 / 60;
	int seconds = totalSeconds % 3600 % 60;

	printf("%d seconds:\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, seconds);

	return 0;

}