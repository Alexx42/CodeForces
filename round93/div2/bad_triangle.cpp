#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define FOR(i, a, b) for (int i=a; i<b; i++)
#define REP(a, b) FOR(i, a, b)

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

int a[50000];
void test_case() {
	int n, i = 0, j = 1, k = 2;

	read(n);
	REP(0, n) {
		read(a[i]);
	}
	if (a[i] + a[j] > a[n - 1])
		write(-1, endl);
	else
		write(i + 1, " ", j + 1, " ", n, endl);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;

	read(t);
	REP(0, t) {
		test_case();
	}

	return 0;
}
