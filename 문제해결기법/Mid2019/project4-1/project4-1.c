#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* item, int n, int* picked, int m, int toPick, int target) {
    int i, lastIndex, ret;

    if (toPick == 0) {
        int picked_index;
        int sum = 0;

        for (i = 0; i < m; i++) {
            picked_index = picked[i];
            sum = sum + item[picked_index] * (i + 1);
        }

        if (sum == target) {
            return 1;
        }
        return 0;
    }

    lastIndex = m - toPick - 1;
    ret = 0;

    for (i = 0; i < n; i++) {
        picked[lastIndex + 1] = i;
        ret = ret + pick(item, n, picked, m, toPick - 1, target);
    }
    return ret;
}
int main(void)
{
    int n1, n2;
    int item[] = { 1, -1 };
    int* picked;
    int count;

    scanf("%d %d", &n1, &n2);

    picked = (int*)malloc(sizeof(int) * n1);

    count = pick(item, 2, picked, n1, n1, n2);

    printf("%d\n", count);

    free(picked);
}
