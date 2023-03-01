/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int score, num, i = 0, total = 0;

	//학생 수 입력
	printf("Enter a student number: ");
	scanf("%d", &num);

	/*
	while (i < 5) {

		printf("Enter a score:");
		scanf("%d", &score);

		total += score;
		i++;
	}
	*/

	while (i < num) { //학생 수만큼 반복

		printf("Enter a score:"); //점수 입력
		scanf("%d", &score);

		total += score; //총합
		i++;
	}

	//결과출력
	printf("The total is %d\n", total);

	return 0;
}