#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void input(char name[]) {

	printf("Enter your name: ");
	scanf("%s", name); //���ڿ��� �迭�� ���·� ����
}

void reverse(char name[]) {

	int length = 0, i = 0;

	do {
		length++; //���ڿ� ����
		i++;

	} while (name[i] != NULL);

	for (i = length - 1; i >= 0; i--) { //�������� ���
		printf("%c", name[i]);
	}
}

int main(void) {

	char name[50];

	input(name);

	printf("Reverse: ");
	reverse(name);
}