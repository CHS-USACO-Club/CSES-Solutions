#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n = 0; cin >> n; 
	ll g = 0, t = 0; 
	for (ll i = 1; i < n; i++) {
		cin >> t;
		g += t;
	}
	cout << ((n*(n+1))>>1) - g;
	return 0;
}
