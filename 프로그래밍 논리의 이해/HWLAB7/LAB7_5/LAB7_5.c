/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    //���� ����
    int num, i;
    int sum = 0, mul = 1;

    //�ݺ�Ƚ�� �Է�
    printf("Enter a number:");
    scanf("%d", &num);

    i = 1;
    while (i <= num) {//num ��ŭ �ݺ�
        
        sum += 3; //�ݺ�Ƚ����ŭ ���ϱ�
        mul *= 3; //�ݺ�Ƚ����ŭ ���ϱ�
        i++;
    }
    
    printf("3�� %d�� ���� ���� %d �̴�.\n", num, sum);
    printf("3�� %d�� ���� ���� %d �̴�.\n", num, mul);
    
    return 0;
}