#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int count;
void pick(int* items, int itemSize, int* bucket, int bucketSize, int toPick, int num)
{
    int i, lastIndex, smallest;
    int sum = 0;

    lastIndex = bucketSize - toPick - 1;

    if (toPick == 0)
    {
        for (i = 0; i < bucketSize; i++)
        {
            sum += items[bucket[i]];
        }
        if (sum == num)
        {
            count++;
        }
        return;
    }

    if (toPick == bucketSize)
        smallest = 0;
    else
        smallest = bucket[lastIndex];

    for (i = smallest; i < itemSize; i++)
    {
        bucket[lastIndex + 1] = i;
        pick(items, itemSize, bucket, bucketSize, toPick - 1, num);
    }

}
int main(void)
{
    int nums[] = { 0, 1, 2 };
    int* bucket;
    int n;

    scanf("%d", &n);
    bucket = (int*)malloc(sizeof(int) * n);

    pick(nums, 3, bucket, n, n, n);
    printf("%d\n", count);

    free(bucket);
}