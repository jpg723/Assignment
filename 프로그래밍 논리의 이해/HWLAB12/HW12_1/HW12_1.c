/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int score[20];
	int num;

	printf("Enter the number of scores<<=20>: ");
	scanf("%d", &num);
	//���� �Է�
	for (int i = 0; i < num; i++) {
		printf("Enter a score: ");
		scanf("%d", &score[i]);
	} 

	//������
	for (int i = 0; i < num; i++) {

		printf("Student  %d: ", i + 1);

		for (int j = 0; j < score[i]; j++) //������ŭ �� ���
			printf("*");

		printf("\n");
	}

	return 0;
}