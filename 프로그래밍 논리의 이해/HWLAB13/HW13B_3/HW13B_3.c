/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char word[81], newWord[81];
	int index = 0, len = 0, i;

	//���ڿ� �Է�
	printf("Enter one word: ");
	scanf("%s", word);

	//���ڿ� ���� ���ϱ�
	for (i = 0; word[i] != '\0'; i++);
	len = i;

	//���ڿ� ���� �迭 �����
	for (i = len - 1; i >= 0; i--) {

		newWord[index] = word[i];
		index++;
	}

	//���� ����
	newWord[index] = '\0';

	//��� ���
	printf("The reversed word is %s\n", newWord);
}