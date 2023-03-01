#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int *A, int p, int q, int r)
{
    int i, j, t;
    int *B;

    i = p;
    j = q + 1;
    
    B = (int*)malloc(sizeof(int) * (r - p + 1));
    t = 0;

    while (i <= q && j <= r) {
        if (A[i] < A[j]) {
            B[t] = A[i];
            i++;
        }

        else {
            B[t] = A[j];
            j++;
        }
        t++;
    }

    if (i > q) {
        for (; j <= r; j++, t++) {
            B[t] = A[j];
        }
    }

    else {
        for (; i <= q; i++, t++) {
            B[t] = A[i];
        }
    }

    for (i = p, t = 0; i <= r; i++, t++) {
        A[i] = B[t];
    }

    free(B);
}

void mergeSort(int *A, int p, int r)
{
    int q;

    if (p < r)
    {
        q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main(void)
{
    int *A;
    int i, n;

    scanf("%d", &n);
    A = (int*)malloc(sizeof(int) * n);

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        A[i] = rand() % 1000;
        printf("%d ", A[i]);
    }
    printf("\n");

    mergeSort(A, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    free(A);
    return 0;
}
