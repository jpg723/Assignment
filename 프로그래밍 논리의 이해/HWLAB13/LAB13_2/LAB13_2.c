/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int income[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search, month = 0;

	printf("탐색할 수입은? ");
	scanf("%d", &search);

	for (int i = 0; i < 12; i++) {

		if (search == income[i]) {
			month = i + 1;
			break;
		}

	}

	if (month == 0)
		printf("수입 %d를 갖는 달은 없습니다.\n", search);

	else
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", search, month);

	return 0;
}