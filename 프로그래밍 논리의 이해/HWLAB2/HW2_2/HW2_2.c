/*��ǻ���а� 20200997 �̹���*/
#include<stdio.h>
int main(void) {

	//���� �� ����
	int midterm = 100;
	int final = 90;
	int number = 7;
	int square = number * number;
	int cube = number * number * number;

	printf("�̸�\t\t�߰�\t�б⸻\t���\n");
	printf("Suehee Pak\t%d\t%d\t%d\n", midterm, final, (midterm + final) / 2);
	printf("number: %d\tsquare : %d\t cube: %d\n", number, square, cube);

	return 0;
}