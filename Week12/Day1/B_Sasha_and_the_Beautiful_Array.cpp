#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll t;
   cin >> t;
   while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    for (ll i = 0; i < n - 1; i++) {
        sum += a[i] - a[i + 1];
    }
    cout << sum << '\n';
   }
    return 0;
}