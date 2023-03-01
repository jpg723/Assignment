#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pick(int* items, int itemSize, int* bucket, int bucketSize, int toPick, int money)
{
    int i, lastIndex, smallest;
    int sum = 0;

    if (toPick == 0)
    {
        for (i = 0; i < bucketSize; i++)
        {
            sum += items[bucket[i]];
        }
        if (sum == money)
        {
            for (i = 0; i < bucketSize; i++)
            {
                if (items[bucket[i]] != 0)
                    printf("%d ", items[bucket[i]]);
            }
            printf("\n");
        }
        return;
    }
    lastIndex = bucketSize - toPick - 1;

    if (toPick == bucketSize)
        smallest = 0;
    else
        smallest = bucket[lastIndex];

    for (i = smallest; i < itemSize; i++)
    {
        bucket[lastIndex + 1] = i;
        pick(items, itemSize, bucket, bucketSize, toPick - 1, money);
    }

}
int main(void)
{
    int items[] = { 0, 1000, 5000, 10000 };
    int* bucket;
    int money, num;

    printf("ют╥б: ");
    scanf("%d", &money);
    num = money / 1000;
    bucket = (int*)malloc(sizeof(int) * num);

    pick(items, 4, bucket, num, num, money);

    free(bucket);
}