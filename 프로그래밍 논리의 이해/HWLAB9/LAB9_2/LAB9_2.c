/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//���� ����
	int num1, num2, answer, result = 0;
	char ch;

	srand(time(NULL)); //���� ������ ����

	do {

		num1 = rand() % 100; //���� ����
		num2 = rand() % 100;
		result = 0; //result �ʱ�ȭ
		result = num1 + num2; //���ϱ� ���

		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer); //�� �Է�

		while (getchar() != '\n'); //���ۺ���

		if (result == answer) //��� ����� ��ġ�� ���
			printf("Your answer is right.\n");

		else { //��ġ���� ���� ���
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		printf("Do you want to play again?(y/n): ");
		scanf("%c", &ch);

	} while (ch == 'y'); //y�� �ݺ��� �ٽ� ����

	return 0;
}