/*��ǻ���а� 20200997 �̹���*/
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

	printf("���̴� : %d\n", len);

	for (i = len - 1; i >= 0; i--)
		printf("%c\n", word[i]);

	return 0;
}
