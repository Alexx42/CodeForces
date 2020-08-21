#include <iostream>

using namespace std;

void test_case() {
	int n;

	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[1] == '-')
			x--;
		else
			x++;	
	}

	cout << x << endl;
}

int main() {
	test_case();
}
