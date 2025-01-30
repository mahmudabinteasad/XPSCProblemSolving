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
    bool flag = false;
    for (int i = 0; i < 1; i++) {
        if (s[i] == 'a' || s[i + 1] == 'b' || s[i + 2] == 'c') {
            flag = true;
        }
    }
    if (flag) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
   }
    return 0;
}