#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool check(int h, int m, int s) {
	if ((h / 10 == 3) || (h % 10 == 3) || (m / 10 == 3) || (m % 10 == 3) || (s / 10 == 3) || (s % 10 == 3)) {
		return true;
	}
	else
		return false;
}

void main() {
	int n = 0;
	cin >> n;

	int count = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if (check(i, j, k))
					count++;
			}
		}
	}
	cout << count;
}