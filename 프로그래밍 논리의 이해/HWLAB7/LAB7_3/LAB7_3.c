/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, i = 0;

	//num�Է�
	printf("Enter a number: ");
	scanf("%d", &num);

	/* 1�ܰ�
	i = 1;

	while(i <= 5){
		printf("%d\n", i * i * i);
		i++;
	}
	*/
	i = 1;
	while(i <= num) { //num��ŭ �ݺ��ϰ�

		printf("%d\n", i * i * i); //������ ���
		i++;
	}

	return 0;
}