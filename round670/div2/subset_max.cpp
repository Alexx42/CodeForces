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

# define N 10

int a[N];
map<int, int> f;
void test_case() {
	int n, max = INT_MIN;

	f.clear();
	read(n);
	REP(0, n) {
		read(a[i]);
		f[a[i]]++;
		if (a[i] >  max) {
			max = a[i];
		}
	}
	int count = 0;
	ll b = 0;
	REP(0, max + 1) {
		if (f[i]) {
			f[i]--;
		}
		else if (f[i] == 0) {
			b += i;
			count++;
			break ;
		}
	}
	if (count == 0) {
		b += max + 1;
		count = 1;
	}
	int max_2 = INT_MIN;
	for (auto it = f.begin(); it != f.end(); it++) {
			if (it->first > max_2 && it->second != 0) {
				max_2 = it->first;
			}
	}
	bool check = false;
	REP(0, max_2 + 1) {
		if (f[i]) {
			check = true;
		}
		if (f[i] == 0) {
			b += i;
			count++;
			break ;
		}
	}
	if (count == 0) {
		b += max + 1;
	} else if (check == true && count == 1) {
		b += max_2 + 1;
	}
	write(b, endl);
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
