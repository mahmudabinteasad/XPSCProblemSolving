#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll n, m;
   cin >> n >> m;
   vector<ll> a(n), b(m);
   for (ll i = 0; i < n; i++) {
      cin >> a[i];
   }
   for (ll i = 0; i < m; i++) {
      cin >> b[i];
   }
   ll mx = max(n, m);

   vector<ll> c;
   ll l = 0, r = 0;

   while (l < n && r < m) {
    if (a[l] <= b[r]) {
        c.push_back(a[l]);
        l++;
    } else {
        c.push_back(b[r]);
        r++;
        }
   }
   if (mx == n) {
    while (l < m) {
        c.push_back(b[l]);
        l++;
    } 
   } else {
    while (r < m) {
        c.push_back(b[r]);
        r++;
    }
   }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << "\n";

   return 0;
}