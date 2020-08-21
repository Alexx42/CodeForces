#include <iostream>


using namespace std;

void test_case() {
	int n, k;

	cin >> n >> k;
	int a[100];
	int res = 0;
	for (int i = 0 ;i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[k - 1] && a[i] > 0) {
			res++;
		}
	}
	cout << res << endl;
}

int main() {
	test_case();
	return 0;
}
