/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int base, height, area;

	//�غ�, ���� �Է�
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &base, &height);

	//�ﰢ�� ���� ���
	area = (base * height) / 2;

	//��� ���
	printf("�غ��� ���̰� ���� %d �� %d�� �ﰢ���� ���̴� %d�̴�.\n", base, height, area);
}