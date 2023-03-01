#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void isSequence(int* a, int size)
{
	int d = 0, i = 0, count1 = 0, count2 = 0, count3 = 0, check = 0;
	int* an1 = (int*)malloc(sizeof(int) * size);
	int* an2 = (int*)malloc(sizeof(int) * size);
	int* an3 = (int*)malloc(sizeof(int) * size);
	d = a[1] - a[i];

	for (i = 0; i < size; i++) {

		an1[i] = a[0] + i * d;
		an2[i] = a[0] - 1 + i * d;
		an3[i] = a[0] + 1 + i * d;
	}

	for (i = 0; i < size; i++) {

		//printf("%d\n", a[i] - an1[i]);
		if (-1 == a[i] - an1[i] || a[i] - an1[i] == 1)
			count1++;

		else if (a[i] - an1[i] == 0)
			continue;

		else {
			count1 = -1;
			break;
		}
	}

	check = 0;

	for (i = 0; i < size; i++) {

		if (-1 == a[i] - an2[i] || a[i] - an2[i] == 1)
			count2++;

		else if (a[i] - an2[i] == 0)
			continue;

		else {
			count2 = -1;
			break;
		}
	}


	check = 0;

	for (i = 0; i < size; i++) {

		if (-1 == a[i] - an3[i] || a[i] - an3[i] == 1)
			count3++;

		else if (a[i] - an3[i] == 0)
			continue;

		else {
			count3 = -1;
			break;
		}
	}

	int c[3];
	c[0] = count1;
	c[1] = count2;
	c[2] = count3;
	int min = 10000;

	for (i = 0; i < 3; i++) {

		if (c[i] >= 1) {
			if (min > c[i])
				min = c[i];
		}
	}

	printf("%d", min);
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