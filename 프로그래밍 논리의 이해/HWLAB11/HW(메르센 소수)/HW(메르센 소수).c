/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2 �� n ���� ��ȯ�ϴ� �Լ�
long long twoToThePower(int n)
{
	long long pow = 1;

	for (int i = 0; i < n; i++)
		pow *= 2;

	return pow - 1;
}
// x �� �Ҽ��̸� 1 �� �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int isPrime(long long x)
{
	int prime = 0;

	for (int i = 2; i < x; i++) {

		if (x % i == 0) {
			prime = 1;
			break;
		}
	}

	return prime;
}
int main(void)
{
	int num, prime = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (isPrime(i) == 0) { //�Ҽ� �Ǻ�

			if(isPrime(twoToThePower(i)) == 0) //2�� n�� - 1�� �Ҽ����� �Ǻ�
			printf("(%d ^ %d - 1) = %d�� �޸��� �Ҽ��̴�.\n", 2, i, twoToThePower(i));
		}
	}
}