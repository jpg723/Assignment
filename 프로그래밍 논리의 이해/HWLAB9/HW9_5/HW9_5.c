/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, i = 1, k = 0;

	//num �Է�
	printf("Enter a number: "); 
	scanf("%d", &num);

	while (i < num) { //2�� ������ num���� ������ �ݺ��� ����
		
		i *= 2; //2�� ����

		if (i <= num) //2�� ������ num ���ϸ�
			k++; //k����
	}

	//��� ���
	printf("%d\n", k);

	return 0;
}