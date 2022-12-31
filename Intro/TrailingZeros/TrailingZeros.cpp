#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    long long n, i = 5, a = 0;
    cin >> n;
    while (i <= n) {
        a += n / i;
        i *= 5;
    }
    cout << a << endl;
    return 0;
}