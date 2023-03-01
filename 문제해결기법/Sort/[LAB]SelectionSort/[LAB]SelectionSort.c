#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection_sort(int* arr, int n) {

	int i, j;

	for (i = 0; i < n - 1; i++) {
		int max_idx = 0;
		int temp;

		for (j = 0; j < n - i; j++) {
			if (arr[max_idx] < arr[j]) {
				max_idx = j;
			}
		}

		temp = arr[max_idx];
		arr[max_idx] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
int main(void) {

	int num, i;
	int* arr;

	printf("Enter a number: ");
	scanf("%d", &num);

	arr = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));

	for (i = 0; i < num; i++) {
		arr[i] = rand() % 1000;
		printf("%d ", arr[i]);
	}

	printf("\n정렬된 후:\n");

	selection_sort(arr, num);

	for (i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	free(arr);
}