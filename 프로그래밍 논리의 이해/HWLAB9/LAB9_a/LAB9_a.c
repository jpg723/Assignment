/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int i;

	srand(time(NULL)); //���� ���� ������

	for(i = 0; i < 5; i++)
		printf("���� ���: %d\n", rand() % 100); //0 - 99

	return 0;
}