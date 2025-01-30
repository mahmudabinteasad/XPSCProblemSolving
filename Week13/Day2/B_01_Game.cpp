#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            count0++;
        } else {
            count1++;
        }
    }
    // cout << count0 << '\n';
    int mn = min(count0, count1);
        if (mn % 2 == 0) {
            cout << "NET" << '\n';
        } else {
        cout << "DA" << '\n';
        }
   }
    return 0;
}