/*LAB16_4 컴퓨터학과 3학년 2020997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0, max = -999, maxTotal = 0;
	double average;

	printf("배열 test의 엘리먼트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%4d", test[i][j]);
	}

	for (i = 0; i < 4; i++)
		test[i][2] = -1;

	printf("\n\n다>\n");
	printf("배열 test의 엘리먼트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);

		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
			total += test[i][j];
		}
	}

	average = (double)total / 12;

	printf("\n\n라>\n");
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", average);

	printf("\n\n마");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row에서의 최대값: ", i + 1);

		for (j = 0; j < 3; j++)
		{
			if (max < test[i][j])
				max = test[i][j];
		}

		printf("%d", max);
		maxTotal += max;
		max = -999;
	}

	printf("\n최대값의 합: %d\n", maxTotal);

	return 0;
}