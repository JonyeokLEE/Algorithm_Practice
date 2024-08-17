#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


void main() {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** field = new int* [n];
	bool** visited = new bool* [n];
	for (int i = 0; i < n; i++) {
		field[i] = new int[m];
		visited[i] = new bool[m];
	}
	int now[2];
	int srow = 0, scol = 0, dir = 0;
	cin >> srow >> scol >> dir;
	now[0] = srow, now[1] = scol;
	int a = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> field[i][j];
			visited[i][j] = false;
		}
	}
	visited[srow][scol] = true;
	
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};

	while (1) {
		if(visited[][])
	}


	for (int i = 0; i < n; i++) {
		delete[] field[i];
	}
	delete[] field;
}