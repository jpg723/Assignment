/*HW4_5_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;

	//숫자 입력
	scanf("%d", &num);

	//사이클 길이 출력
	printf("\n사이클 길이: %d\n", get_cycle_number(num));

	return 0;
}
int get_cycle_number(int n)
{
	int length = 0;

	while (1)
	{
		//사이클 숫자 출력
		printf("%d ", n);
		//사이클 길이 count
		length++;

		//사이클 숫자가 1이 되면 종료
		if (n == 1)
			break;

		//짝수인 경우 사이클 숫자 계산
		if (n % 2 == 0)
			n = n / 2;

		//홀수인 경우 사이클 숫자 계산
		else
			n = (n * 3) + 1;
	}

	//길이 반환
	return length;
}