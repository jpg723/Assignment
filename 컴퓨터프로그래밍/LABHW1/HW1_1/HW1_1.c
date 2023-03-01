/*HW1_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//변수 선언
	int num;
	int count[10];
	int data[100];

	//출력할 난수 개수 입력
	printf("Enter the number of random numbers:<<=100>: ");
	scanf("%d", &num);

	//난수 생성
	srand(time(NULL));

	for(int i = 0; i < num; i++) 
		data[i] = rand() % 10;

	//count배열 초기화
	for (int i = 0; i < 10; i++)
		count[i] = 0;
	
	//count배열에 개수 저장
	for (int i = 0; i < num; i++) {

		for (int j = 0; j < 10; j++) {

			if (data[i] == j)
				count[j]++;
		}
	}

	//개수 출력
	for (int i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	//난수 출력
	printf("-------------------------------------------\n");
	printf("발생된 난수는");

	for (int i = 0; i < num; i++) {

		if (i % 5 == 0)
			printf("\n");

		printf("%5d", data[i]);
	}

	printf("\n");

	return 0;
}