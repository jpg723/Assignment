/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {
	
	//���� ����
	int rows, columns;

	//���� �Է�
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Etner the number of columns: ");
	scanf("%d", &columns);

	//��� ���
	for (int i = 0; i < rows; i++) { //�� ���� ��ŭ �ٹٲ�
		for (int j = 0; j < columns; j++) {
			printf("*"); //�� ������ŭ �����
		}
		printf("\n");
	}

	return 0;
}