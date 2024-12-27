#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
		
		int ans = 1, ones = 1;

		while (true) {
			if (ones >= n) {
				cout << ans << '\n';
				break;
			}

			ans ++;
			ones *= 2;
			ones += 2;
		}
    }
}
