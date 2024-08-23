#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[9];
bool visited[9];

void dfs(int x) {
    visited[x] = true;
    cout << x << " ";
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y])
            dfs(y);
    }
}

void bfs(int x) {
    visited[x] = true;
    queue<int> q;
    q.push(x);

    while (!q.empty()) {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for (int i = 0; i < graph[front].size(); i++) {
            int y = graph[front][i];
            if (!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main() {
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);

    // ��� 2�� ����� ��� ���� ���� 
    graph[2].push_back(1);
    graph[2].push_back(7);

    // ��� 3�� ����� ��� ���� ���� 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);

    // ��� 4�� ����� ��� ���� ���� 
    graph[4].push_back(3);
    graph[4].push_back(5);

    // ��� 5�� ����� ��� ���� ���� 
    graph[5].push_back(3);
    graph[5].push_back(4);

    // ��� 6�� ����� ��� ���� ���� 
    graph[6].push_back(7);

    // ��� 7�� ����� ��� ���� ���� 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);

    // ��� 8�� ����� ��� ���� ���� 
    graph[8].push_back(1);
    graph[8].push_back(7);

    dfs(1);
    cout << endl;
    for (int i = 0; i < 9; i++)
        visited[i] = false;
    bfs(1);
}