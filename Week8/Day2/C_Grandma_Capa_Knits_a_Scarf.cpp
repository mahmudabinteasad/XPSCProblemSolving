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
        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int l = 0, r = n - 1;
            int deletions = 0;
            bool possible = true;
            while (l < r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else {
                    if (s[l] == ch) {
                        l++;
                        deletions++;
                    } else if (s[r] == ch) {
                        r--;
                        deletions++;
                    } else {
                        possible = false;
                        break;
                    }
                }
            }
            if (possible) {
                ans = min(ans, deletions);
            }
        }
        if (ans == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}
