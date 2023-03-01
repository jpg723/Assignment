/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
void print5Chars(char ch); // 함수의 원형
int main(void)
{
    print5Chars('*'); // 함수의 호출
    print5Chars('+');
    print5Chars('1');

    return 0;
}
void print5Chars(char ch) // 함수의 정의: 주어진 문자를 5 번쓰는 함수를 정의
{
    for (int i = 0; i < 5; i++)
        printf("%c", ch);
    printf("\n");
    
    return;
}