/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int score, num, i = 0, total = 0;

	//�л� �� �Է�
	printf("Enter a student number: ");
	scanf("%d", &num);

	/*
	while (i < 5) {

		printf("Enter a score:");
		scanf("%d", &score);

		total += score;
		i++;
	}
	*/

	while (i < num) { //�л� ����ŭ �ݺ�

		printf("Enter a score:"); //���� �Է�
		scanf("%d", &score);

		total += score; //����
		i++;
	}

	//������
	printf("The total is %d\n", total);

	return 0;
}