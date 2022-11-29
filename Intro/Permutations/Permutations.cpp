#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	if (n == 1) {
		cout << "1";
	}
	else if (n < 4) {
		cout << "NO SOLUTION";
	}
	else {
		for (ll i = 2; i <= n; i += 2) {
			cout << i << " ";
		}
		for (ll i = 1; i <= n; i += 2) {
			cout << i << " ";
		}
	}
	return 0;
}
