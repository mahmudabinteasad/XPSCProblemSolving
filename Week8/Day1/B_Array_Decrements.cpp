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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int ans = 0;
        for (int i = 0; i < n; i++) ans = max(ans, a[i] - b[i]);
        for (int i = 0; i < n; i++) {
            a[i] = max(0, a[i] - ans);
        }
        bool isPossible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                isPossible = false;
                break;
            }
        }
        if (isPossible) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}