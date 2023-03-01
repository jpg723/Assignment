/*************
LAB4_1_2 20200997 이미지 컴퓨터학과 3학년
*************/
#include <stdio.h>

float g_i = 10.0;
float sum_2(float a, float b);

int main(void)
{
    fprintf(stdout, "계산결과는 %f.\n", sum_2(10, 20));
    return 0;
}