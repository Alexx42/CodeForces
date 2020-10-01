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

int a[2][100000] = {0};
void test_case() {
	int n, q, r, c, v = 0;

	// change map useless waste
	read(n, q);
	REP(0, q) {
		read(r, c), --r, --c;
		bool is_forbidden = a[r][c];

		FOR(k, r - 1, r + 2) {
			FOR(l, c - 1, c + 2) {
				if (!(0 <= k && k <= 1 && 0 <= l && l <= n - 1)) {
					continue ;
				}	
				if (k == r && l == c) {
					continue ;
				}
				if (r == k) {
					continue ;
				}
				if (a[k][l]) {
					if (is_forbidden) {
						--v;
					} else {
						++v;
					}
				}
			}
		}
		if (is_forbidden) {
			a[r][c] = 0;
		} else {
			a[r][c] = 1;
		}
		if (v == 0) {
			write("Yes", endl);
		} else {
			write("No", endl);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	test_case();
	return 0;
}
