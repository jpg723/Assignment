/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char grade;
	int score;

	printf("Enter a student grade(A or F): ");
	scanf("%c", &grade);

	/*1�ܰ�
	if (grade == 'A')
		printf("�����ؿ�!\n");

	else
		printf("�����̳�..\n");
	*/

	/*2�ܰ�
	if (grade == 'A') {
		printf("�����ؿ�!\n");
	}

	else {
		printf("Enter your BAD score: ");
		scanf("%d", &score);
		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}
	*/

	if (grade == 'A') {
		printf("Enter your GOOD score: ");
		scanf("%d", &score);
		printf("������ %d���̸� ���� ������ �´±���. ��� �������ؿ�.\n", score);
	}

	else {
		printf("Enter your BAD score: ");
		scanf("%d", &score);
		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}

	return 0;
}