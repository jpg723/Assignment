#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble_sort(int* arr, int n) {

	int i, j;

	for (i = 0; i < n - 1; i++) {
		int temp;

		for (j = 0; j < n - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(void) {

	int num;
	int* arr;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	arr = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));

	for (int i = 0; i < num; i++) {
		arr[i] = rand() % 1000;
		printf("%d ", arr[i]);
	}
	printf("\n정렬된 후:\n");

	bubble_sort(arr, num);

	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
}