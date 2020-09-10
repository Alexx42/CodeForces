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


int a[500];
int b[500];
void test_case() {
	int n;

	read(n);
	REP(0, n) {
		read(a[i]);
	}
	REP(0, n) {
		read(b[i]);
	}
	FOR(i, 0, n) {
		FOR(j, i + 1, n) {
			if (a[i] > a[j] && b[i] != b[j]) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
		}
	}
	REP(0, n) {
		write(a[i], " \n"[i == n - 1]);
	}
	REP(0, n) {
		write(b[i], " \n"[i == n - 1]);
	}
	write(endl);
	// if (ans == true) {
	// 	write("No", endl);
	// }
	// else if (is_sorted(a, a + n)) {
	// 	write("Yes", endl);
	// } else {
	// 	write("Yes", endl);
	// }
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
