#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int right_max_sum(int A[], int left, int right)
{
	int i = 0;
	int sum = 0;

	if (left == right)
		return A[left];

	for (i = left; i <= right; i++)
	{
		sum += A[i];
	}
	right = right_max_sum(A, left, right - 1);

	if (right > sum)
		return right;
	else
		return sum;
}
int left_max_sum(int A[], int left, int right)
{
	int i = 0;
	int sum = 0;

	if (left == right)
		return A[right];

	for (i = right; i >= left; i--)
	{
		sum += A[i];
	}
	left = left_max_sum(A, left + 1, right);

	if (left > sum)
		return left;
	else
		return sum;

}
int max_subarray(int* A, int left, int right) 
{ 
	if (left == right)
		return A[left];
	else
	{
		int middle = (left + right) / 2;
		int v1 = max_subarray(A, left, middle);
		int v2 = max_subarray(A, middle + 1, right);
		int v3 = right_max_sum(A, middle + 1, right) + left_max_sum(A, left, middle);

		if (v1 > v2 && v1 > v3)
			return v1;
		else if (v2 > v1 && v2 > v3)
			return v2;
		else
			return v3;
	}
}
int main() 
{
	//int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 }; // tc #1: max는 6
	//int A[] = {2, -1, 5, -2, 2, -3, 1}; // tc #2: max는 6
	//int A[] = {3, -1, 1, 2, 3, 1, -1, 5}; // tc #3: max는 13
	//int A[] = {1, 2, 3}; // tc #4: max는 6
	//int A[] = {-1, -2, -3, -4}; //tc #5: max는 -1
	//int A[] = {5}; // tc #6: max는 5

	int array_size;

	scanf("%d", &array_size);

	int* A = (int*)malloc(sizeof(int) * array_size);

	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &A[i]);
	}

	int lastIndex = array_size;
	int max = max_subarray(A, 0, lastIndex);
	printf("%d\n", max);
}