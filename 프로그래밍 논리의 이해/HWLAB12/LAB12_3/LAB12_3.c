/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int incomes[7];
    int max = -999;
    
    // ������ �б� ���� for��
    for (int i = 0; i < 7; i++) {
        printf("Enter th income: ");
        scanf("%d", &incomes[i]);
    }

    printf("----------------------------\n");
        
    // �ְ� ���� ��� ���� for��
    for (int i = 0; i < 7; i++) {
        if (max < incomes[i])
            max = incomes[i];
    }
     
    // �ְ� ���� ���
    printf("The best income is %d\n", max);

    // ���� ����� ���� for��
    printf("Incomes are\n");
    for (int i = 0; i < 7; i++)
        printf("%d ", incomes[i]);
    printf("\n");

    return 0;
}