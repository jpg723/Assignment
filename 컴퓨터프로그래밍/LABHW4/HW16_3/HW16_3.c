/*HW16_3 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	//���� ����
	int arr[5][4] = { {10, 15, 20}, {30, 35, 20}, {60, 65, 20}, {90, 95, 20} };
	int col_total = 0, row_total = 0;

	//�迭 ���
	printf("a>\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	printf("b>\n");

	//���� ����
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			col_total += arr[i][j];

		arr[i][3] = col_total;
		col_total = 0;
	}

	//���� ����
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			row_total += arr[j][i];
			arr[4][i] = row_total;
		}
		row_total = 0;
	}

	//��� ���
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	return 0;
}