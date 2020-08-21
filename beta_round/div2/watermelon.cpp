#include <iostream>

using namespace std;

void test_case() {
	int w;

	cin >> w;

	if (w % 2 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	test_case();
	return 0;
}
