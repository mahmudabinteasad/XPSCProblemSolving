#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (ll i = 0; i < n; i++) 
            cin >> v[i];

        for (ll i = 0; i < n; i += k) {
            for (ll j = 0; j < n; j += k) 
                cout << v[i][j];
            cout << '\n';
        }
    }
    return 0;
}
