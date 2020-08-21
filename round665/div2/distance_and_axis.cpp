#include <iostream>
#include <math.h>

using namespace std;


void	test_case() {
	int n, k;

	cin >> n >> k;

        if(n < k)
            cout << k - n << endl;

        else if(n % 2 == k % 2)
            cout << 0 << endl;

        else
            cout << 1 << endl;
	return ;
}

int	main() {
	int  t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		test_case();
	}
}
