/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int num);
int main(void) {

	int num;

	while(1) { //���� �ݺ�

		printf("Enter a number(-1 for exit): ");
		scanf("%d", &num); //num �Է�

		if (num == -1) //-1�Է½� ����
			break;

		if (isPrime(num) == 0) //��ȯ���� 0�̶�� �Ҽ�
			printf("�Ҽ��Դϴ�.\n");

		else //��ȯ���� 1�̶�� �Ҽ�X
			printf("�Ҽ��� �ƴմϴ�.\n");

	}

	return 0;
}

int isPrime(int num) {

	int prime = 0; 

	for (int i = 2; i < num; i++) {
		
		if (num % i == 0) {
			prime = 1; //�Ҽ��� �ƴ϶��
			break;
		}
	}

	return prime;
}