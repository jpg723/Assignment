/*��ǻ���а� 202009997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//���� ����
	int num1, num2, answer, o, result = 0;
	char op, ch;

	srand(time(NULL));

	do {
		result = 0; //result �ʱ�ȭ
		o = rand() % 4; //���� ������ ����
		num1 = rand() % 100;
		num2 = rand() % 100;

		//���� ������ ���ڿ� ���� �����ڿ� ��� ���
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

		//�� �Է�
		printf("%d %c %d = ", num1, op, num2);
		scanf("%d", &answer);

		if (answer == result) //��� ����� ������
			printf("Your answer is right.\n");

		else { //��� ����� �ٸ���
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		while (getchar() != '\n'); //���ۺ���

		//������� ����
		printf("Do you want to play again?(y/n): ");
		scanf("%c", &ch);

	} while (ch == 'y'); //y�� �ݺ��� �ٽ� ����

	return 0;
}