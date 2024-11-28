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
    int n = s.length();
    if (s == "()") {
        cout << "NO" << '\n';
    } else {
    int i = 0;
    bool check = false;

    while (i < n - 1) {
        if (s.substr(i, 2) == ")(") {
            check = true;
            break;
        }
        i++;
    }

    string ans = "";
    if (check) {
        for (int i = 0; i < n; i++) {
            ans += "(";
        }
        for (int i = 0; i < n; i++) {
            ans += ")";
        }
        cout << "YES" << '\n';
        cout << ans << '\n';
    } else {
        for (int i = 0; i < n; i++) {
            ans += "()";
        }
        if (ans == s) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << ans << '\n';
        }
    }
    }
   }
    return 0;
} // accepted