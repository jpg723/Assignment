#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {

	int num;
	int* arr;

	printf("Enter a number: ");
	scanf("%d", &num);

	arr = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));

	for (int i = 0; i < num; i++) {

		arr = rand() % 1000;
		printf("%d ", arr);
	}
	printf("\n");

	free(arr);
	return 0;
}