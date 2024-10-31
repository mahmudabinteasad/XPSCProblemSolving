#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t, i = 1;
   cin >> t;
   map<string, int> mp;
   while (t--) {
    string s;
    cin >> s;
    if (mp[s] > 0) {
        cout << s << mp[s] << '\n';
        mp[s]++;
    } else {
    mp[s] = 1;
    cout << "OK" << '\n';
    }
   }
    return 0;
}