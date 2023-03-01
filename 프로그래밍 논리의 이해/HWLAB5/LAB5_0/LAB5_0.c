/*컴퓨터학과 20200997 이미지*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i, j, k;
	double x, y, z;
	// 자동 형 변환
	ch = 'A' + 1;// +연산자는 문자형과 정수형을 연산항으로 가지므로 문자형'A' ' 정수형 65 로 변환
	printf("ch 의 아스키값은 %d 이고 문자로 표현하면 %c\n", ch, ch);
	ch = 'A' + 32;
	printf("ch 의 아스키값은 %d 이고 문자로 표현하면 %c\n\n", ch, ch);
	i = 9.99;
	// 소수점이하값이 잘려나감으로 Compile 시 우리에게 warning 을 준다. 그냥 진행해도 좋다.
	printf("자동 형 변환 결과 : i = %d\n", i);
	x = 10; // 여기서 어떤 변환이 일어나는가? 정수형 상수 10 이 double 형 상수 10.0 이 된다
	printf("자동 형 변환 결과 : x = %f\n", x);
	x = 10 + 9.99;
	printf("자동 형 변환 결과 : x = %f\n\n", x);
	// 정수형 상수 10 이 double 형 10.0 이 된다.
	// 이는 double 형 9.99 로 인하여 실수형 덧셈이 되었기때문이다.
	j = 10; k = 4;
	y = 10.0; z = 4.0;
	printf("강제 형 변환(Casting 에 의한)\n");
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