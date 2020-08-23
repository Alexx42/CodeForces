#include <bits/stdc++.h>

using namespace std;

#define FOR(a, b) for (int i = a; i<b; i++)

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

int a[100];
void test_case() {
	int n;

	read(n);
	map<int, int> f;
	
	FOR(0, n) {
		f[i] = 0;
	}
	int count = 0;
	FOR(0, 2 * n) {
		int x;
		read(x);
		if (f[x] == 0) {
			a[count] = x;
			count++;
			f[x] = 1;
		}
		if (count == n + 1) {
			break ;
		}
	}
	FOR(0, n) {
		write(a[i], " ");
	}
	write("\n");
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;

	read(t);
	FOR(0, t) {
		test_case();
	}
	return 0;
}