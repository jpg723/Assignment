/*challenge6a ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	//���� ����
	char first_word[81];
	char second_word[81];
	int check = 0, length, length1 = 0, length2 = 0;

	//�ܾ� �Է�
	printf("Enter the first word: ");
	scanf("%s", first_word);
	printf("Enter the second word: ");
	scanf("%s", second_word);

	//ù ��° �ܾ� ����
	for (int i = 0; first_word[i] != '\0'; i++)
		length1++;

	//�� ��° �ܾ� ����
	for (int i = 0; second_word[i] != '\0'; i++)
		length2++;

	//�ܾ��� ���̰� �ٸ� ���
	if(length1 != length2)
		printf("�� �ܾ�� �ٸ���\n");

	//�ܾ��� ���̰� ���� ���
	else
	{
		//�� �ܾ� �� ���̰� �� �ܾ��� ���� ���ϱ�
		if (length1 > length2)
			length = length1;

		else
			length = length2;

		//�ܾ� �Ǻ�
		for (int i = 0; i < length; i++)
		{
			//�ٸ� ���
			if (first_word[i] != second_word[i])
			{
				check = 1;
				break;
			}
		}

		//��� ���
		if (check == 1)
			printf("�� �ܾ�� �ٸ���\n");

		else
			printf("�� �ܾ�� ����\n");
	}

	return 0;
}