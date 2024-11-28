#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
	int n;
	cin >> n;
	vector<int> v(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
	}
	int freq = 0;
	for (auto it: mp) {
		freq = max(freq, it.second);
	}
 
	int ans = 0;
	while (freq < n) {
		ans++;
		if (n - freq >= freq){
			ans += freq;
			freq *= 2;
		} else {
			ans += n - freq;
            break;
		}
	}
	cout << ans << '\n';
   }
    return 0;
}