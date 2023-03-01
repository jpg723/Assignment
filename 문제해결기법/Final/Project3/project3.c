#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, i = 0, j = 0, r = 0, remain = 0, size = 0, s = 0, count = 0;
	int num[100000];

	scanf("%d", &n);

	while (1)
	{
		size = 0;
		i++;
		r = i;

		while (1)
		{
			remain = r % 10;
			r = r / 10;
			size++;

			printf("%d %d %d\n", i, remain, r);
			if (r == 0) {

				if (size == 1) {
					num[j] = remain;
					j++;
					break;
				}
				else {
					num[j] = size - 1;
					j++;
					num[j] = remain;
					j++;
					break;
				}
			}
		}
		if (i == n)
			break;

	}

	for (i = 0; i < j; i++) {
		//printf("%d\n", num[i]);
	}
	return 0;
}