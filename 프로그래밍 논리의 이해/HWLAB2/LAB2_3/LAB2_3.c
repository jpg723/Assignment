/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
int main(void) {

	// 세 개의 변수 totalMinute, hour, minute 를 선언하고 totalMinute 에 값 130 을 배정하라.
	int totalMinute = 130;
	int hour, minute;

	// hour 를 계산한다. 이때 totalMinute 를 이용한다.
	hour = totalMinute / 60;
	// minute 를 계산한다. 이때 totalMinute 를 이용한다.
	minute = totalMinute % 60;
	// 출력한다. 이때 totalMinute, hour, minute 를 이용한다. 
	printf("%d분:\n", totalMinute);
	printf("%dh %dm\n", hour, minute);

	return 0;8
}