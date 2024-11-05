#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int odd = 0;
        for (auto [x, y] : mp) {
            if (y % 2 == 1) {
                odd++;
            }
        }
        // odd = max(0, odd - k);
        odd = odd - k;
        if (odd <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
