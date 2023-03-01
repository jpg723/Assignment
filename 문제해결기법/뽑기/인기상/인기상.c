#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void pick(char* items[], int n, int bucket[], int m, int toPick) {

	int i, lastIndex, smallest;

	if (toPick == 0) {

		int pick_index = 0;

		for (i = 0; i < m; i++) {
			pick_index = bucket[i];
			
			printf("%s ", items[pick_index]);
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

	char* actor[] = { "공유", "김수현", "송중기", "지성", "현빈" };
	int* bucket;
	int num;

	printf("인기상 몇 명? ");
	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(actor, 5, bucket, num, num);

	free(bucket);
}