#include <bits/stdc++.h>

using namespace std;

int main() {
	int m = 1; int c = 1;
	string s; cin >> s;
	for (int i = 1; i < s.length(); i++) {
		if (s[i-1] == s[i]) {
			c++;
		} else {
			c = 1;
		}
		m = max(m,c);
	}
	cout << m;
	return 0;
}
