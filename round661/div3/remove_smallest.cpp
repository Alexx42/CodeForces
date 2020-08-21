#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void		test_case() {
	int n;

	cin >> n;
	vector<int> v(n);
	for (int i = 0;i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int i = 0;
	int j = 1;

	while (j < v.size() && v.size() > 1) {
		if (abs(v[i] - v[j]) <= 1) {
			v.erase(v.begin() + i);
		} else {
			i++;
			j++;
		}
	}
	if (v.size() == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return ;
}

int		main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
}

