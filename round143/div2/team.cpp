#include <iostream>

using namespace std;


void	test_case() {
	int n;
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, z;

		cin >> x >> y >> z;
		if (x == 1 && y == 1) {
			res++;
		} else if (x == 1 && z == 1) {
			res++;
		} else if (y == 1 && z == 1) {
			res++;
		}
	}
	cout << res << endl;
}

int	main() {
	test_case();
}
