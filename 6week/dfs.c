#include <stdio.h>

int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
int visited[9] = {0,};

// DFS 함수
void DFS(int x){
    int v = sizeof(graph) / sizeof(graph[0]);
    visited[x] = 1;
    printf("%d ", x);
    
    for(int i = 0; i < v; i++) {
        int y = graph[x][i];
        if (!visited[y]) DFS(y);
    }
}

int main(){
  DFS(1);
}
