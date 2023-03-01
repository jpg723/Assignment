/*LAB1_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//변수 선언
	int num, max = 0;
	int data[50];

	//출력할 난수의 개수 입력
	printf("Enter the number of random numbers: <<=50>: ");
	scanf("%d", &num);

	//난수 생성
	srand(time(NULL));

	for (int i = 0; i < num; i++)
		data[i] = rand() % 100;

	//최대값 구하기
	for (int i = 0; i < num; i++) {

		if (max < data[i])
			max = data[i];
	}
	
	//최대값 출력
	printf("최대값은 %d\n", max);
	printf("-----------------------------------------");

	//난수 출력
	for (int i = 0; i < num; i++) {

		if (i % 5 == 0) //한 줄에 5개씩 출력
			printf("\n");

		printf("%5d", data[i]);
	}
	
	printf("\n");
	return 0;
}