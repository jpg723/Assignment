/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cycleNb(int num);
int main(void)
{
    int n;

    //n�Է�
    printf("Enter a number: ");
    scanf("%d", &n);

    cycleNb(n); //��� ���

    return 0;
} 
void cycleNb(int num)
{
    int length = 1; //����

    printf("%d ", num); //num ���� ���

    while (num != 1) {

        if (num % 2 == 0) //num ¦����
            num /= 2;

        else //Ȧ����
            num = num * 3 + 1;

        printf("%d ", num);
        length++; //���� ����
    }

    printf("\n���̴� %d\n", length);

    return;
}
