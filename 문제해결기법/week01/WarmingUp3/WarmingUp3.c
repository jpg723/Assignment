#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int total(int n) {

	int sum = 0;

	for (int i = 1; i <= n; i++) {

		sum += i; //1���� n���� ���ϱ�
	}

	return sum; //���� ��� ��ȯ
}

int main(void) {
	
	int num;

	while(1) {
		
		printf("Input a number(-1 for exit): ");
		scanf("%d", &num);

		if (num == -1) //-1 �Է½� ����
			break;
		
		printf("1���� %d������ ���� %d\n", num, total(num));
	}

	return 0;
}