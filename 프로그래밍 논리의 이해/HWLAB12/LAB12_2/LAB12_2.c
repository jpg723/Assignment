/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int num[10];
	int total = 0, average;
	
	srand(time(NULL));

	// 난수를 배열에 넣기 위한 for문, 배열의 합 구하기
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 100;
		total += num[i];
	}

	average = total / 10; //평균 계산
	printf("평균은 %d\n", average); //평균 출력

	// 배열 출력을 위한 for문
	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
	printf("\n");

	return 0;
}