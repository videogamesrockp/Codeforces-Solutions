#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n; cin >> n;
	long long ans = 1;

	while (n > 3) {
		ans *= 2;
		n/= 4;
	}

	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while (t--) solve();
}
