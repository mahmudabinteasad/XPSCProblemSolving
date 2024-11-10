#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
   ll n, m, h;
   cin >> n >> m >> h;
   ll time = min(n, m);
   vector<ll> a(n);
   vector<ll> b(m);
   for (ll i = 0; i < n; i++) {
    cin >> a[i];
   }
   for (ll i = 0; i < m; i++) {
    cin >> b[i];
   }
   ll ans = 0;
   sort(a.begin(), a.end(), greater<ll>());
   sort(b.begin(), b.end(), greater<ll>());
   for (ll i = 0; i < time; i++) {
    ans += min(a[i], b[i] * h);
   }
   cout << ans << '\n';
   }
    return 0;
}