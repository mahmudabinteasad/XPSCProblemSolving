#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int b;
    while (q--) {
        cin >> b;
        if (b < a[0]) {
            cout << a[0] - 1 << '\n';
        } else if (b > a[m - 1]) {
            cout << n - a[m - 1] << '\n';
        } else {
            auto it = upper_bound(a.begin(), a.end(), b);
            auto it2 = it--;
            int left = *it2, right = *it;
            int m = (left + right) / 2;
            cout << min(abs(right - m), abs(m - left)) << '\n';
        }
    }
   }
    return 0;
}
