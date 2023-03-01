/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int score = 0, best = -999, i = 0;

	/*
	while(i < 5) {

		if (best < score)
			best = score;

		printf("Enter a score: ");
		scanf("%d", &score);

		i++;
	}
	*/

	//점수의 최대값 구하기
	for (i = 0; i < 5; i++) {

		printf("Enter a score: ");
		scanf("%d", &score);

		if (best < score)
			best = score;
	}

	//결과 출력
	printf("The best score is %d\n", best);
	
	return 0;
}