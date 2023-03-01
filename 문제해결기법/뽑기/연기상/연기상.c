#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void pick(char* items[], int n, int* bucket, int bucketSize, int toPick) {

	int i, lastIndex, smallest;

	if (toPick == 0) {

		int pick_index = 0;

		for (i = 0; i < bucketSize; i++) {
			pick_index = bucket[i];
			printf("\t%s", items[pick_index]);
		}
		printf("\n");
		return;
	}

	lastIndex = bucketSize - toPick - 1;
	smallest = 0;

	for (i = 0; i < n; i++) {

		int j = 0;
		int flag = 0;

		for (j = 0; j <= lastIndex; j++) {
			if (bucket[j] == i)
				flag = 1;
		}

		if (flag == 1)
			continue;

		bucket[lastIndex + 1] = i;
		pick(items, n, bucket, bucketSize, toPick - 1);
	}


}

int main(void) {

	char* actor[] = { "공유", "김수현", "송중기", "지성", "현빈" };
	int* bucket;
	int num;

	printf("상의 종류는? ");
	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		printf("\t상 %d  ", i + 1);
	}
	printf("\n");
	pick(actor, sizeof(actor) / sizeof(actor[0]), bucket, num, num);

	free(bucket);
}