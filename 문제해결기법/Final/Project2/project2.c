#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, i = 0, r = 0, size = 0, count = 0;
	
	scanf("%d", &n);

	while (1)
	{
		size = 0;
		i++;
		r = i;

		while (1)
		{
			r = r / 10;
			size++;

			if (r == 0)
				break;
		}

		count += size;

		if (i == n)
			break;
	}

	printf("%d", count);

	return 0;
}