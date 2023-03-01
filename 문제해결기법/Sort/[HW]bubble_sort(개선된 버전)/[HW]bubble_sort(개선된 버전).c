#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void bubble_sort(int* arr, int n) {

	int i, j, k, temp, check = 0;

	for (i = 0; i < n - 1; i++) {

		for (j = 0; j < n - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;

				check = 1;
			}
		}

		if (check == 0)
			break;

		printf("i = %d: ", i);

		for (k = 0; k < n; k++) {
			printf("%d ", arr[k]);
		}

		printf("\n");
		check = 0;
	}
}

int main(void) {

	int n;
	int* arr;

	printf("Enter a number: ");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	//srand(time(NULL));

	printf("초기:  ");

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	bubble_sort(arr, n);

	printf("정렬:  ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);

}