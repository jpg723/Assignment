/*LAB10_1(revisited) 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct customer {
    char name[40];
    int age;
};
int main(void)
{
    //라)
    struct customer aCustomer = { "박수희", 36 };
    struct customer* cp = &aCustomer;
    printf("Name = %s, Age = %d\n", cp->name, cp->age);
    
    //마)
    struct customer cArray[2] = { {"장동건", 38}, {"고소영", 38} };
    cp = cArray;

    for (int i = 0; i < 2; i++) {
        printf("Name = %s, Age = %d\n", cp->name, cp->age);
        cp++;
    }
}