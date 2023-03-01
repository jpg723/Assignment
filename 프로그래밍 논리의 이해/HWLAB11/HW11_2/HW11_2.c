/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	for (int i = 0; i <= 10; i++)
		printf("%d ^ %d == %d\n", 5, i, pow(5, i)); /* 이부분을 함수 호출로 채우세요 */
}
int pow(int a, int b)
{
	int pow = 1;

	for (int i = 0; i < b; i++)
		pow *= a;

	return pow;
}