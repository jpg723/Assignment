/*HW4_5_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n);
int length;
int main(void)
{
	int num;

	scanf("%d", &num);

	get_cycle_number(num);
	printf("\n사이클 길이: %d\n", length);

	return 0;
}
int get_cycle_number(int n)
{
	//사이클 숫자 출력
	printf("%d ", n);
	//사이클 길이 count
	length++;

	//1인 경우
	if (n == 1)
		return 1;

	else
	{
		//짝수인 경우
		if (n % 2 == 0)
			return get_cycle_number(n / 2);

		//홀수인 경우
		else
			return get_cycle_number((n * 3) + 1);
	}
}