/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, count = 0;

	//num입력
	scanf("%d", &num);

	while (num != 0) { //num이 0일때까지 반복

		num /= 10; //10으로 계속 나누기
		count++; //자리수 증가
	}

	//결과 출력
	printf("%d\n", count);

	return 0;
}