/*컴퓨터학과 202009997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//변수 선언
	int num1, num2, answer, o, result = 0;
	char op, ch;

	srand(time(NULL));

	do {
		result = 0; //result 초기화
		o = rand() % 4; //랜덤 연산자 숫자
		num1 = rand() % 100;
		num2 = rand() % 100;

		//랜덤 연산자 숫자에 따른 연산자와 계산 결과
		switch (o) {

		case 0: 
			op = '+';
			result = num1 + num2;
			break;

		case 1:
			op = '-';
			result = num1 - num2;
			break;

		case 2:
			op = '*';
			result = num1 * num2;
			break;

		case 3:
			op = '/';
			result = num1 / num2;
			break;
		}

		//답 입력
		printf("%d %c %d = ", num1, op, num2);
		scanf("%d", &answer);

		if (answer == result) //답과 결과가 같으면
			printf("Your answer is right.\n");

		else { //답과 결과가 다르면
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		while (getchar() != '\n'); //버퍼비우기

		//계속할지 묻기
		printf("Do you want to play again?(y/n): ");
		scanf("%c", &ch);

	} while (ch == 'y'); //y면 반복문 다시 시작

	return 0;
}