/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int num, i = 0, total = 0;

	while(i < 5) { //i�� 5���� ���� ������ �ݺ�

		//num�Է�
		printf("0���� ū ���� �Է�(%d��°): ", i + 1);
		scanf("%d", &num);

		while (num <= 0) { //num�� 0���� ���� ��� �ٽ� �Է�
			printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�(%d��°): ", i + 1);
			scanf("%d", &num);
		}

		i++;
		total += num; //���� ���
	}

	//��� ���
	printf("�Էµ� ���� �� ��: %d\n", total);

	return 0;
}