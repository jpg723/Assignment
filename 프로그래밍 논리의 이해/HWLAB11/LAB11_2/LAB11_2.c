/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int x, y;

	printf("Enter the number X: ");
	scanf("%d", &x);
	printf("Enter the number Y: ");
	scanf("%d", &y);

	printf("%d ^ %d == %d\n", x, y, pow(x, y)); /* �̺κ��� �Լ� ȣ��� ä�켼�� */
	
	return 0;
}
int pow(int a, int b) 
{
	int pow = 1;

	for (int i = 0; i < b; i++)
		pow *= a;

	return pow;
}