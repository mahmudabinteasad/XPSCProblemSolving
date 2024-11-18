#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll a, b, n, sum = 0, mn = LLONG_MAX;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += min(v[i] + 1, a) - 1;
    }
    cout << sum + b << '\n';
   }
    return 0;
}
