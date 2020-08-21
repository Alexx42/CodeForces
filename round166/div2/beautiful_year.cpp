#include <iostream>
#include <map>

using namespace std;

bool is_beautiful(int year) {
	map<int, bool> seen;

	while (year > 0) {
		int x = year % 10;
		if (seen.find(x) != seen.end()) {
			return false;
		} else {
			seen[x] = true;
		}
		year /= 10;
	}
	return true;
}

void	test_case() {
	int n;

	cin >> n;
	int i = n + 1;
	while (!is_beautiful(i)) {
		i++;
	}
	cout << i << endl;
}

int main() {
	test_case();
}
