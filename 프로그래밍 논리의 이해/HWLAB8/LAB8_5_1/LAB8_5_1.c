/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {
	
	//변수 선언
	int rows, columns;

	//변수 입력
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Etner the number of columns: ");
	scanf("%d", &columns);

	//결과 출력
	for (int i = 0; i < rows; i++) { //열 개수 만큼 줄바꿈
		for (int j = 0; j < columns; j++) {
			printf("*"); //행 개수만큼 별출력
		}
		printf("\n");
	}

	return 0;
}