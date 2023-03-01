#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<math.h>
struct student
{
	int id; //학번. 1번 부터 부여 ..
	int korean, english, math;
};
int partition(struct student* s, int p, int r) {

	int i, j;
	struct student t;

	i = p - 1;

	for (j = p; j < r; j++) {
		if (s[j].korean > s[r].korean) {
			i++;
			t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}

	i++;
	t = s[i];
	s[i] = s[r];
	s[r] = t;

	return i;

}
void quickSort(int *A, int p, int r) {

	int q;

	if (p < r) {

		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}
int main()
{
	int i, n;
	struct student* s;

	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);

	s = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		s[i].id = i + 1;
		s[i].english = rand() % 101;
		s[i].math = rand() % 101;
		s[i].korean = rand() % 101;

		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	}

	printf("\n");

	quickSort(s, 0, n - 1);

	printf("\n내림차순 정렬\n");
	for (i = 0; i < n; i++)
	{
		printf("학번: %2d\t영어: %2d\t수학: %2d\t국어: %2d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	}

	free(s);
	return 0;
};