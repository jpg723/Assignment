/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {

	//���� ���� �� �ʱ�ȭ
	int score = 0, total = 1;

	while (score != -1) { //input�� ���ð��� �ƴѵ���

		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score); //���� �Է�

		total += score; //���� ���
	}

	printf("The total is %d.\n", total);

	return 0;
}