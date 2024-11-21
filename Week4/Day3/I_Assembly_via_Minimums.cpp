#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) / 2;
        vector<ll> b(m);
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<ll> a;
        ll index = 0;
        for (ll i = 0; i < n - 1; i++) {
            a.push_back(b[index]);
            index += n - i - 1;
        }
        a.push_back(1000000000); 
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

