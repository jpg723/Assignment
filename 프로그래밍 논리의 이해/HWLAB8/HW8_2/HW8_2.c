/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int score = 0, best = -999, worst = 999, i = 0, num;

	printf("Enter the number of scores: ");
	scanf("%d", &num);

	//������ �ִ밪 ���ϱ�
	for (i = 0; i < num; i++) {

		printf("Enter a score: ");
		scanf("%d", &score);

		if (best < score) //������ �ִ밪
			best = score;

		if (worst > score) //������ �ּҰ�
			worst = score;
	}

	//��� ���
	printf("The best score is %d\n", best);
	printf("The worst score is %d\n", worst);

	return 0;
}