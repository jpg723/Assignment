/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int score = 0, best = -999, i = 0;

	/*
	while(i < 5) {

		if (best < score)
			best = score;

		printf("Enter a score: ");
		scanf("%d", &score);

		i++;
	}
	*/

	//������ �ִ밪 ���ϱ�
	for (i = 0; i < 5; i++) {

		printf("Enter a score: ");
		scanf("%d", &score);

		if (best < score)
			best = score;
	}

	//��� ���
	printf("The best score is %d\n", best);
	
	return 0;
}