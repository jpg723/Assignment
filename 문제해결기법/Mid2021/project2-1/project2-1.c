#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char arr[]) //역순정렬
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
		
		int sum = A[i] - 48 + B[i] - 48 + carry; //숫자로 변환해 받아올림과 함께 더한다
		//A[i] 또는 B[i]가 null인 경우 불필요한 뺄셈이 발생하므로
		//0 이상이 될 때까지 문자 0의 아스키 코드 값을 더한다
		while (sum < 0) 
			sum += '0';
		
		if (sum > 9) 
			carry = 1; //받아올림
		else 
			carry = 0;
		
		res[i] = sum % 10 + 48; //받아올림 하고 남은 일의 자리 수의 아스키코드를 저장
	}

	if (carry == 1) 
		res[len] = '1'; //가장 큰 자릿수에서 받아올림이 발생하면 배열의 마지막에 1을 추가

	reverse(res); //덧셈이 완료되었으니 역순으로 정렬해 원하는 값으로 복원

	printf("%s", res);
	return 0;
}