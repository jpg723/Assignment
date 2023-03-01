/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int num, total = 0, average = 0;
	int randNum[100];

	//출력할 랜덤 수 개수 입력
	printf("Enter the number of random numbers: <<=100>: ");
	scanf("%d", &num);

	srand(time(NULL));

	for (int i = 0; i < num; i++) {

		randNum[i] = rand() % 100; //배열에 랜덤수 넣기

		total += randNum[i]; //총합 계산
	}

	average = total / num; //평균 계산

	printf("난수의 평균은 %d\n", average); //평균 출력
	
									 //난수 출력
	printf("발생된 난수는");

	for (int i = 0; i < num; i++) {

		if (i % 5 == 0) //5개씩 출력
			printf("\n");

		printf("%5d", randNum[i]);
	}

	printf("\n");
	return 0;
}