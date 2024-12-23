#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b, c; cin >> n >> a >> b >> c;

	int ans = n/(a + b + c);
	ans *= 3;
	int mod = n%(a + b + c);

	if (mod > 0) {
		ans ++;
	}
	if (mod > a) {
		ans ++;
	}
	if (mod > a + b) {
		ans ++;
	}
	cout << ans << endl;

}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i ++) {
		solve();
	}
}
