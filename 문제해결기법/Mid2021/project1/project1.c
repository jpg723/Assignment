#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char src_s[], char s[])
{
	int length = 0, i = 0, j = 0;

	do {
		length++; //���ڿ� ����
		i++;

	} while (src_s[i] != NULL);

	s[length];

	for (i = length - 1; i >= 0; i--) { //�������� ���
		s[j] = src_s[i];
		j++;
	}

	s[j] = '\0';
	
}
// main�� given
int main(void)
{
	char src_s[101];
	char s[101];
	scanf("%s", src_s);
	reverse(src_s, s);
	printf("%s\n", s);
}