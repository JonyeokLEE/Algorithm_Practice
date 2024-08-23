#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[201][201];
int n, m, cnt;

void bfs(void) {

}

void main() {
	n = 0, m = 0, cnt = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> map[i][j];
		}
	}

	bfs();
}