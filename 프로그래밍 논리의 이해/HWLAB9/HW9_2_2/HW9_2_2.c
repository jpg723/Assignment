/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int score = 0, student = 0, total = 0, best = 0;
	double average;

	while (1) { //무한 반복

		//점수 입력
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);

		if (score == -1) //-1이 입력되면 종료
			break;

		total += score; //점수 총합 계산
		student++; //학생수 계산

		//점수 최대값 계산
		if (best < score)
			best = score;
	}

	average = (double)total / student; //평균 계산

	//결과 출력
	printf("You've entered %d students.\n", student);

	if (student == 0)
		printf("There is no data.\n");

	else {
		printf("The total is %d.\n", total);
		printf("The average is %.1lf.\n", average);
		printf("The best score is %d.\n", best);
	}

	return 0;
}