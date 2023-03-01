#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void pick(int itemSize, int* bucket, int bucketSize, int toPick)
{
    int i, lastIndex, smallest, item, total = 0;

    if (toPick == 0)
    {
        for (i = 0; i < bucketSize; i++)
        {
            if (bucket[i] == 0)
            {
                printf("+ %d", i + 1);
                total += (i + 1);
            }
            else
            {
                printf("- %d", i + 1);
                total -= (i + 1);
            }
        }
        printf(" = %d\n", total);

        return;
    }

    lastIndex = bucketSize - toPick - 1; 
    smallest = 0;

    for (item = smallest; item < itemSize; item++)
    {
        bucket[lastIndex + 1] = item;
        pick(itemSize, bucket, bucketSize, toPick - 1);
    }
}
int main(void)
{
    int* bucket, num;

    printf("ют╥б: ");
    scanf("%d", &num);
    bucket = (int*)malloc(sizeof(int) * num);

    pick(2, bucket, num, num);

    free(bucket);
}
