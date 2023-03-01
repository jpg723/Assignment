#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int calculateReverse(int n)
{
	int num = 0;

	do
	{
		num = (num * 10) + (n % 10);
		n = n / 10;

	} while (n != 0);

	return num;
}
int main(void)
{
	int num, n1, n2, count = 0;

	scanf("%d", &num);

	n1 = num;
	n2 = calculateReverse(n1);

	while (n1 != n2) {
		count++;
		n1 = n2 + n1;
		n2 = calculateReverse(n1);

		if (count > 1000) {
			printf("NaN\n");
			return 0;
		}
	}

	printf("%d %d\n", count, n1);
	return 0;
}