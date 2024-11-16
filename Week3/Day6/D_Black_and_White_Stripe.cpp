#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0, l = 0, r = 0, mn = INT_MAX;
    while (r < n) {
        if (s[r] == 'W') {
            count++;
        }
        if (r - l + 1 == k) {
            mn = min(mn, count);
            if (s[l] == 'W') {
                count--;
            }
            l++;
        }
        r++;
    }
    cout << mn << '\n'; 
    }
    return 0;
}
