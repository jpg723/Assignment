/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int score = 0, student = -1, total = 1, best = 0;
	double average;

	while (score != -1) { //������ -1�� �Էµ� ������ �ݺ�

		//���� �Է�
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);

		total += score; //���� ���� ���
		student++; //�л��� ���
		 
		//���� �ִ밪 ���
		if (best < score)
			best = score;
	}

	average = (double)total / student; //��� ���

	//��� ���
	printf("You've entered %d students.\n", student);

	if (student == 0) 
		printf("There is no data.\n");
	
	else {
		printf("The total is %d.\n", total);
		printf("The average is %.1lf.\n", average);
		printf("The best score is %d.\n", best);
	}

	return 0;
}