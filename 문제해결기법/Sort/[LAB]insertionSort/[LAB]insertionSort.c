#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void insertion_sort(int* arr, int n) {

	int i, j, k, temp;

	for (i = 1; i < n; i++) {

		for (j = 0; j < i; j++) {

			if (arr[i] < arr[j])
				break;
		}

		temp = arr[i];

		for (k = i; k > j; k--) {
			arr[k] = arr[k - 1];
		}

		arr[j] = temp;
	}

}

int main(void) {

	int n, i;
	int* arr;

	printf("Enter a number: ");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		arr[i] = rand() % 1000;
		printf("%d ", arr[i]);
	}

	printf("\n정렬된 후:\n");

	insertion_sort(arr, n);

	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
}