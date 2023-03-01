#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int solution(char* s) {
	int i, j, index = 0;
	int length, min = 1000;
	char temp[1000] = "";
	char num[4];
	char str1[1000];
	char str2[1000];

	for (i = 1; i <= strlen(s) / 2; i++) {
		strncpy(str1, s, i);
		str1[i] = '\0';
		length = 1;

		for (j = i; j < strlen(s); j += i) {
			index = 0;

			while (index < i)
				str2[index++] = s[j + index];

			str2[index] = '\0';

			if (strcmp(str1, str2) == 0)
				length++;

			else {
				if (length > 1) {
					sprintf(num, "%d", length);
					strcat(temp, num);
				}
				strcat(temp, str1);

				strcpy(str1, str2);
				length = 1;
			}
		}
		if (length > 1) {
			sprintf(num, "%d", length);
			strcat(temp, num);
		}
		strcat(temp, str1);

		if (min <= strlen(temp))
			min = min;

		else
			min = strlen(temp);

		temp[0] = '\0';
	}
	return min;
}

int main(void) {

	char s[1000];

	scanf("%s", s);

	printf("%d", solution(s));
}