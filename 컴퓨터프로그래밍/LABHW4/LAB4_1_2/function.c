/*************
LAB4_1_2 20200997 이미지 컴퓨터학과 3학년
*************/
extern float g_i;
float sum(float a, float b);

float sum_2(float a, float b)
{
    return g_i + sum(a, b);
}
float sum(float a, float b)
{
    return a + b;
}