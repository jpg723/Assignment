/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int totalSeconds, hour, minute, seconds;

	//���� �Է�
	printf("Enter the total seconds: ");
	scanf("%d", &totalSeconds);

	//��, ��, �� ���
	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, seconds);

	return 0;
}