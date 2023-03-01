#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int sum, int min)
{
	int i, lastIndex, smallest, sum1, sum2;
	int diff = 0;

	lastIndex = bucketSize - k - 1;

	if (k == 0)
	{
		sum1 = 0;
		sum2 = 0;

		for (i = 0; i < bucketSize; i++)
			sum1 += items[bucket[i]];

		sum2 = sum - sum1;
		diff = abs(sum1 - sum2);

		if (min > diff)
			return diff;
		else
			return min;
	}

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i < itemSize; i++)
	{
		if (lastIndex >= 0 && bucket[0] != 0)
			break;

		bucket[lastIndex + 1] = i;
		diff = pick(items, itemSize, bucket, bucketSize, k - 1, sum, min);
		min = diff;
	}
	return min;
}

int main(void)
{
	int i, n, sum = 0;
	int* items;
	int* bucket;

	scanf("%d", &n);

	items = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &items[i]);
		sum += items[i];
	}
	bucket = (int*)malloc(sizeof(int) * (n / 2));

	printf("%d\n", pick(items, n, bucket, n / 2, n / 2, sum, sum));

}