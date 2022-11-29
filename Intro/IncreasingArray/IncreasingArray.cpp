#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	ll sum = 0; ll diff = 0;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (i !=  0) {
			if (a[i] < a[i-1]) {
				ll diff = (a[i-1] - a[i]);
				sum += diff;
				a[i] = a[i] + diff;
			}
		}
	}
	cout << sum;
	return 0;
}
