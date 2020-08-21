#include <iostream>

using namespace std;

void test_case() {
	int w;

	cin >> w;
	if (w <= 3 || ((w & 1) && w % 2 != 0)) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
}

int main() {
	test_case();
	return 0;
}
