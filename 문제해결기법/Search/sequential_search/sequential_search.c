#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sorted_seq_search(int key, int list[], int low, int high)
{
	int i;

	for (i = low; i <= high; i++)
	{
		if (list[i] > key)
			return -1;

		if (list[i] == key)
			return i;
	}
}

int main(void)
{
	int list[] = { 2, 3, 5, 7, 8, 9 };
	int key, i;

	printf("list: ");

	for (i = 0; i < sizeof(list) / sizeof(int); i++)
	{
		printf("%d ", list[i]);
	}

	printf("\nkey: ");
	scanf("%d", &key);

	printf("%d\n", sorted_seq_search(key, list, 0, sizeof(list) / sizeof(int) - 1));

	return 0;
}