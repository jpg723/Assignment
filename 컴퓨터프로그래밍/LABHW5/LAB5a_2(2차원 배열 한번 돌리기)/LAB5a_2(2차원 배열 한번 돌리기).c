/***********
LAB5a_2 20200997 �̹��� ��ǻ���а� 3�г�
************/
#include <stdio.h>
void initable(int table[][4])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", table[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", table[3 - j][i]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", table[3 - i][3 - j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", table[j][3 - i]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", table[i][j]);
		printf("\n");
	}
	printf("\n");
}