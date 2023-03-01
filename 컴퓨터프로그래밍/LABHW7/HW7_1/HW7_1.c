/*HW7_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수
int main(void)
{
    srand(200);
    generateData();
    printf("발생된 10개의 난수:\n");
    printData();
    printf("10개 난수의 합 = %d \n", totalData());
    printf("10개 난수중 가장 큰 수 = %d \n", maxData());
}
void generateData()
{
    int k;
    int* p;
    p = data; //혹은 p = &data[0]

    for (k = 0; k < 10; k++) // Index 0..9까지 난수값 부여
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
