/*challenge6a 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	//변수 선언
	char first_word[81];
	char second_word[81];
	int check = 0, length, length1 = 0, length2 = 0;

	//단어 입력
	printf("Enter the first word: ");
	scanf("%s", first_word);
	printf("Enter the second word: ");
	scanf("%s", second_word);

	//첫 번째 단어 길이
	for (int i = 0; first_word[i] != '\0'; i++)
		length1++;

	//두 번째 단어 길이
	for (int i = 0; second_word[i] != '\0'; i++)
		length2++;

	//단어의 길이가 다를 경우
	if(length1 != length2)
		printf("두 단어는 다르다\n");

	//단어의 길이가 같을 경우
	else
	{
		//두 단어 중 길이가 긴 단어의 길이 구하기
		if (length1 > length2)
			length = length1;

		else
			length = length2;

		//단어 판별
		for (int i = 0; i < length; i++)
		{
			//다를 경우
			if (first_word[i] != second_word[i])
			{
				check = 1;
				break;
			}
		}

		//결과 출력
		if (check == 1)
			printf("두 단어는 다르다\n");

		else
			printf("두 단어는 같다\n");
	}

	return 0;
}