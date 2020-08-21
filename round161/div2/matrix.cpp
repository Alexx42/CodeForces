#include <iostream>
#include <math.h>

using namespace std;

void test_case() {
	int one_x = 0;
	int one_y = 0;
	int one;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> one;
			if (one == 1) {
				one_x = j;
				one_y = i;
				break ;
			}		
		}
		if (one == 1)
			break;
	}

	int res = abs(2- one_x) + abs(2 - one_y);
	cout << res << endl;
}

int main() {
	test_case();
	return 0;
}
