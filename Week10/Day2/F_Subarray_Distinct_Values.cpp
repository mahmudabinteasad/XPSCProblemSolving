#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n, k;
   cin >> n >> k;
   vector<ll> values(n);
   for (ll i = 0; i < n; i++) {
    cin >> values[i];
   }
   ll ans = 0;
   ll j = 0;
   map<ll, ll> mp;
   for (ll i = 0; i < n; i++) {
    while (j < n && ((ll)mp.size() < k || mp.count(values[j]) > 0)) {
        mp[values[j]]++;
        j++;
    }
    ans += j - i;
    mp[values[i]]--;
    if (mp[values[i]] == 0)
        mp.erase(values[i]);
    }
    cout << ans;
    return 0;
}