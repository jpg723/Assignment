/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, f = 1;

	//num �Է�
	printf("Enter a number (>=2): ");
	scanf("%d", &num);

	//factorial ���
	printf("%d! = ", num);
	for (int i = num; i > 0; i--) {
		
		f *= i;
		printf("%d", i);

		if (i == 1) //i�� 1�̸� ��� '=' ���
			printf(" = ");
		else
			printf(" * ");
	}

	printf("%d\n", f);

	return 0;
}