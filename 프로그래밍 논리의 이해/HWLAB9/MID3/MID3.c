/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, count = 0;

	//num�Է�
	scanf("%d", &num);

	while (num != 0) { //num�� 0�϶����� �ݺ�

		num /= 10; //10���� ��� ������
		count++; //�ڸ��� ����
	}

	//��� ���
	printf("%d\n", count);

	return 0;
}