#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = INT_MAX;
	for (int i = 1; i < n - 1; i++) {
		vector<int> temp;
		// create a list wherein the current element being iterated upon is NOT included
		for (int j = 0; j < n; j++) {
			if (a[j] == a[i]) {
				continue;
			}
			temp.emplace_back(a[j]);
		}
		int diff = INT_MIN;
		// find the maximum difference between two adjacent elements (next minus current)
		for (int j = 0; j < (int) temp.size() - 1; j++) {
			diff = max(diff, temp[j + 1] - temp[j]);
		}
		// find the mininum value between the differences produced
		ans = min(ans, diff);
	}
	cout << ans << '\n';
	return 0;
}
