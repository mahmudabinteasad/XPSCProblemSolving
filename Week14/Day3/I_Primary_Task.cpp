#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.length();
        if (len < 3) {
            cout << "NO" << '\n';
        } else {
            if (len == 3) {
                if (s[0] == '1' && s[1] == '0' && s[2] != '1' && s[2] != '0') {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
            } else {
                if (s[0] == '1' && s[1] == '0' && s[2] != '0') {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
            }
        }
    }
    return 0;
} //not accepted
