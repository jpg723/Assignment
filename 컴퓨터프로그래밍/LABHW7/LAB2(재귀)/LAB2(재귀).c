/*LAB2(재귀) 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void to_binary(int n);
int main(void)
{
	int num;

	scanf("%d", &num);

	to_binary(num);

	return 0;
}
void to_binary(int n)
{
	if (n == 0)
		return;

	else
	{
		to_binary(n / 2); 
		printf("%d ", n % 2);
	}
}