/*HW4_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void save(int money);
static int total;
int main(void)
{
	int m = 0;

	while (1)
	{
		printf("저금할 금액<-1 for exit>: ");
		scanf("%d", &m);

		if (m == -1)
			break;

		save(m);
		printf("현재까지의 입금액 %d\n", total);
	}

	printf("입금 완료\n");

	return 0;
}
void save(int money)
{
	total += money;
}