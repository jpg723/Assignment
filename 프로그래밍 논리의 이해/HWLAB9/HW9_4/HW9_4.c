/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int index = 0, num = 2, i = 2, check = 0;

	do {

		//�ʱ�ȭ
		check = 0;
		i = 2;

		do { //�Ҽ����� �Ǻ��ϴ� �ݺ���

			if (num == 2) //2�� ������ �Ҽ��̹Ƿ�
				break;

			if (num % i == 0) { //1�� �ڱ� �ڽ� �̿��� ���� ���� �������� �Ҽ��� �ƴ�
				check = 1; //�Ҽ��� �ƴϸ� check�� 1�� ��ȯ�ϰ�
				break; //�Ǻ� �ݺ��� ����
			}

			i++;

		} while (i < num); 
		
		if (check == 0) { //�Ҽ���� ��� ���
			printf("%d��° �Ҽ��� %d\n", index + 1, num);
			index++;
		}
		
		num++;
	} while (index < 10); //index�� 10���� ���� ������ �ݺ�

	return 0;
}