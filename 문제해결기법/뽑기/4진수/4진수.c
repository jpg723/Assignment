#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void pick(int* items[], int n, int* bucket, int bucketSize, int toPick) {

	int i, lastIndex, smallest;

	if (toPick == 0) {

		int pick_index = 0;

		for (i = 0; i < bucketSize; i++) {
			pick_index = bucket[i];
			printf("%d ", items[pick_index]);
		}
		printf("\n");
		return;
	}

	lastIndex = bucketSize - toPick - 1;
	smallest = 0;

	for (i = smallest; i < n; i++) {

		bucket[lastIndex + 1] = i;
		pick(items, n, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {

	int* items;
	int* bucket;
	int num;

	printf("ют╥б: ");
	scanf("%d", &num);

	items = (int*)malloc(sizeof(int) * (num + 1));
	bucket = (int*)malloc(sizeof(int) * (num + 1));

	for (int i = 0; i <= num; i++) {
		items[i] = i;
	}

	pick(items, num + 1, bucket, num, num);

	free(items);
	free(bucket);
}