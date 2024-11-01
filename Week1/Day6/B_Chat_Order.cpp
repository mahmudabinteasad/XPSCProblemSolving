#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<string> v;
   map<string, bool> mp;
   while (n--) {
    string s;
    cin >> s;
    v.push_back(s);
   }
   reverse(v.begin(), v.end());
   vector<string> result;
   for (auto x : v) {
    if (mp.find(x) == mp.end()) {
        mp[x] = true;
        result.push_back(x);
    }
   }
    for (auto ans : result) {
    cout << ans << '\n';
   }
    return 0;
}
