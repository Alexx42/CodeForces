#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[200005];
void test_case() {
	int n;

	cin >> n;
	int max = 1 << 31;
	int idx_max = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int pos = n - 1;
	while (pos > 0 && a[pos - 1] >= a[pos]) {
		pos--;
	}
	while (pos > 0 && a[pos - 1] <= a[pos]) {
		pos--;
	}
	cout << pos << endl;
}


int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
}
