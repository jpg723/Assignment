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

	printf("5개의 숫자를 입력하세요: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	echo(arr, 5); //순서대로 출력
	printf("\n");
	reverse(arr, 5); //역순으로 출력
}