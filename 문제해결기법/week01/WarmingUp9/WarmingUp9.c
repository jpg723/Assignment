#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare(int arr1[], int arr2[]) {

	for (int i = 0; i < 5; i++) {

		if (arr1[i] != arr2[i]) //�迭�� �ٸ��ٸ� 1��ȯ
			return 1;
	}

	return 0;
}

int main(void) {

	int arr1[5], arr2[5];
	int i = 0;

	printf("Enter ù��° �迭: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("Enter �ι�° �迭: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr2[i]);
	}

	if (compare(arr1, arr2) == 1)
		printf("�� ���� �迭�� �ٸ���\n");

	else
		printf("�� ���� �迭�� ����\n");
}