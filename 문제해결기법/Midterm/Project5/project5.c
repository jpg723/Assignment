#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void isSequence(int* a, int size)
{
	int check = 1;
	int an = 0, d = 0, i = 0;
	d = a[1] - a[i];

	for (i = 1; i <= size; i++) {

		an = a[0] + (i - 1) * d;

		if (an != a[i - 1]) {
			check = 0;
			break;
		}

	}
	

	if (check == 0)
		printf("0");
	else
		printf("1");
}

int main(void)
{
	int n;
	int* a;

	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	isSequence(a, n);
	free(a);
	return 0;
}