#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int search_binary_loop(int list[], int key, int low, int high) {

	int middle;

	while (low <= high) {

		middle = (low + high) / 2;

		if (key == list[middle])
			return middle;

		else if (key > list[middle])
			low = middle + 1;

		else
			high = middle - 1;
	}

	return -1;
}

int main(void) {

	int list[] = { 2, 3, 5, 7, 8, 9 };
	int key, i;

	printf("list: ");

	for (i = 0; i < sizeof(list) / sizeof(int); i++) {

		printf("%d ", list[i]);
	}

	printf("\nkey: ");
	scanf("%d", &key);

	printf("%d\n", search_binary_loop(list, key, 0, sizeof(list) / sizeof(int)));

	return 0;
}