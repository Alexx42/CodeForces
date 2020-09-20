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
	ll a, b, x, y, n;
	
	read(a, b, x, y, n);
	
	ll ax = a - x;
	ll by = b - y;
	ll mina = min(ax, n);
	ll minb = min(by, n);
	
	ll aprime = a - mina;
	ll bprime = b - minb;
	
	
	if (aprime < bprime) {
		if (a - x < n) {
			b -= min(n - (a - x), b - y);
		}
		a -= mina;
	} else {
		if (b - y < n) {
			a -= min(n - (b - y), a - x);
		}
		b -= minb;
		
	}
	write(a * b, endl);
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
