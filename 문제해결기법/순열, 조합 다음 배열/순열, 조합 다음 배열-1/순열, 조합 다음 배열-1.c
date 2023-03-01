#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, num[1000], same[1000], last, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	last = 0;

	for (i = n - 1; i >= 0; i--)
	{
		same[num[i]] = 1;
		if (last > num[i])
		{
			for (j = num[i] + 1; j <= n; j++)
			{
				if (same[j] == 1)
				{
					same[j] = 0;
					num[i++] = j;
					break;
				}
			}
			for (j = 1; j <= n; j++)
			{
				if (same[j] == 1)
				{
					num[i++] = j;
				}
			}
			break;
		}
		last = num[i];
	}

	if (i == -1)
	{
		printf("-1\n");
		return 0;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}