/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int main(void)
{
    //���� ����
    int odd[SIZE], even[SIZE];
    int num;
    int i, oddIndex = 0, evenIndex = 0;

    for (i = 0; i < SIZE; i++)
    {
        //num �Է�
        printf("Enter a number:");
        scanf("%d", &num);
        
        if (num % 2 == 0) { //¦���� ���
            even[evenIndex] = num;
            evenIndex++;
        }

        else { //Ȧ���� ���
            odd[oddIndex] = num;
            oddIndex++;

        }
    }
    //Ȧ�� ���
    printf("\n Ȧ�� ���:");
    for (i = 0; i < oddIndex; i++)
        printf("%d ", odd[i]);
    //¦�� ���
    printf("\n ¦�� ���:");
    for (i = 0; i < evenIndex; i++)
        printf("%d ", even[i]);
    printf("\n");

    return 0;
}