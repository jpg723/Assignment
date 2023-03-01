#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int A[], int a, int b)
{
	int temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}
int partition(int A[], int p, int r)
{
	int i, j;
	i = p - 1; j = p;

	while (j != r) {
		if (A[j] < A[r])
			swap(A, ++i, j);
		j++;
	}
	swap(A, i + 1, r);
	return i + 1;
}

int selection(int list[], int left, int right, int order)
{
	if (left <= right)
	{
		int p;

		p = partition(list, left, right);

		if (p + 1 == order) 
			return list[p];
		else if (p + 1 < order) 
			return selection(list, p + 1, right, order);
		else 
			return selection(list, left, p - 1, order);
	}
}
int main(void)
{
	int n, i;
	int* num;
	int min_order;
	int result;

	printf("Enter the number of numbers: ");
	scanf("%d", &n);
	printf("몇번째로 작은 수: ");
	scanf("%d", &min_order);

	num = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}

	result = selection(num, 0, n - 1, min_order);

	printf("\n%d번째 작은 수는 %d\n", min_order, result);

	free(num);
}