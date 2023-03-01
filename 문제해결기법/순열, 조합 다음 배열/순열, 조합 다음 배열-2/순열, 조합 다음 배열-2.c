#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void pick(int n, int m, int picked[], int toPick, int num[]) {

	int smallest, lastIndex, i, j = 0, count = 0;

	if (toPick == 0) {

		for (i = 0; i < m; i++) {
			printf("%d ", picked[i]);
		}
		printf("\n");
		return;
	}

	lastIndex = m - toPick - 1;

	if (m == toPick)
		smallest = 1;

	else
		smallest = picked[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		picked[lastIndex + 1] = i;
		pick(n, m, picked, toPick - 1, num);
	}
}
int main(void) {

	int* picked;
	int num1, num2;	

	scanf("%d %d", &num1, &num2);

	int* num = (int*)malloc(sizeof(int) * num2);

	for (int i = 0; i < num2; i++)
		scanf("%d", &num[i]);

	picked = (int*)malloc(sizeof(int) * num2);

	pick(num1, num2, picked, num2, num);

	free(picked);
}