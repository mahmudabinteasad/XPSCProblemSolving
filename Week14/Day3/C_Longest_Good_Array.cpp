#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        if (l == r) {
            cout << 1 << '\n';
        } else {
        ll prev = l, ans = 1;
        while (l <= r) {
            ll need = (2 * l) - prev + 1;
            if (need > r) break;
            prev = l;
            l = need;
            ans++;
        }
        cout << ans << '\n';
        }
    }
    return 0;
}
