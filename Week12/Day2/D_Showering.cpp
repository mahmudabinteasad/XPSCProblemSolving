#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        bool b = false;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            if (v[i].first - prev >= s) {
                b = true;
            }
            prev = v[i].second;
        }
        if (m - prev >= s) {
            b = true;
        }
        if (b) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
