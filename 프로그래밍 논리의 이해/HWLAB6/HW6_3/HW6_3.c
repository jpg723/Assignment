/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char gender;
	int height, weight;

	printf("Enter your gender(M/F): ");
	scanf("%c", &gender);

	//���̾�Ʈ �ʿ伺 �˻�
	if (gender == 'M') //������ ���
		printf("Sorry, this fitness center is for women only.\n");

	else { //������ ���
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Enter your weight: ");
		scanf("%d", &weight);

		if (height <= weight + 110)
			printf("You NEED a diet. Try HARDER.\n");

		else
			printf("You do NOT need a diet. Keep exercising.\n");
	}

	return 0;
}