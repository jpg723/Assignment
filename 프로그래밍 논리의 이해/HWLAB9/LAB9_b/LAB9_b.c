/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//변수 선언
	int first, second, answer, result = 0;

	srand(time(NULL)); //난수 생성 시작점

	//난수 생성
	first = rand() % 100;
	second = rand() % 100;

	printf("%d + %d = ", first, second);
	scanf("%d", &answer);

	//답 판별
	result = first + second;
	if (result == answer)
		printf("Your answer is right.\n");

	else {
		printf("Your answer is wrong.\n");
		printf("%d is the right answer.\n", result);
	}

	return 0;
}