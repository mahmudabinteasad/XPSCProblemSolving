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
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < n; ) {
        if ((i + 2 < n && s[i + 2] == '0') && (i + 3 >= n || s[i + 3] != '0')) {
            v.push_back(s.substr(i, 2));
            i += 2;
        } else {
            v.push_back(s.substr(i, 1));
            i++;
        }
    }
    for (auto x : v) {
        if (x != "0") {
            int n = 0;
            for (char c : x) {
                n = n * 10 + (c - '0');
            }
            char ans = char(n + 96);
            cout << ans;
        }
    }
    cout << '\n';
   }
    return 0;
}