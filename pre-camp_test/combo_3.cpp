//////////////////////////////
// Author: whatisit
// Date: 2020-05-28 05:58 
//////////////////////////////
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	long long ans = 0;
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j) {
			for (int k = 0; k <= n; ++k) {
				for (int t = 0; t <= n; ++t) {
					if ((i+j+k+t) <= n) ++ans;
				}
			}
		}
	}
	cout << "n, ans:\t" << n << " " << ans << endl;
}

int main() {
	//cin.tie(0); ios_base::sync_with_stdio(0);
	for (int i = 0; i < 11; ++i) {
		solve(i);
	}
	solve(100);
	return 0;
}
