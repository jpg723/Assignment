/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char grade;
	int score;

	//���� �Է�
	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade != 'A') //������ A�� �ƴ϶�� ����
		return 0;

	else {
		printf("Enter your score: ");
		scanf("%d", &score);

		printf("%d���̸� %c�� �޴� ����.\n", score, grade);
	}

	return 0;
}