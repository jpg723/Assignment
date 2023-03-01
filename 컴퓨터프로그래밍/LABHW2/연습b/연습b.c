#include <stdio.h>
void printArray(int a[], int size);
void changeArray(int b[], int size);
int sumArray(int c[], int size);
int main(void)
{
    int data[5] = { 10, 20, 30, 40, 50 };
    printArray(data, 5); // ȣ���� ���� �μ������� �迭�� �̸��� ����Ѵ�.
    changeArray(data, 5); // 5��ſ� sizeof(data) / sizeof(int)�� �ᵵ �ȴ�.
    printArray(data, 5);
    printf("�迭�� ���� %d\n", sumArray(data, 5));
}
void printArray(int a[], int size) // �տ� �� �״��
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return;
}
void changeArray(int b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        b[i] *= 10;
    return;
}
int sumArray(int c[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += c[i];
    return sum;
}