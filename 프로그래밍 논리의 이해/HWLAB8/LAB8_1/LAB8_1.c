/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int n, i;

	//num�Է�
	printf("Enter a number: ");
	scanf("%d", &n);

	//������ ���
	for (i = 1; i <= n; i++)
		printf("%d\n", i * i * i);

	return 0;
}