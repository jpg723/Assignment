/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char word[81];
	char newWord[81];
	int newIndex = 0;

	//���ڿ� �Է�
	printf("Enter one word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {

		//�빮�ڸ� �ҹ��ڷ� �ٲٱ�
		if (word[i] >= 'A' && word[i] <= 'Z') 
			newWord[newIndex] = word[i] + 32;

		//�ҹ��ڸ� �빮�ڷ� �ٲٱ�
		else if (word[i] >= 'a' && word[i] <= 'z') 
			newWord[newIndex] = word[i] - 32;

		//�� �̿��� ���ڴ� �״�� �ֱ�
		else
			newWord[newIndex] = word[i];
		
		//newWord �ε��� ����
		newIndex++;
	}

	//�� �������� ���� �ֱ�
	newWord[newIndex] = '\0';

	//������
	printf("word given: %s\n", word);
	printf("new word: %s\n", newWord);

	return 0;
}