/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {

	//���� ���� �� �ʱ�ȭ
	int score = 0, total = 0;

	while (1) {

		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score); //���� �Է�

		if (score == -1) //input�� ���ð��̸�
			break;

		total += score; //���� ���
	}

	printf("The total is %d.\n", total);

	return 0;
}