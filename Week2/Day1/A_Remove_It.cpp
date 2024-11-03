#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n, x;
   cin >> n >> x; 
   vector<ll> a(n);
   vector<ll> v;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != x) {
            v.push_back(a[i]);
        }
    }
   for (auto x: v) {
    cout << x << " ";
   }
    return 0;
}