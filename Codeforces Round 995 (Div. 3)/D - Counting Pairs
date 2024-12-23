#include <bits/stdc++.h>
#include <ostream>
using namespace std;

typedef long long ll;

void solve() {
	int n; cin >> n;
	ll x, y; cin >> x >> y;

	vector<int> a (n);
	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}

	ll sum = 0;
	for (int i = 0; i < n; i ++) {
		sum += a[i];
	}

	ll ans = 0;
	sort(a.begin(), a.end());	
	x = sum - x;
	y = sum - y;

	for (int i = 0; i < n; i ++) {
		int highest_not = upper_bound(a.begin(), a.end(), x - a[i]) - a.begin();
		int lowest_yes = lower_bound(a.begin(), a.end(), y - a[i]) - a.begin();
		lowest_yes = max(lowest_yes, i + 1);
		highest_not = max(highest_not, i + 1);
		ans += highest_not - lowest_yes;
	}

	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i ++) {
		solve();
	}
}

// 3 4 4 5 6 9
// sum = 31
// x = 9, y = 4
// ans = 4
// 4
//
