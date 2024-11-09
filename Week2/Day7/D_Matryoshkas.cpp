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
    sort(v.begin(), v.end());
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (mp[v[i]] != 0) {
            res++;
            while (mp[v[i]] > 0) {
                mp[v[i]]--;
                v[i]++;
            }
        }
    }
    cout << res << '\n';
   }
    return 0;
}