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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    int count = 0;
    for (auto x: mp) {
        if (x.second > 2) {
            count += x.second / 3;
        }
    }
    cout << count << '\n';
   }
    return 0;
}