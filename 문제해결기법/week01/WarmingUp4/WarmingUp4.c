#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num[5];
	int i = 0, key, index = 0;

	printf("Enter 5���� ����: ");
	
	for (i = 0; i < 5; i++) { // 5�� ���� �Է�
		scanf("%d", &num[i]);
	}

	printf("Enter a key: "); // key �Է�
	scanf("%d", &key);

	for (i = 0; i < 5; i++) {

		if (num[i] == key) { // num�� key�� ���ٸ�
			index = i + 1; // num�� ��ġ ����
			break; // key�� ���� ���� ��� �տ� �ִ� ��ġ ����� ���� ���ٸ� �ٷ� ����
		}
	}

	if (index == 0)
		printf("����\n");
	
	else
		printf("%d��°�� �ִ�\n", index);

	
}