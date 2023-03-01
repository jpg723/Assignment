/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char word[11];

	printf("Enter a word(<= 10 chars): ");
	scanf("%s", word);

	//문자열을 한꺼번에 출력
	printf("%s", word);

	//한 글자씩 출력
	for (int i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	printf("\n");

	//홀수번째(인덱스 번호는 짝수이더라)와 출력해라
	for (int i = 0; word[i] != '\0'; i++){
		if (i % 2 == 0)
			printf("%c", word[i]);
	}
	printf("\n");

	return 0;
}