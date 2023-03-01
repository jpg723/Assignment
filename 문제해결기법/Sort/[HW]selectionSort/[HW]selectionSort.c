#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
struct Student
{
    int id;
    int korean, english, math;
};
void selection_sort(struct Student* s, int n)
{
    int i = 0, j = 0;
    struct Student temp;

    for (i = 0; i < n - 1; i++)
    {
        int min_idx = 0;

        for (j = 0; j < n - i; j++)
        {
            if (s[min_idx].korean > s[j].korean) {
                min_idx = j;
            }

            temp = s[min_idx];
            s[min_idx] = s[n - i - 1];
            s[n - i - 1] = temp;
        }

    }
}
int main(void)
{
    struct Student* s;
    int n, i;

    srand(time(NULL));

    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    s = (struct Student*)malloc(sizeof(struct Student) * n);

    for (i = 0; i < n; i++)
    {
        s[i].id = i + 1;
        s[i].korean = rand() % 101;
        s[i].math = rand() % 101;
        s[i].english = rand() % 101;

        printf("학번: %2d\t영어: %2d\t수학: %2d\t국어: %2d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
    }

    selection_sort(s, n);

    printf("\n내림차순 정렬\n");
    for (i = 0; i < n; i++)
    {
        printf("학번: %2d\t영어: %2d\t수학: %2d\t국어: %2d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
    }

    free(s);
    return 0;
}