/*HW7_1 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // ��� ���࿡ ����� ���� ����
int main(void)
{
    srand(200);
    generateData();
    printf("�߻��� 10���� ����:\n");
    printData();
    printf("10�� ������ �� = %d \n", totalData());
    printf("10�� ������ ���� ū �� = %d \n", maxData());
}
void generateData()
{
    int k;
    int* p;
    p = data; //Ȥ�� p = &data[0]

    for (k = 0; k < 10; k++) // Index 0..9���� ������ �ο�
        p[k] = rand() % 100;
}

void printData()
{
    int* pi = data;
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", pi[i]);
    printf("\n");
}

int totalData()
{
    int* pi = data, sum = 0;
    int i;
    for (i = 0; i < 10; i++)
        sum += pi[i];
   
    return sum;
}

int maxData()
{
    int max = -999, i = 0;
    int* pi = data;

    for (i = 0; i < 10; i++)
    {
        if (max < pi[i])
            max = pi[i];
    }

    return max;
}
