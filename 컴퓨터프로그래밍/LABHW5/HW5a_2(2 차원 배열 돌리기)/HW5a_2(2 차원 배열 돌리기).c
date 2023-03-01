#include<stdio.h>
void array_rotate(int a[4][4])
{
	int b[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			b[i][j] = a[i][j];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			a[i][j] = 0;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			a[i][j] = b[j][3 - i];
	}
}

void array_print(int a[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}
int main(void)
{
	//���� ����
	int arr[4][4];
	int num = 1;

	//2ä�� �迭�� �� �ֱ�
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = num;
			num++;
		}
	}

	//�迭 ���
	array_print(arr);

	array_rotate(arr);
	array_print(arr);

	array_rotate(arr);
	array_print(arr);

	array_rotate(arr);
	array_print(arr);

	array_rotate(arr);
	array_print(arr);
}