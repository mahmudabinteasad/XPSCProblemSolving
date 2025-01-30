#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n, mn = INT_MAX;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    // cout << mn << '\n';
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            a[i] = mn + 1;
            break;
        }
    }
    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= a[i];
    }
    cout << sum << '\n';
   }
    return 0;
}