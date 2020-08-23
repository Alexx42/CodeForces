#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

template <typename ...Args>
void write(Args && ...args) {
	(cout << ... << args);
}

template <typename ...Args>
void read(Args && ...args) {
	(cin >> ... >> args);
}

void test_case() {
	int n;

	read(n);
	vi v(n);
	vi max(n);
	map<int, int> f;
	for (int i = 0; i < n; i++) {
		read(v[i]);
		max[i] = n - i;
		f[v[i]] = i;
	}
	int i = 0, j = 0, k = 0;
	for (int tmp = 0; tmp < n; tmp++) {
		j = f[max[tmp]];
		i = min_element(v.begin(), v.begin() + j) - v.begin();
		k = min_element(v.begin() + j + 1, v.end()) - v.begin();
		if (i < n && k < n && i < j && j < k && v[i] < v[j] && v[j] > v[k]) {
			write("YES\n", i + 1, " ", j + 1, " ", k + 1, "\n");
			return ;
		}
	}
	write("NO\n");
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
	return 0;
}