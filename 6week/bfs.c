#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 20
 
int adj_matrix[MAX_VERTICES+1][MAX_VERTICES+1];
int visited[MAX_VERTICES+1];
 
void graph_init()
{
    int vi,vo;
    for (vi = 0; vi<MAX_VERTICES; vi++){
        for (vo = 0; vo<MAX_VERTICES; vo++){
            adj_matrix[vi][vo] = 0;
        }
        visited[vi] = 0;
    }
}
 
void insert_edge(int u, int v)
{
    // 간선 정보 u->v
    adj_matrix[u][v]=1;
}
 
// 간단 queue
typedef int element;
int  front, rear;
element  queue[MAX_VERTICES+2];
 
void init()
{
    front = rear = 0;
}
 
int is_empty()
{
    return (front == rear);
}
 
void enqueue(element item)
{
    rear++;
    queue[rear] = item;
}
 
element dequeue()
{
    front++;
    return queue[front];
}
 
// BFS 이해가 쉽게 인접 행렬로 구현
void bfs_list(int v)
{
    int w;
    init();
    visited[v] = TRUE;
    printf("%d ", v); 
    enqueue(v);
    while (!is_empty()) {
        v = dequeue();
        for (w = 0; w < MAX_VERTICES; w++ ){
            if (adj_matrix[v][w]==1 && !visited[w]) {
                visited[w] = TRUE;
                printf("%d ", w);
                enqueue(w);
            }
        }
    }
}
 
void main()
{
    int i;
 
    graph_init();

    insert_edge(1, 2);
    insert_edge(1, 8);
    insert_edge(1, 3);
    insert_edge(2, 7);
    insert_edge(3, 4);
    insert_edge(3, 5);
    insert_edge(7, 8);
    insert_edge(7, 6);
    bfs_list(1);
}
