/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
int main(void) {

	// �� ���� ���� totalMinute, hour, minute �� �����ϰ� totalMinute �� �� 130 �� �����϶�.
	int totalMinute = 130;
	int hour, minute;

	// hour �� ����Ѵ�. �̶� totalMinute �� �̿��Ѵ�.
	hour = totalMinute / 60;
	// minute �� ����Ѵ�. �̶� totalMinute �� �̿��Ѵ�.
	minute = totalMinute % 60;
	// ����Ѵ�. �̶� totalMinute, hour, minute �� �̿��Ѵ�. 
	printf("%d��:\n", totalMinute);
	printf("%dh %dm\n", hour, minute);

	return 0;8
}