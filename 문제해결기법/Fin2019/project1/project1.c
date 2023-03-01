#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<stdlib.h>
long long H(int n, long long* M)
{
	int i;
	long long sum = 0;

	if (n == 1)
		return 1;

	else
	{
		for (i = 1; i < n; i++)
		{
			if (M[n - i] == 0)
				M[n - i] = H(n - i, M);
			sum += i * M[n - i];
		}
		return sum;
	}
}
int main(void)
{
	int n, i;
	long long* h;

	scanf("%d", &n);

	h = (long long*)malloc(sizeof(long long) * (n));

	for (i = 0; i < n; i++)
		h[i] = 0;

	printf("%lld\n", H(n, h));

	free(h);
}