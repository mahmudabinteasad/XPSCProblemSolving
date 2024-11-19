#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--) {
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        v[i] = v[i] + i + 1;
    }
    ll sum = 0, count = 0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        // v[i] = v[i] + i + 1;
        sum += v[i];
        if (sum <= c) {
            count++;
        }
    }
    cout << count << '\n';
    }
    return 0;
}