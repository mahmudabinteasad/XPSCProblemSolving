#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, x;
   cin >> n >> x;
   vector<ll> p(n);
//    ll total = 0;
   for (ll i = 0; i < n; i++) {
    cin >> p[i];
    // total += p[i];
    }
    map<ll, int> seen;
    seen[0]++;
    ll count = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
        count += seen[sum - x];
        seen[sum]++;
    }

    cout << count;
    return 0;
}
