#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans1 = v[n-1] - v[2];
    ll ans2 = v[n-3] - v[0];
    ll ans3 = v[n-2] - v[1];
    ll ans_mn = min({ans1, ans2, ans3});
    cout << ans_mn << '\n';
   }
    return 0;
}