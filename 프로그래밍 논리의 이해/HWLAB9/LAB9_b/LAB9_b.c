/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	//���� ����
	int first, second, answer, result = 0;

	srand(time(NULL)); //���� ���� ������

	//���� ����
	first = rand() % 100;
	second = rand() % 100;

	printf("%d + %d = ", first, second);
	scanf("%d", &answer);

	//�� �Ǻ�
	result = first + second;
	if (result == answer)
		printf("Your answer is right.\n");

	else {
		printf("Your answer is wrong.\n");
		printf("%d is the right answer.\n", result);
	}

	return 0;
}