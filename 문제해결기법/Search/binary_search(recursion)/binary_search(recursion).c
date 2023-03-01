#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search_recursion(int list[], int key, int low, int high) {

	int middle;

	if (low > high)
		return -1;

	middle = (low + high) / 2;

	if (key == list[middle])
		return middle;

	else if (key > list[middle])
		return binary_search_recursion(list, key, middle + 1, high);

	else
		return binary_search_recursion(list, key, low, middle - 1);
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

	printf("%d\n", binary_search_recursion(list, key, 0, sizeof(list) / sizeof(int) - 1));

	return 0;
}