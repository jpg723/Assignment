/*HW4_5_1 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;

	//���� �Է�
	scanf("%d", &num);

	//����Ŭ ���� ���
	printf("\n����Ŭ ����: %d\n", get_cycle_number(num));

	return 0;
}
int get_cycle_number(int n)
{
	int length = 0;

	while (1)
	{
		//����Ŭ ���� ���
		printf("%d ", n);
		//����Ŭ ���� count
		length++;

		//����Ŭ ���ڰ� 1�� �Ǹ� ����
		if (n == 1)
			break;

		//¦���� ��� ����Ŭ ���� ���
		if (n % 2 == 0)
			n = n / 2;

		//Ȧ���� ��� ����Ŭ ���� ���
		else
			n = (n * 3) + 1;
	}

	//���� ��ȯ
	return length;
}