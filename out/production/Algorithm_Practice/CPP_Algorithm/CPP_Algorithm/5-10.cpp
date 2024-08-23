#include <iostream>
#include <vector>
using namespace std;

int n, m, cnt;
int map[1000][1000];

bool dfs(int y, int x) {
	if (y <= -1 || y >= n || x <= -1 || x >= m)
		return false;

	if (!map[y][x]) {
		map[y][x] = 1;
		dfs(y - 1, x);
		dfs(y + 1, x);
		dfs(y, x-1);
		dfs(y, x+1);
		return true;
	}
	else
		return false;
}

void main() {
	n = 0, m = 0, cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dfs(i, j)) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}