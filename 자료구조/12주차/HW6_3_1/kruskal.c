#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "minheap.h"
#include "unionfind.h"

#define MAX_VERTICES 100
#define INF 9999

typedef struct GraphType {
	int n;					// ������ ����
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// �׷��� �ʱ�ȭ 
void graph_init(GraphType* g)
{
	int i, j;

	g->n = 0;

	for (i = 0; i < MAX_VERTICES; i++) {
		for (j = 0; j < MAX_VERTICES; j++)
			g->adj_mat[i][j] = INF;
	}
}

/*  */
void read_graph(GraphType* g, char* filename)
{
	int number, u, v, weight;
	GraphType* node;
	FILE* fp;
	fp = fopen(filename, "rt");

	if (fp == NULL)
	{
		printf("file open error!\n");
		return;
	}

	fscanf(fp, "%d", &number);
	g->n = number;

	while (fscanf(fp, "%d %d %d\n", &u, &v, &weight) != EOF) 
	{
		g->adj_mat[u][v] = weight;
		g->adj_mat[u][v] = weight;
	}

	fclose(fp);
}

void write_graph(GraphType* g, char* filename)
{
	int u, v;
	FILE* fp;
	GraphType* node;

	if (filename == NULL) 
		fp = stdout;
	else
	{
		fp = fopen(filename, "w");

		if (fp == NULL)
		{
			printf("file %s open error!\n", filename);
			return;
		}
	}

	fprintf(fp, "%d\n", g->n);

	for (u = 0; u < g->n; u++) {
		for (v = 0; v < g->n; v++) {
			if (g->adj_mat[u][v] != INF)
				fprintf(fp, "%d %d %d\n", u, v, g->adj_mat[u][v]);
		}
	}

	if (filename != NULL)
		fclose(fp);

}

// ���� ����̳� ���� ����Ʈ���� �������� �о �ּ� ������ ���� 
// ����� ���� �׷����� �������� �����Ѵ�.
void insert_heap_edge(HeapType* h, int u, int v, int weight) {
	element e;
	e.u = u;
	e.v = v;
	e.key = weight;
	insert_min_heap(h, e);
}

void insert_all_edges(HeapType* h, GraphType* g)
{
	int u, v;

	for (u = 0; u < g->n; u++) {
		for (v = 0; v < g->n; v++) {
			if (g->adj_mat[u][v] != INF)
				insert_heap_edge(h, u, v, g->adj_mat[u][v]);
		}

	}
}

// kruskal�� �ּ� ��� ���� Ʈ�� ���α׷�
void kruskal(GraphType* g, GraphType* t)
{
	int edge_accepted = 0;
	HeapType h;
	int uset, vset;
	element e;

	init(&h);
	insert_all_edges(&h, g);
	set_init(g->n);

	printf("���õ� ����(�������):\n");

	while (edge_accepted < g->n - 1)
	{
		e = delete_min_heap(&h);
		uset = set_find(e.u);
		vset = set_find(e.v);

		if (uset != vset)
		{
			t->adj_mat[e.u][e.v] = e.key;
			printf("(%d %d) %d\n", e.u, e.v, e.key);
			edge_accepted++;
			set_union(uset, vset);
		}
	}
}

main()
{
	GraphType g, t;		// �Է� �׷���, ��� Ʈ��

	graph_init(&g);
	//read_graph(&g, "input1.txt");
	read_graph(&g, "input.txt");

	graph_init(&t);
	t.n = g.n;

	kruskal(&g, &t);

	printf("\n���Ϸ� ���:\n");
	write_graph(&t, "output.txt");
	write_graph(&t, NULL);	// to stdout
}
