/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i, j, k;
	double x, y, z;
	// �ڵ� �� ��ȯ
	ch = 'A' + 1;// +�����ڴ� �������� �������� ���������� �����Ƿ� ������'A' ' ������ 65 �� ��ȯ
	printf("ch �� �ƽ�Ű���� %d �̰� ���ڷ� ǥ���ϸ� %c\n", ch, ch);
	ch = 'A' + 32;
	printf("ch �� �ƽ�Ű���� %d �̰� ���ڷ� ǥ���ϸ� %c\n\n", ch, ch);
	i = 9.99;
	// �Ҽ������ϰ��� �߷��������� Compile �� �츮���� warning �� �ش�. �׳� �����ص� ����.
	printf("�ڵ� �� ��ȯ ��� : i = %d\n", i);
	x = 10; // ���⼭ � ��ȯ�� �Ͼ�°�? ������ ��� 10 �� double �� ��� 10.0 �� �ȴ�
	printf("�ڵ� �� ��ȯ ��� : x = %f\n", x);
	x = 10 + 9.99;
	printf("�ڵ� �� ��ȯ ��� : x = %f\n\n", x);
	// ������ ��� 10 �� double �� 10.0 �� �ȴ�.
	// �̴� double �� 9.99 �� ���Ͽ� �Ǽ��� ������ �Ǿ��⶧���̴�.
	j = 10; k = 4;
	y = 10.0; z = 4.0;
	printf("���� �� ��ȯ(Casting �� ����)\n");
	x = (double)j / k;
	printf("1: x = %f\n", x);
	x = (double)(j / k);
	printf("2: x = %f\n\n", x);
	x = (int)y / z;
	printf("3: x = %f\n", x);
	x = (int)(y / z);
	printf("4: x = %f\n\n", x);
	x = j / k * k;
	printf("5: x = %f\n", x);
	x = (double)j / k * k;
	printf("6: x = %f\n", x);
	x = (double)(j / k) * k;
	printf("7: x = %f\n", x);
	x = j / (double)k * k;
	printf("8: x = %f\n", x);
	x = j / k * (double)k;
	printf("9: x = %f\n", x);

	return 0;
}