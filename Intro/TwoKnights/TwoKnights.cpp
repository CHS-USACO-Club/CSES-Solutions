#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll t; cin >> t; cout << 0 << endl;
    for (ll k = 2 ; k <= t ; k++) {
      cout << (((k * k) * (k * k - 1))/ 2) - (4 * (k - 2) * (k - 1)) << endl;
    }

    return 0;
}