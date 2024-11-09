#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    string s2;
    cin >> s2;

    sort(v.begin(), v.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < m; i++) {
        s[v[i] - 1] = s2[i];
    }
    cout << s << '\n';
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i];
    // }
    // cout << '\n';
   }
    return 0;
}