/*HW4_5_2 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n);
int length;
int main(void)
{
	int num;

	scanf("%d", &num);

	get_cycle_number(num);
	printf("\n����Ŭ ����: %d\n", length);

	return 0;
}
int get_cycle_number(int n)
{
	//����Ŭ ���� ���
	printf("%d ", n);
	//����Ŭ ���� count
	length++;

	//1�� ���
	if (n == 1)
		return 1;

	else
	{
		//¦���� ���
		if (n % 2 == 0)
			return get_cycle_number(n / 2);

		//Ȧ���� ���
		else
			return get_cycle_number((n * 3) + 1);
	}
}