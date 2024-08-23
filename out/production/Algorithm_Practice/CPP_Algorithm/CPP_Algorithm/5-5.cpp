#include <iostream>
using namespace std;

int recursive_factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return n * recursive_factorial(n - 1);
}

void main() {
	int n = 0;
	cin >> n;

	cout << recursive_factorial(n);
}