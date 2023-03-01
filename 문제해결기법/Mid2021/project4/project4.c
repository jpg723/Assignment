#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int w, h, start, i;
	char ladder[100][100] = { 0 };

	scanf("%d %d", &w, &h);
	scanf("%d", &start);

	for (i = 0; i < h; i++) {
		scanf("%s", ladder[i]);
	}

	for (i = 0; i < h; i++) {
		if (start == 0) { //맨 처음
			if (ladder[i][start] == '1')
				start++;
		}

		else if (start == w - 1) { //맨 끝
			if (ladder[i][start - 1] == '1')
				start--;
		}

		else {
			if (ladder[i][start] == '1')
				start++;

			else if (ladder[i][start - 1] == '1')
				start--;
		}
	}

	printf("%d\n", start);
	return 0;
}
