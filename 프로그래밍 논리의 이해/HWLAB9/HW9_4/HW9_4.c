/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int index = 0, num = 2, i = 2, check = 0;

	do {

		//초기화
		check = 0;
		i = 2;

		do { //소수인지 판별하는 반복문

			if (num == 2) //2는 무조건 소수이므로
				break;

			if (num % i == 0) { //1과 자기 자신 이외의 수로 나눠 떨어지면 소수가 아님
				check = 1; //소수가 아니면 check를 1로 변환하고
				break; //판별 반복문 종료
			}

			i++;

		} while (i < num); 
		
		if (check == 0) { //소수라면 결과 출력
			printf("%d번째 소수는 %d\n", index + 1, num);
			index++;
		}
		
		num++;
	} while (index < 10); //index가 10보다 작을 때까지 반복

	return 0;
}