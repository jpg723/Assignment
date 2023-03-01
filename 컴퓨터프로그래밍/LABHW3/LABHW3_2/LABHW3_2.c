#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void initArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = rand() % 100;
    return;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void printMinMax(int arr[], int size)
{
    // �ּҰ�, �ִ밪�� ã�Ƽ� �ε����� �Բ� ����ϵ��� �����϶�
    int min = 999, max = -999;
    int minIndex = -1, maxIndex = -1;

    for (int i = 0; i < size; i++) {

        if (max < arr[i]) {
            max = arr[i];
            maxIndex = i;
        }

        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("�ִ밪: �ε��� = %d, �� = %d\n", maxIndex, max);
    printf("�ּҰ�: �ε��� = %d, �� = %d\n", minIndex, min);
}
int main(void) // �������� ����
{
    int a[10];
    //srand(time(NULL));
    srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����
    initArray(a, 10);
    printArray(a, 10);
    printMinMax(a, 10);
    return 0;
}