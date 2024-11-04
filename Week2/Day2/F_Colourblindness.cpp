#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> r1(n), r2(n);
        for (int i = 0; i < n; i++) {
            cin >> r1[i];
            if (r1[i] == 'G') r1[i] = 'B';
        }
        for (int i = 0; i < n; i++) {
            cin >> r2[i];
            if (r2[i] == 'G') r2[i] = 'B';
        }
        if (r1 == r2) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
