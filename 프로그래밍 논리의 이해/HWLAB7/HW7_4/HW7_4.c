/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, score, total = 0, i = 0;
	double average;

	//학생 수 입력
	printf("Enter a student number: ");
	scanf("%d", &num);

	//학생 수만큼 점수 입력하고 전체 합 구하기
	while (i < num) {

		printf("Enter a score: ");
		scanf("%d", &score);

		total += score;
		i++;
	}

	//평균 계산

	if (num == 0)
		average = 0;

	else
		average = (double)total / num;


	//결과 출력
	printf("The total is %d\n", total);
	printf("The average is %.1lf\n", average);

	return 0;
}