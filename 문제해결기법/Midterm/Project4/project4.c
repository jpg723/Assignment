#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void testPrint(int* a, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void selectionSortNew(int A[], int left, int n)
{
	// 코드 작성
	int i, j;

	for (i = 0; i < n - 1; i++) {
		int max_idx = 0;
		int temp;

		for (j = 0; j < n - i; j++) {
			if (A[max_idx] < A[j]) {
				max_idx = j;
			}
		}

		temp = A[max_idx];
		A[max_idx] = A[n - i - 1];
		A[n - i - 1] = temp;
	}
}
int main(void)
{
	int n;
	int a[100] = { 0 };
	int start;
	int* newArr;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &start);

	for (int i = 0; i < start; i++) {
		printf("%d ", a[i]);
	}

	newArr = (int*)malloc(sizeof(int) * (n - start));

	for (int i = 0; i < n - start; i++) {
		newArr[i] = a[start + i];
	}

	for (int i = 0; i < n - start; i++) {
		a[i] = newArr[i];
	}

	n = n - start;
	selectionSortNew(a, start, n);

	testPrint(a, n);

	return 0;
}