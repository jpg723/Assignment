/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int totalMinutes, hour, minutes;

	//�Է�
	printf("Enter the total minutes: ");
	scanf("%d", &totalMinutes);
	
	//���
	hour = totalMinutes / 60;
	minutes = totalMinutes % 60;

	//��� ���
	printf("%d minutes\n", totalMinutes);
	printf("%dh %dm\n", hour, minutes);

	return 0;
}