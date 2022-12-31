#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	ll t,y,x,a;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		cin >> y >> x;
        ll n = max(y,x); ll f = (n-1)*(n-1);
        ll a = (n & 1) ? (f + (x + (n-y))) : (f + (y + (n-x)));
        cout << a << endl;
	}
	return 0;
}