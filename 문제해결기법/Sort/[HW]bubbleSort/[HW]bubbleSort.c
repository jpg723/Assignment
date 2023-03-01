#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<math.h>
struct Student
{
	int id, korean, math, english;
	int student;
};

void swap(struct Student* s, int n, int c)
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
void bubble_sort(struct Student* s, int n)
{
	int i, j;
	struct Student temp;

	for (i = 0; i < n - 1; i++) 
	{

		for (j = 0; j < n - i - 1; j++) 
		{

			if (s[j].student < s[j + 1].student) 
			{
				temp = s[j + 1];
				s[j + 1] = s[j];
				s[j] = temp;
			}
		}
	}
}

int main(void) 
{
	int n, choice;
	struct Student* s;

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

	while (1)
	{
		printf("정렬 기준 선택 <1: 국어, 2: 수학, 3: 영어, 4: id(오름차순), 0: 끝내기>: ");
		scanf("%d", &choice);


		if (choice == 1)
		{
			swap(s, n, choice);
			bubble_sort(s, n);

			for (int i = 0; i < n; i++)
			{
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 2)
		{
			swap(s, n, choice);
			bubble_sort(s, n);


			for (int i = 0; i < n; i++)
			{
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 3)
		{
			swap(s, n, choice);
			bubble_sort(s, n);


			for (int i = 0; i < n; i++)
			{
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else if (choice == 4)
		{
			swap(s, n, choice);
			bubble_sort(s, n);


			for (int i = n - 1; i >= 0; i--)
			{
				printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
			}
			printf("\n");
		}

		else
			break;
	}

	free(s);
	return 0;


}