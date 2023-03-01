/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

	char word[81];
	int i, len = 0;

	printf("Enter a string: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++);
	len = i;

	printf("길이는 : %d\n", len);

	for (i = len - 1; i >= 0; i--)
		printf("%c\n", word[i]);

	return 0;
}
