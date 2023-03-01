#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 50

int visited[MAX_VERTICES];

typedef struct GraphType {
	int n;	// ������ ����
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// �׷��� �ʱ�ȭ 
void graph_init(GraphType* g) // �������� ����
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}
// ���� ���� ����
void insert_vertex(GraphType* g, int v) // �������� ����
{
	if (((g->n) + 1) > MAX_VERTICES) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�");
		return;
	}
	g->n++;
}
// ���� ���� ����
void insert_edge(GraphType* g, int start, int end) // �������� ����. ����׷��� ���Կ������� ��������
{
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = 1;
	//g->adj_mat[end][start] = 1;
}

int calc_in_degree(GraphType* g, int v) // �ڵ� �ۼ�
{
	int i, degree = 0;

	for (i = 0; i < v; i++) {
		if (g->adj_mat[v][i] != v)
			degree++;
	}
	return degree;
}

int main(void) // �������� ����
{
	GraphType g;
	int num;
	int u, v;

	graph_init(&g);

	scanf("%d", &num); // ������ ����
	g.n = num;
	scanf("%d %d", &u, &v);
	while (u != -1 && v != -1) {
		insert_edge(&g, u, v);
		scanf("%d %d", &u, &v);
	}

	scanf("%d", &v);
	printf("%d\n", calc_in_degree(&g, v));
}