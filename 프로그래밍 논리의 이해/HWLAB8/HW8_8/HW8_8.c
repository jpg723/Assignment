/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, check = 0;

	//�Ǻ��� num�Է�
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (num % i == 0) //1�Ǵ� �ڱ��ڽ� �ܿ� �������� ���ڰ� �ִٸ�
			check = 1; //�Ҽ��� �ƴ�
	}

	if (check == 1)
		printf("�Ҽ��� �ƴϴ�\n");

	else 
		printf("�Ҽ��̴�.\n");
	

	return 0;
}