/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char operator;
	int num1, num2, result = 0, answer;

	//변수 입력
	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	switch (operator) {

	case '+':
		printf("%d + %d = ", num1, num2);
		result = num1 + num2;
		break;

	case '-':
		printf("%d - %d = ", num1, num2);
		result = num1 - num2;
		break;

	case '*':
		printf("%d * %d = ", num1, num2);
		result = num1 * num2;
		break;

	case '/':
		printf("%d / %d = ", num1, num2);
		result = num1 / num2;
		break;
	}

	scanf("%d", &answer);

	if (answer == result)
		printf("Right answer\n");

	else
		printf("Wrong!\n%d is the right answer\n", result);

	return 0;
}