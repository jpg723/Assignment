/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	
	//���� ����
	char operator;
	int num1, num2;

	//���� �Է�
	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	//�����ں� ��� ���
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