/*컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num[5];
	int total = 0;
	double average;

	//숫자 입력
	for (int i = 0; i < 5; i++) {
		
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);
	}

	//총합 계산
	for (int i = 0; i < 5; i++)
		total += num[i];

	//평균 계산
	average = total / 5;

	//총합, 평균 출력
	printf("-------------------------------------\n");
	printf("총합은 %d\n", total);
	printf("평균은 %lf\n", average);
	printf("-------------------------------------\n");

	//배열의 내용 출력
	for (int i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}