/*HW16_1 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	//���� ����
	int gugudan[8][9];
	int num;

	//������ 2���� �迭 ����
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);
	}

	//������ 2���� �迭 ���
	printf("--������ ǥ�� ������ �����ϴ�.\n");

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
			printf("%4d", gugudan[i][j]);
		printf("\n");
	}	

	//���ϴ� ������ �Է�
	printf("--���ϴ� ��������? ");
	scanf("%d", &num);

	//���ϴ� ������ ���
	for (int i = 0; i < 9; i++)
		printf("%4d", gugudan[num - 2][i]);
	printf("\n");

	return 0;
}