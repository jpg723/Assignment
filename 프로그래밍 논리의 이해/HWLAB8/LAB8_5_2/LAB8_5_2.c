/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {

	//���� ����
	int rows, columns, i = 0, j = 0;

	//��, �� �Է�
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Etner the number of columns: ");
	scanf("%d", &columns);

	while(i < rows) { //�� ���� ��ŭ �ٹٲ�

		while(j < columns) { //�� ���� ��ŭ �� ���
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0; 
	}

	return 0;
}