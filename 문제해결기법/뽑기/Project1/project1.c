#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int items[] = { 10, 50, 100, 500 };
int count = 0;
void pick(int n, int* bucket, int bucketSize, int k) {

	int lastIndex, smallest, i, money = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++) {
		money += items[bucket[i]];
	}

	if (money == bucketSize * 10) {
		count++;
		return;
	}

	if (money > bucketSize * 10)
		return;

	if (k == bucketSize)
		smallest = 0;

	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, bucket, bucketSize, k - 1);
	}
}
int main(void) {
	
	int money;
	int* bucket;
	 
	scanf("%d", &money);

	bucket = (int*)malloc(sizeof(int) * money / 10);

	pick(4, bucket, money / 10, money / 10);
	printf("%d", count);
}