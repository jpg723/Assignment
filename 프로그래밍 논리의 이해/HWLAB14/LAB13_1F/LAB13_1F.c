/*��ǻ���а� 20200997 �̹���*/
#define SIZE 5
#include <stdio.h>
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
int main(void)
{
    int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
    int arrayB[SIZE];
    int arrayC[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        arrayB[i] = arrayA[i];
        arrayC[5 - i - 1] = arrayB[i];
    }
    // �迭 3 ���� ����ϴ� �κ� �߰�: printArray ȣ��
    printArray(arrayA, SIZE);
    printArray(arrayB, SIZE);
    printArray(arrayC, SIZE);

    if (equalArray(arrayA, arrayB, SIZE)) // if (equalArray(arrayA, arrayB, SIZE) == 1)
        printf("ArrayA �� arrayB �� ����\n");
    else
        printf("ArrayA �� arrayB �� �ٸ���\n");

    if (equalArray(arrayA, arrayC, SIZE))
        printf("ArrayA �� arrayC �� ����\n");
    else
        printf("ArrayA �� arrayC �� �ٸ���\n");
}
void printArray(int a[], int size) // �״�� ����Ѵ�
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return;
}
// �迭 a �� b �� ������ 1 �� �ٸ��� 0 �� ��ȯ�ϴ� �Լ��� �����Ѵ�
// flag ���� ���� �ۼ��غ���!
int equalArray(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}