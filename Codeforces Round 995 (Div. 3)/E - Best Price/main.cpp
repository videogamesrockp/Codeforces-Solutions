#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a (n);
	vector<int> b (n);

	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i ++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	long long ans = 0;
	for (int i = 0; i < n; i ++) {
		int price = a[i];
		int positive_buyers = a.end() - lower_bound(a.begin(), a.end(), price);
		int total_buyers = b.end() - lower_bound(b.begin(), b.end(), price);
		int negative_buyers = total_buyers - positive_buyers;
		if (negative_buyers <= k) {
			long long profit = (long long)total_buyers * price;
			if (profit > ans) {
				ans = profit;
			}
		}
	}

	for (int i = 0; i < n; i ++) {
		int price = b[i];
		int positive_buyers = a.end() - lower_bound(a.begin(), a.end(), price);
		int total_buyers = b.end() - lower_bound(b.begin(), b.end(), price);
		int negative_buyers = total_buyers - positive_buyers;
		if (negative_buyers <= k) {
			long long profit = (long long)total_buyers * price;
			if (profit > ans) {
				ans = profit;
			}
		}
	}

	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i ++) {
		solve();
	}
}
