/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
int main(void) {

	//���� �� ����
	int totalSeconds = 14000;
	int hour = totalSeconds / 3600;
	int minute = totalSeconds % 3600 / 60;
	int seconds = totalSeconds % 3600 % 60;

	printf("%d seconds:\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, seconds);

	return 0;

}