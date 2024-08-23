#include <iostream>
#include <vector>
using namespace std;

int n = 0, m = 0, dir = 0;
int** field;
bool** visited;
int next_index = 0;
int now[2] = { 0,0 }, next_now[2] = { 0,0 };
int dx[4] = { -1, 0, 1, 0 }; // ��, ��, ��, ��
int dy[4] = { 0, 1, 0, -1 };
int count_ = 1, change_count = 0;

bool change_direction() {
    dir -= 1;
    if (dir < 0) {
        dir += 4;
    }
    next_now[0] = now[0] + dx[dir];
    next_now[1] = now[1] + dy[dir];

    // ������ ���� ĭ�� �ִٸ�
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
            if (!field[next_now[0]][next_now[1]]) {  // �ڷ� �� �� ������
                now[0] = next_now[0];
                now[1] = next_now[1];
                change_count = 0;  // �ڷ� �̵��� ���, �ٽ� 4������ Ȯ���� �� �ֵ��� �ʱ�ȭ
            }
            else {
                return false;  // �ڷε� �� �� ���� ��� ����
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
    visited[now[0]][now[1]] = true; // �������� �湮���� ǥ��

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> field[i][j];
            visited[i][j] = false;
        }
    }
    visited[now[0]][now[1]] = true;  // ���� ��ġ�� �̹� �湮

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
