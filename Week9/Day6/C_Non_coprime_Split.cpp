#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll a = 2, b = l - 2, found = 0;
        for (ll i = b; i <= r - 2; i++) {
            if ((a + i) <= r && i % a == 0) {
                b = i;
                found = 1;
                break;
            }
        }
        if (found == 1 && b != 0) {
            cout << a << " " << b << '\n';
        } else {
            cout << "-1" << '\n';
        }
    }
    return 0;
} // haven't finished
