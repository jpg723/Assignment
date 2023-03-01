/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 입력
	int num, i = 0;

	//num입력
	printf("Enter a number: ");
	scanf("%d", &num);

	/*1단계
	i = 1;
	while (i <= num) {
		
		if (i % 3 == 0)
			printf("%d ", i);

		i++;
	}
	*/

	i = 1;
	while (i <= num) {

		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);

		i++;
	}
}
