#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int A, B = 0, C = 1, n = 0;
	int count = 0;

	scanf("%d", &A);

	do
	{
		C *= 10;
		C = C + 1;

		do
		{
			B += A;

		} while (B < C);

	} while (B != C);

	while (B != 0)
	{
		n = B % 10;

		if (n == 1)
		{
			count++;
		}
		B = B /= 10;
	}

	if (A == 1)
		printf("%d", A);
	else
		printf("%d\n", count);

	return 0;
}