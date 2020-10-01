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

void test_case() {
	int n, r, c;

	read(n);
	r = (int)sqrt(n - 1);
	c = round(sqrt(n));

	if (sqrt(n) > c) {
		write(r * 2 - 1, endl);
	} else {
		write(r  *2, endl);
	}
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
