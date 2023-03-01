/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char first[81], second[81];
	int i, check = 0, len, first_len = 0, second_len = 0;

	//첫 번째, 두 번째 문자열 입력
	printf("Enter the first word: ");
	scanf("%s", first);
	printf("Enter the second word: ");
	scanf("%s", second);

	//첫 번째 문자열 길이
	for (i = 0; first[i] != '\0'; i++);
	first_len = i;
	//두 번째 문자열 길이
	for (i = 0; second[i] != '\0'; i++);
	second_len = i;

	//길이가 큰 것이 최종 길이 정하기
	if (first_len > second_len)
		len = first_len;

	else
		len = second_len;

	//최종 길이만큼 반복
	for (int i = 0; i < len; i++) {

		if (first[i] != second[i]) { //다르면
			check = 1;
			break;
		}
	}

	if (check == 1)
		printf("두 단어는 다르다.\n");

	else
		printf("두 단어는 같다.\n");

	return 0;
}