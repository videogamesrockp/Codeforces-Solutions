#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> days_monocarp (n);
	vector<int> days_stereocarp(n);

	for (int i = 0; i < n; i ++) {
		cin >> days_monocarp[i];
	}

	for (int i = 0; i < n; i ++) {
		cin >> days_stereocarp[i];
	}

	int ans = 0;
	for (int i = 0; i < n - 1; i ++) {
		int diff = max(0, days_monocarp[i] - days_stereocarp[i + 1]);
		ans += diff;
	}

	ans += days_monocarp[n - 1];

	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i ++) {
		solve();
	}
}
