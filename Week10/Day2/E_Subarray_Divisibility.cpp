#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<ll> p(n);
   for (ll i = 0; i < n; i++) {
    cin >> p[i];
    }
    map<ll, int> seen;
    seen[0]++;
    ll count = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i] % n;
        sum = (sum + n) % n;
        count += seen[sum];
        seen[sum]++;
    }
    cout << count;
    return 0;
}