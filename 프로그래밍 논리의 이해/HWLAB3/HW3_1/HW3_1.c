/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int score1, score2, average;

	//score1, score2 입력
	printf("Enter two scores: ");
	scanf("%d %d", &score1, &score2);

	//average 계산
	average = (score1 + score2) / 2;

	//결과 출력
	printf("The average is %d.\n", average);

	return 0;
}