#include <iostream>
#include <vector>
using namespace std;

int n = 0, m = 0, dir = 0;
int** field;
bool** visited;
int next_index = 0;
int now[2] = { 0,0 }, next_now[2] = { 0,0 };
int dx[4] = { -1, 0, 1, 0 }; // 북, 동, 남, 서
int dy[4] = { 0, 1, 0, -1 };
int count_ = 1, change_count = 0;

bool change_direction() {
    dir -= 1;
    if (dir < 0) {
        dir += 4;
    }
    next_now[0] = now[0] + dx[dir];
    next_now[1] = now[1] + dy[dir];

    // 가보지 않은 칸이 있다면
    if (!visited[next_now[0]][next_now[1]] && !field[next_now[0]][next_now[1]]) {
        now[0] = next_now[0];
        now[1] = next_now[1];
        visited[now[0]][now[1]] = true;
        count_++;
        change_count = 0;
        return true;
    }
    else {
        change_count++;
        if (change_count == 4) {
            next_now[0] = now[0] - dx[dir];
            next_now[1] = now[1] - dy[dir];
            if (!field[next_now[0]][next_now[1]]) {  // 뒤로 갈 수 있으면
                now[0] = next_now[0];
                now[1] = next_now[1];
                change_count = 0;  // 뒤로 이동한 경우, 다시 4방향을 확인할 수 있도록 초기화
            }
            else {
                return false;  // 뒤로도 갈 수 없는 경우 종료
            }
        }
        return true;
    }
}

int main() {
    cin >> n >> m;
    field = new int* [n];
    visited = new bool* [n];
    for (int i = 0; i < n; i++) {
        field[i] = new int[m];
        visited[i] = new bool[m];
    }

    cin >> now[0] >> now[1] >> dir;
    visited[now[0]][now[1]] = true; // 시작지점 방문여부 표시

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> field[i][j];
            visited[i][j] = false;
        }
    }
    visited[now[0]][now[1]] = true;  // 시작 위치는 이미 방문

    while (1) {
        if (!change_direction())
            break;
    }

    cout << count_ << endl;

    for (int i = 0; i < n; i++) {
        delete[] field[i];
        delete[] visited[i];
    }
    delete[] field;
    delete[] visited;

    return 0;
}
