#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n, r, count = 0;

	scanf("%d", &n);

	r = n;
	while (1)
	{
		n = n / 10;
		count++;
		if (n == 0)
			break;
	}

	printf("%d", count);
}