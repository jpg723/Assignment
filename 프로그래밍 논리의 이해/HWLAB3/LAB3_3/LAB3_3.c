/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int totalMinutes, hour, minute;

	//�Է�
	printf("Enter hour: ");
	scanf("%d", &hour);
	printf("Enter minute: ");
	scanf("%d", &minute);

	//���
	totalMinutes = hour * 60 + minute;

	//��� ���
	printf("Total %d minutes\n",totalMinutes);

	return 0;
}