#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void arr_info(char a[][10], int n){
	
	printf("%s\n", a[n]);
	for (; (n--) >= 0;)
		printf("%s", a[n]);
}
int main() {

	char s1[30] = "C", s2[40] = "case";
	char s3[2][10] = { "c", "99" };

	strcmp(s1, s2) ? printf("Y\n"): printf("n\n");
	strcat(s1, s2);
	printf("%d %d\n", strlen(s1), sizeof(s1));
	arr_info(s3, 2);
	return 0;
}