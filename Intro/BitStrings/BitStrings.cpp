#include <bits/stdc++.h>

using namespace std;

long long BinExpMod(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    long long n; cin >> n;
    cout << BinExpMod(2,n,1000000007) << endl;
}