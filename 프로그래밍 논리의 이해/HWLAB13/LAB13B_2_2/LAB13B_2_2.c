/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char word[81], newWord[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	int newWord_index = 0;
	for (i = 0; word[i] != '\0'; i++) {

		if (word[i] >= 'A' && word[i] <= 'Z') {//�빮�ڶ��
			newWord[newWord_index] = word[i]; //newWord�� ���
			newWord_index++;
		}
	}

	newWord[newWord_index] = '\0'; //�������� ���� �ֱ�

	printf("%s\n", newWord); //��� ���

	return 0;
}