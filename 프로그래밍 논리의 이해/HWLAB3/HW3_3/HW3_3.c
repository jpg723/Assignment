/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int hour, minute, seconds, totalSeconds;

	//��, ��, �� �Է�
	printf("Enter h m s: ");
	scanf("%d %d %d", &hour, &minute, &seconds);

	//���� ���
	totalSeconds = (hour * 3600) + (minute * 60) + seconds;
	
	//��� ���
	printf("---CalculationResult---\n");
	printf("Total %d seconds\n", totalSeconds);

	return 0;
}