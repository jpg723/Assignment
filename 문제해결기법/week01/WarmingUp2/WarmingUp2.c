#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int x) {
	int i;

	if (x == 1) //1�� �Ҽ����� ����
		return 0;

	for (i = 2; i < x; i++) {
		
		if (x % i == 0) //�Ҽ��� �ƴϸ� (x�ܿ� �ٸ� ���� ������ �� �������� 0�̶��)
			return  0; //0�� ��ȯ
	}
	
	return 1; // �Ҽ��� 1�� ��ȯ
}
int main(void) {
	
	int i;

	for (i = 1; i <= 30; i++) { //1���� 30���� �Ҽ� �Ǻ�

		if (isPrime(i) == 1)
			printf("%d ", i);
	}

	return 0;
}