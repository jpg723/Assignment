/*HW4_1 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void save(int money);
static int total;
int main(void)
{
	int m = 0;

	while (1)
	{
		printf("������ �ݾ�<-1 for exit>: ");
		scanf("%d", &m);

		if (m == -1)
			break;

		save(m);
		printf("��������� �Աݾ� %d\n", total);
	}

	printf("�Ա� �Ϸ�\n");

	return 0;
}
void save(int money)
{
	total += money;
}