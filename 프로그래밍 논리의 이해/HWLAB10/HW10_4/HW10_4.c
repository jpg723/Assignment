/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSumMToN(int m, int n);
int main(void) {

	//���� ����
	int m, n;

	//���� �Է�
	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	//��� ���
	printSumMToN(m, n);

	return 0;
}
void printSumMToN(int m, int n) {

	int sum = 0;

	//m���� n���� ��
	for (int i = m; i <= n; i++)
		sum += i;

	printf("%d ~ %d�� ��: %d\n", m, n, sum);

	return;
}