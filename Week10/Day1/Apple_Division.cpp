#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   ll sum = 0;
   vector<int> p(n);
   for (int i = 0; i < n; i++) {
    cin >> p[i];
    sum += p[i];
    }
    ll mn = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++) {
        ll sum1 = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum1 += p[i];
            }
        }
        ll sum2 = sum - sum1;
        mn = min(mn, abs(sum1 - sum2));
    }
    cout << mn << endl;
    return 0;
}