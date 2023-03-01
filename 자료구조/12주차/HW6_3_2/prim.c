#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000L

typedef struct GraphType {
	int n;	// 정점의 개수
	int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;

int selected[MAX_VERTICES];
int distance[MAX_VERTICES];

// 최소 dist[v] 값을 갖는 정점을 반환
int connectVertex[MAX_VERTICES];

// 최소 dist[v] 값을 갖는 정점을 반환
int get_min_vertex(int n)
{
    int v = -1, i;
    for (i = 0; i < n; i++) {
        if (!selected[i]) {
            v = i;
            break;
        }
    }

    if (v == -1)
        return -1;

    for (i = 0; i < n; i++)
        if (!selected[i] && (distance[i] < distance[v]))
            v = i;
    return (v);
}

void print_arr(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("%8d", arr[i]);
    }
    printf("\n");
}
void prim(GraphType* g, int s)
{
    int i, u, v;

    for (u = 0; u < g->n; u++) {
        distance[u] = INF;
        connectVertex[u] = s;       // 중요! 시작점 설정, connectVertex = 신장트리집합에 넣을 때 u와 연결된 점
    }

    distance[s] = 0;

    for (i = 0; i < g->n; i++) {
        u = get_min_vertex(g->n);       // 신장트리집합으로부터 비용이 가장 작은 노드
        selected[u] = TRUE;

        if (distance[u] == INF) return;

        for (v = 0; v < g->n; v++){
            if (g->weight[u][v] != INF) {
                if (!selected[v] && g->weight[u][v] < distance[v]) {
                    distance[v] = g->weight[u][v];
                    connectVertex[v] = u;
                }
            }
        }

        printf("<%d %d> %d\n", connectVertex[u], u, distance[u]);
        printf("selected[] = \t");
        print_arr(selected, g->n);
        printf("dist[] = \t");
        print_arr(distance, g->n);
    }
}

int main(void)
{
    GraphType g = { 6,
    {{ 0, 10, INF, 20, 70, INF },
    { 10,  0, 50, 30, 60, INF },
    { INF, 50, 0, INF, 40, 90 },
    { 20, 30, INF, 0, INF, 80 },
    { 70, 60, 40, INF, 0, INF },
    { INF, INF, 90, 80, INF, 0} }
    };

    prim(&g, 0);

    return 0;
}