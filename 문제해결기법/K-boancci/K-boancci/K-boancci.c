#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int kbonacci(int n, int k)
{
	int fibo = 0;
	int i;

	if (n <= k)
		return 1;
	else
	{
		for (i = k; i > 0; i--)
		{
			fibo += kbonacci(n - i, k);
		}
		return fibo;
	}
}
int main(void)
{
	int n, k;

	scanf("%d %d", &k, &n);

	printf("%d\n", kbonacci(n, k));
}