#include <bits/stdc++.h>
#include <ostream>
using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> lists (m);
	for (int i = 0; i < m; i ++) {
		cin >> lists[i];
	}
	set<int> known;
	for (int i = 0; i < k; i ++) {
		int a; cin >> a;
		known.insert(a);
	}
	set<int> unknown;
	for (int i = 1; i <= n; i ++) {
		if (!known.count(i)) {
			unknown.insert(i);
		}
	}

	if (unknown.size() > 1) {
		for (int i = 0; i < m; i ++) {
			cout << 0;
		}
	}
	else if (unknown.size() == 0) {
		for (int i = 0; i < m; i ++) {
			cout << 1;
		}
	}
	else {
		for (int i = 0; i < m; i ++) {
			if (unknown.count(lists[i])) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
	}
	cout << endl;
}

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i ++) {
		solve();
	}
}
