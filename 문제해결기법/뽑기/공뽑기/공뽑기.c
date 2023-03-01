#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void pick(char* items[], int n, int* bucket, int m, int toPick) {

	int i, lastIndex, smallest;

	if (toPick == 0) {

		int picked_index;

		for (i = 0; i < m; i++) {
			picked_index = bucket[i];
			printf("%s ", items[picked_index]);
		}
		printf("\n");
		return;
	}

	lastIndex = m - toPick - 1;

	if (toPick == m)
		smallest = 0;

	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(items, n, bucket, m, toPick - 1);
	}
}

int main(void) {

	char* item[] = { "A", "B", "C", "D", "E", "F", "G" };
	int bucket[3];

	pick(item, 7, bucket, 3, 3);
}