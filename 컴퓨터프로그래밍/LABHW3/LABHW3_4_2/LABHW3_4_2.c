/*LABHW3_4_2 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSet(int list[], int s)
{
	printf("{ ");

	for (int i = 0; i < s + 1; i++)
	{
		if (i == s)
			printf("%d ", list[i]);

		else
			printf("%d, ", list[i]);
	}

	printf("}\n");
}
int checkSet(int list[], int s, int n)
{
	for (int i = 0; i < s + 1; i++)
	{
		//���տ� �Է��� ���Ұ� �̹� �ִٸ�
		if (list[i] == n)
			return 1; 
	}

	return 0;
}
int main(void)
{
	int num; //����
	int set[5] = { 0 }; //����
	int size = 0; //���� ũ��

	//������ 5���� ä���� ������ �ݺ�
	while (size < 5) 
	{
		//�߰��� ���� �Է�
		printf("���տ� �߰��� ����: ");
		scanf("%d", &num);

		//���Ұ� ���տ� �̹� �ִٸ�
		if (checkSet(set, size, num) == 1) 
		{
			printf("%d�� �̹� ���տ� ����\n", num);
			continue; //���� �Է����� ���ư�
		}

		//���Ұ� ���տ� ���ٸ�
		else
		{
			set[size] = num; //�߰�
			printSet(set, size); //���� ���
			size++; //���� ũ�� ����
		}

	}

	return 0;
}