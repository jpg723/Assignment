/*************
LAB4_1_2 20200997 �̹��� ��ǻ���а� 3�г�
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