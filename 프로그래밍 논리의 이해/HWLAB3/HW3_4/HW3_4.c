/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int base, height, width, area, circumference;

	//�ﰢ�� �غ�, ���� �Է�
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &base, &height);

	//�ﰢ�� ���� ���
	area = (base * height) / 2;

	//��� ���
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�.\n", base, height, area);

	//���簢�� ����, ���� �Է�
	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &width, &height);

	//���簢�� �ѷ�, ���� ���
	area = width * height;
	circumference = (width + height) * 2;

	//��� ���
	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�.\n", width, height, circumference, area);

	return 0;
}