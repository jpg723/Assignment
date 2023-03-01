#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "minheap.h"
#include "unionfind.h"

#define MAX_VERTICES 100
#define INF 9999

typedef struct GraphType {
	int n;					// 정점의 개수
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

// 그래프 초기화 
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

// 인접 행렬이나 인접 리스트에서 간선들을 읽어서 최소 히프에 삽입 
// 현재는 예제 그래프의 간선들을 삽입한다.
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

// kruskal의 최소 비용 신장 트리 프로그램
void kruskal(GraphType* g, GraphType* t)
{
	int edge_accepted = 0;
	HeapType h;
	int uset, vset;
	element e;

	init(&h);
	insert_all_edges(&h, g);
	set_init(g->n);

	printf("선택된 간선(순서대로):\n");

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
	GraphType g, t;		// 입력 그래프, 결과 트리

	graph_init(&g);
	//read_graph(&g, "input1.txt");
	read_graph(&g, "input.txt");

	graph_init(&t);
	t.n = g.n;

	kruskal(&g, &t);

	printf("\n파일로 출력:\n");
	write_graph(&t, "output.txt");
	write_graph(&t, NULL);	// to stdout
}
