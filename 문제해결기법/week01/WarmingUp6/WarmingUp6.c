#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int n) {

	srand(time(0));

	for (int i = 0; i < 6; i++) {
		n = rand() % 45 + 1; //1���� 45���� ���� �Լ� ����
		printf("%d ", n);
	}
}

int main(void) {

	char answer;
	int num = 0, i;

	printf("*** �ζ� ��ȣ ������ ***");

	do {

		printf("\n���� ��ȣ: ");
		random(num);

		printf("\n�ٽ� �����ϰڽ��ϱ�? (y/n): ");
		scanf(" %c", &answer);

	} while (answer != 'n'); //answer�� n�̸� ����
	
}