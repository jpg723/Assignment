/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	char first[81], second[81];
	int i, check = 0, len, first_len = 0, second_len = 0;

	//ù ��°, �� ��° ���ڿ� �Է�
	printf("Enter the first word: ");
	scanf("%s", first);
	printf("Enter the second word: ");
	scanf("%s", second);

	//ù ��° ���ڿ� ����
	for (i = 0; first[i] != '\0'; i++);
	first_len = i;
	//�� ��° ���ڿ� ����
	for (i = 0; second[i] != '\0'; i++);
	second_len = i;

	//���̰� ū ���� ���� ���� ���ϱ�
	if (first_len > second_len)
		len = first_len;

	else
		len = second_len;

	//���� ���̸�ŭ �ݺ�
	for (int i = 0; i < len; i++) {

		if (first[i] != second[i]) { //�ٸ���
			check = 1;
			break;
		}
	}

	if (check == 1)
		printf("�� �ܾ�� �ٸ���.\n");

	else
		printf("�� �ܾ�� ����.\n");

	return 0;
}