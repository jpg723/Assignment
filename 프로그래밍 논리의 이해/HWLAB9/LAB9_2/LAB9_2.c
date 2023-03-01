/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//변수 선언
	int num1, num2, answer, result = 0;
	char ch;

	srand(time(NULL)); //난수 시작점 생성

	do {

		num1 = rand() % 100; //난수 지정
		num2 = rand() % 100;
		result = 0; //result 초기화
		result = num1 + num2; //더하기 결과

		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer); //답 입력

		while (getchar() != '\n'); //버퍼비우기

		if (result == answer) //답과 결과가 일치할 경우
			printf("Your answer is right.\n");

		else { //일치하지 않을 경우
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		printf("Do you want to play again?(y/n): ");
		scanf("%c", &ch);

	} while (ch == 'y'); //y면 반복문 다시 시작

	return 0;
}