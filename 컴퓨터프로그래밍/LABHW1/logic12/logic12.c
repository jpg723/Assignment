#define _CRT_SECURE_NO_WARNINGS
#define SIZE 12
#include<stdio.h>
int searchKeyInArray(int a[], int size, int searchKey) {

	int index = -1;

	for (int i = 0; i < size; i++) {

		if (a[i] == searchKey) {
			index = i + 1;
			break;
		}
	}

	return index;
}
int main(void) {
	
	int array[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int searchKey;

	scanf("%d", &searchKey);

	if(searchKeyInArray(array, SIZE, searchKey) != -1)
		printf("%d번째에 %d가 있다.\n", searchKeyInArray(array, SIZE, searchKey), searchKey);
	else
		printf("%d는 없다.\n", searchKey);

	return 0;
}
