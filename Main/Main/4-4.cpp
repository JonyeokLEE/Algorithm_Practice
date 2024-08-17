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
	for (int i = 0; i < n; i++) {
		field[i] = new int[m];
	}
	int now[2];
	int srow = 0, scol = 0, sdir = 0;
	cin >> srow >> scol >> sdir;
	now[0] = srow, now[1] = scol;
	
	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,-1,0,1};




	for (int i = 0; i < n; i++) {
		delete[] field[i];
	}
	delete[] field;
}