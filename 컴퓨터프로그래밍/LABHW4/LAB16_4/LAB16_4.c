/*LAB16_4 ��ǻ���а� 3�г� 2020997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0, max = -999, maxTotal = 0;
	double average;

	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%4d", test[i][j]);
	}

	for (i = 0; i < 4; i++)
		test[i][2] = -1;

	printf("\n\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);

		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
			total += test[i][j];
		}
	}

	average = (double)total / 12;

	printf("\n\n��>\n");
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", average);

	printf("\n\n��");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row������ �ִ밪: ", i + 1);

		for (j = 0; j < 3; j++)
		{
			if (max < test[i][j])
				max = test[i][j];
		}

		printf("%d", max);
		maxTotal += max;
		max = -999;
	}

	printf("\n�ִ밪�� ��: %d\n", maxTotal);

	return 0;
}