#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char arr[]) //��������
{
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}
int main(void) {
	char A[101] = { 0 }, B[101] = { 0 }, res[1000] = { 0 };
	int carry = 0, i, len; 

	scanf("%s%s", A, B);

	reverse(A);
	reverse(B);

	if (strlen(A) > strlen(B))
		len = strlen(A);
	else
		len = strlen(B);

	for (i = 0; i < len; i++) {
		
		int sum = A[i] - 48 + B[i] - 48 + carry; //���ڷ� ��ȯ�� �޾ƿø��� �Բ� ���Ѵ�
		//A[i] �Ǵ� B[i]�� null�� ��� ���ʿ��� ������ �߻��ϹǷ�
		//0 �̻��� �� ������ ���� 0�� �ƽ�Ű �ڵ� ���� ���Ѵ�
		while (sum < 0) 
			sum += '0';
		
		if (sum > 9) 
			carry = 1; //�޾ƿø�
		else 
			carry = 0;
		
		res[i] = sum % 10 + 48; //�޾ƿø� �ϰ� ���� ���� �ڸ� ���� �ƽ�Ű�ڵ带 ����
	}

	if (carry == 1) 
		res[len] = '1'; //���� ū �ڸ������� �޾ƿø��� �߻��ϸ� �迭�� �������� 1�� �߰�

	reverse(res); //������ �Ϸ�Ǿ����� �������� ������ ���ϴ� ������ ����

	printf("%s", res);
	return 0;
}