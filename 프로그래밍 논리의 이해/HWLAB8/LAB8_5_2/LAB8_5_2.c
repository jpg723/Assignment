/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main(void) {

	//변수 선언
	int rows, columns, i = 0, j = 0;

	//열, 행 입력
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Etner the number of columns: ");
	scanf("%d", &columns);

	while(i < rows) { //열 개수 만큼 줄바꿈

		while(j < columns) { //행 개수 만큼 별 출력
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j = 0; 
	}

	return 0;
}