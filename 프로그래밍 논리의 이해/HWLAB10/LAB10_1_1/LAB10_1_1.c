/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
void printManyStars(int num);// �Լ��� ����
int main(void) {

	printManyStars(3);
	// �Լ��� ȣ��κ� �߰�
	printManyStars(4);
	printManyStars(5);
}

void printManyStars(int num) { // �Լ��� ����, num ��ŭ *�� ����Ѵ�

	int i;

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");

	return;
}