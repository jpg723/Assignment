#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fib(int n, int* F)
{
	if (n <= 2)
		return 1;

	else {
		if (F[n - 1] == 0)
			F[n - 1] = fib(n - 1, F);

		if (F[n - 2] == 0)
			F[n - 2] = fib(n - 2, F);

		return F[n - 1] + F[n - 2];
	}
}
int main(void)
{
	int n, i;
	int* F;

	scanf("%d", &n);

	F = (int*)malloc(sizeof(int) * (n + 1));

	for (i = 1; i <= n; i++)
	{
		F[i] = 0;
	}

	for (i = n; i >= n - 1; i--)
		printf("%d ", fib(i, F));

	free(F);
}