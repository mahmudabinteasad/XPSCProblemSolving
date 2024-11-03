#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    if (n == 5) {
         if (mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1) {
            cout << "YES" << '\n';
         } else {
            cout << "NO" << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
   }
    return 0;
}