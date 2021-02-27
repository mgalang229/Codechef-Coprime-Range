#include <bits/stdc++.h>

using namespace std;

bool IsPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		r++;
		// find the nearest prime number after 'r' (the last element in the range)
		while (!IsPrime(r)) {
			r++;
		}
		cout << r << '\n';
	}
	return 0;
}
