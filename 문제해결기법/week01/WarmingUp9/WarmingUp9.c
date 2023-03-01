#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare(int arr1[], int arr2[]) {

	for (int i = 0; i < 5; i++) {

		if (arr1[i] != arr2[i]) //배열이 다르다면 1반환
			return 1;
	}

	return 0;
}

int main(void) {

	int arr1[5], arr2[5];
	int i = 0;

	printf("Enter 첫번째 배열: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("Enter 두번째 배열: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr2[i]);
	}

	if (compare(arr1, arr2) == 1)
		printf("두 개의 배열은 다르다\n");

	else
		printf("두 개의 배열은 같다\n");
}