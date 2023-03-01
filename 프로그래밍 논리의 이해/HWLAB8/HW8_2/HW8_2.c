/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int score = 0, best = -999, worst = 999, i = 0, num;

	printf("Enter the number of scores: ");
	scanf("%d", &num);

	//점수의 최대값 구하기
	for (i = 0; i < num; i++) {

		printf("Enter a score: ");
		scanf("%d", &score);

		if (best < score) //점수의 최대값
			best = score;

		if (worst > score) //점수의 최소값
			worst = score;
	}

	//결과 출력
	printf("The best score is %d\n", best);
	printf("The worst score is %d\n", worst);

	return 0;
}