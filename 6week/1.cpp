#include <bits/stdc++.h>

using namespace std;

bool visited[9];
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

// DFS 함수 정의
void dfs(int x) {
    // 현재 노드를 방문 처리
    visited[x] = true;
    cout << x << ' ';
    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for (int node : graph[x]) {
        if (!visited[node]) {
            dfs(node);
        }
    }
}

// BFS 함수 정의
void bfs(int x) {
    queue<int> q;
    q.push(x);
    // 현재 노드를 방문 처리
    visited[x] = true;
    // 큐가 빌 때까지 반복
    while(!q.empty()) {
    	// 큐에서 하나의 원소를 뽑아 출력
        int x = q.front();
        q.pop();
        cout << x << ' ';
        // 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for(int i : graph[x]) {
            int y = graph[x][i];
            if(!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main() {
	dfs(1);
  bfs(1);
  return 0;
}
