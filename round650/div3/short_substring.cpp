#include <iostream>
#include <string>
using namespace std;


void	test_case() {
	string s;
	string ans;

	cin >> s;
	int i = 0;
	while (i < s.size()) {
		ans += s[i];
		i += 2;
	}
	cout << ans + s[s.size() - 1] << endl;
}

int 	main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
	return 0;
}
