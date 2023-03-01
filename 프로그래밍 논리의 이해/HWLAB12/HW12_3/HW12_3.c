/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int incomes[7];
	int best = -999, bestIndex = 0, total = 0;
	double average = 0;

	//수입을 읽기 위한 for문
	for (int i = 0; i < 7; i++) {

		printf("Enter the income of day %d: ", i + 1);
		scanf("%d", &incomes[i]);
	}

	printf("-------------------------------------\n");

	//최고 수입 계산을 위한 for문
	for (int i = 0; i < 7; i++) {

		if (best < incomes[i]) {
			best = incomes[i];
			bestIndex = i + 1;
		}
	}

	//최고 수입 출력
	printf("The best income: %d in day %d\n", best, bestIndex);
	printf("-------------------------------------\n");

	//총점 계산을 위한 for문
	for (int i = 0; i < 7; i++)
		total += incomes[i];

	//평균 계산
	average = (double)total / 7;

	//총점, 평균 계산
	printf("The total is %d\n", total);
	printf("The average is %.1lf\n", average);

	//평균보다 수입이 높았떤 달을 출력하기 위한 for문
	printf("The good days and theeir incomes are\n");
	for (int i = 0; i < 7; i++) {
		if (incomes[i] > average)
			printf("day %d: %d\n", i + 1, incomes[i]);
	}

	return 0;
}