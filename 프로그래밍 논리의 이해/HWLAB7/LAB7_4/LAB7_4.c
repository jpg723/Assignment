/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� �Է�
	int num, i = 0;

	//num�Է�
	printf("Enter a number: ");
	scanf("%d", &num);

	/*1�ܰ�
	i = 1;
	while (i <= num) {
		
		if (i % 3 == 0)
			printf("%d ", i);

		i++;
	}
	*/

	i = 1;
	while (i <= num) {

		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);

		i++;
	}
}
