/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
void print5Stars(void); // �Լ��� ����
int main(void)
{
    print5Stars();
    // �Լ��� ȣ��κ� �߰�
    print5Stars();
    print5Stars();

    return 0;
}
void print5Stars(void) // �Լ��� ����
{
    int i, num = 5;

    for (i = 0; i < num; i++)
        printf("*");
    printf("\n");

    return;
}