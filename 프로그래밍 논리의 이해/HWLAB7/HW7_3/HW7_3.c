/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, i = 0, factorial = 1;

	//num �Է�
	printf("Enter a number: ");
	scanf("%d", &num);

	//factorial ���
	while (i != num) {

		i++;
		factorial *= i;
	}

	//��� ���
	printf("%d�� Factorial ���� %d�̴�.\n", num, factorial);

	return 0;

}