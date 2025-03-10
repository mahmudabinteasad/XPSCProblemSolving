#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        for (int i = 1; i <= (log2(n) + 1); i++) {
            ll x = (1LL << i);
            ll y = (n + (x / 2)) / x;

            if (k <= y) {
                if (k == 1) {
                    cout << (x / 2) << "\n";
                } else {
                    ll ans = (x / 2) + ((k - 1) * x);
                    cout << ans << "\n";
                }
                break;
            } else {
                k -= y;
            }
        }
    }
    return 0;
}
