/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	
	//변수 선언
	char operator;
	int num1, num2;

	//변수 입력
	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	//연산자별 결과 출력
	switch (operator) {

	case '+':
		printf("%d + %d = %d\n", num1, num2, (num1 + num2));
		break;

	case '-':
		printf("%d - %d = %d\n", num1, num2, (num1 - num2));
		break;

	case '*':
		printf("%d * %d = %d\n", num1, num2, (num1 * num2));
		break;

	case '/':
		printf("%d / %d = %d\n", num1, num2, (num1 / num2));
		break;
	}

	return 0;
}