/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int rows, columns;

	//���� �Է�
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);

	for (int i = 0; i < rows; i++) {//����ŭ �ݺ�

		for (int j = 0; j < columns; j++) { //�ุŭ �ݺ�
			printf("%d", i + 1);
		}
		printf("\n");
	}

	return 0;
}