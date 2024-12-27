#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; i ++) {
			cin >> a[i];
		}

		int ans = -1;
		for (int i = 0; i < n; i ++) {
			bool can_solve = true;
			for (int j = 0; j < n; j ++) {
				if (i != j) {
					if ((a[i] - a[j]) % k == 0) {
						can_solve = false;
						break;
					}
				}
			}
			if (can_solve) {
				ans = i + 1;
			}
		}

		if (ans == -1) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
			cout << ans << '\n';
		}
    }
}
