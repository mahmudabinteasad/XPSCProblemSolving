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
    vector<int> a(n);
    map<int, int> mp, mp1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> a[j];
            mp[a[j]] += j;
        }
    }
    for (auto x : mp) {
        mp1[x.second] = x.first;
    }
    for (auto x1 : mp1) {
        cout << x1.second << " ";
    }
    cout << '\n';
   }
    return 0;
}