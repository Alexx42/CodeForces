#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


bool is_sorted(int *k, int size) {
	for (int i = 1; i < size; i++) {
		if (k[i] > k[i + 1])
			return false;
	}
	return true;
}


void test_case() {
	int n;
	int k = 0;
	int min = 1000000000;
	int a[100005], x[100005], y[100005];

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] % min == 0) {
			x[k] = i;
			y[k] = a[i];
			k++;
		}
	}

	sort(y, y + k);
	for (int i = 0; i < k; i++) {
		a[x[i]] = y[i];
	}
	if (is_sorted(a, n)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
}
