/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char word[81];
	int len = 0, i, total = 0, x = 1;

	//���ڿ� �Է�
	printf("Enter a word: ");
	scanf("%s", word);

	//���ڿ� ����
	for (i = 0; word[i] != '\0'; i++);
	len = i;

	//���ڿ� �������� ����
	for (i = len - 1; i >= 0; i--) {

		//������ ���
		if (word[i] >= '0' && word[i] <= '9') { //���ڶ��
			
			total += x * (word[i] - 48); //���� ���
			x *= 10; //10�� �ڸ� ����
		}

		//���ڰ� �ƴ� ��� �ٽ� 1�� �ڸ��� �ʱ�ȭ
		else {
			x = 1;
		}
	
	}

	printf("���� ���� ���� ���� %d\n", total);

	return 0;
}