#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;
    ll sum = ((n*(n + 1))/2);
    ll msum = ((n*(n + 1))/4);
    set<int> a, b;
    if (sum & 1) {
        cout << "NO";
    }
    else {
        for (int i = 1; i <= n; ++i) {
            a.insert(i);
        }
        for (int i = n; i >= 1; --i) {
            if (i <= msum) {
                msum -= i;
                a.erase(i);
                b.insert(i);
            }
        }
        cout << "YES\n";
        cout << a.size() << endl;
        for (auto x : a) {
            cout << x << " ";
        }
        cout << endl << b.size() << endl;
        for (auto x : b) {
            cout << x << " "; 
        }     
    }
    return 0;
}