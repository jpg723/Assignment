/*LAB1(���) ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int total = 0;
int main(void)
{
	int num;

	scanf("%d", &num);

	printf("\n%d\n", sum(num));

}

int sum(int n)
{
	int n2;

	if (n == 0)
		return total;

	else
	{
		sum(n - 1);
		n2 = n * 10 + 2;
		printf("%d ", n2);
		total += n2;
	}
}