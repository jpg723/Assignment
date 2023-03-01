/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int rows, columns;

	//변수 입력
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &columns);

	for (int i = 0; i < rows; i++) {//열만큼 반복

		for (int j = 0; j < columns; j++) { //행만큼 반복
			printf("%d", i + 1);
		}
		printf("\n");
	}

	return 0;
}