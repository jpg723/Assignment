/*LAB10_1(revisited) ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct customer {
    char name[40];
    int age;
};
int main(void)
{
    //��)
    struct customer aCustomer = { "�ڼ���", 36 };
    struct customer* cp = &aCustomer;
    printf("Name = %s, Age = %d\n", cp->name, cp->age);
    
    //��)
    struct customer cArray[2] = { {"�嵿��", 38}, {"��ҿ�", 38} };
    cp = cArray;

    for (int i = 0; i < 2; i++) {
        printf("Name = %s, Age = %d\n", cp->name, cp->age);
        cp++;
    }
}