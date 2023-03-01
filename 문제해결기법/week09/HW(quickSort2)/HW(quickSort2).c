#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<math.h>
struct student
{
	int id, korean, math, english;
	int student;
};

void swap(struct student* s, int n, int c)
{
	int i = 0;

	for (i = 0; i < n; i++) {

		if (c == 1)
			s[i].student = s[i].korean;

		else if (c == 2)
			s[i].student = s[i].math;

		else if (c == 3)
			s[i].student = s[i].english;

		else
			s[i].student = s[i].id;
	}

}

int partition(struct student* s, int p, int r) {

	int i, j;
	struct student t;

	i = p - 1;

	for (j = p; j < r; j++) {
		if (s[j].student > s[r].student) {
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
void quickSort(int* A, int p, int r) {

	int q;

	if (p < r) {

		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}
int main(void)
{
	int n, choice;
	struct student* s;

	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	s = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		s[i].id = i + 1;
		s[i].english = rand() % 101;
		s[i].math = rand() % 101;
		s[i].korean = rand() % 101;

		printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
	}

	printf("\n");

	while (1)
	{
		printf("���� ���� ���� <1: ����, 2: ����, 3: ����, 4: id(��������), 0: ������>: ");
		scanf("%d", &choice);


		if (choice == 1)
		{
			swap(s, n, choice);
			quickSort(s, 0, n - 1);

			for (int i = 0; i < n; i++)
			{
				printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 2)
		{
			swap(s, n, choice);
			quickSort(s, 0, n - 1);


			for (int i = 0; i < n; i++)
			{
				printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 3)
		{
			swap(s, n, choice);
			quickSort(s, 0, n - 1);


			for (int i = 0; i < n; i++)
			{
				printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 4)
		{
			swap(s, n, choice);
			quickSort(s, 0, n - 1);


			for (int i = n - 1; i >= 0; i--)
			{
				printf("�й� : %d\t���� : %d\t���� : %d\t���� : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else
			break;
	}

	free(s);
	return 0;


}