/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char word[81];
	int total = 0;

	//���ڿ� �Է�
	printf("Enter one word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {

		//���ڿ��� ���ڶ��
		if (word[i] >= 48 && word[i] <= 58)
			total += word[i] - 48; //���հ��
	}

	//��� ���
	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", total);

	return 0;
}