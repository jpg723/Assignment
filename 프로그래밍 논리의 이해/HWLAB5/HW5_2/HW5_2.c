/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//���� ����
	int radius;
	double area, circumference;

	//radius �Է�
	printf("Enter a radius: ");
	scanf("%d", &radius);

	//area, circumference ���
	area = 3.14159200 * radius * radius;
	circumference = 3.14159200 * 2 * radius;

	//��� ���
	printf("The area of a circle with %d:\t\t%lf\n", radius, area);
	printf("The circumference of a circle with %d:\t%lf\n", radius, circumference);

	return 0;
}