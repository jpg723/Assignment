#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void echo(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

}

void reverse(int arr[], int size) {

	for (int i = 4; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

}
int main(void) {

	int arr[5];
	int i = 0;

	printf("5���� ���ڸ� �Է��ϼ���: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	echo(arr, 5); //������� ���
	printf("\n");
	reverse(arr, 5); //�������� ���
}