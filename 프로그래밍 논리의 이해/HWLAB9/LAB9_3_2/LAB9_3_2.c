/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {

	//변수 선언 및 초기화
	int score = 0, total = 0;

	while (1) {

		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score); //점수 입력

		if (score == -1) //input이 감시값이면
			break;

		total += score; //총점 계산
	}

	printf("The total is %d.\n", total);

	return 0;
}