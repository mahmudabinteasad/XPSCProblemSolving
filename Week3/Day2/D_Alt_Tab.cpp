#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<string> v;
   map<string, bool> m;
   while (n--) {
    string s;
    cin >> s;
    v.push_back(s);
   }
   reverse(v.begin(), v.end());
   vector<string> ans;
   for (auto x : v) {
    if (m.find(x) == m.end()) {
        m[x] = true;
        ans.push_back(x);
    }
   }

    for (auto res : ans) {
        cout << res[res.size() - 2] << res[res.size() - 1];
   }
    return 0;
}