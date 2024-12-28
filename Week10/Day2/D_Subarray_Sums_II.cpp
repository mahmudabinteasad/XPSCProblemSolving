#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, x;
   cin >> n >> x;
   vector<ll> p(n);
   ll total = 0;
   for (ll i = 0; i < n; i++) {
    cin >> p[i];
    total += p[i];
    }
    int  count = 0, j = 0;
    if (total == x) {
        count++;
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
        if (sum >= x) {
            while (sum > x) {
                sum -= p[j];
                j++;
            }
            if (sum == x) {
                count++;
            }
        }
        if (sum < x) {
            if (p[j] < 0) {
                sum -= p[j];
                j++;
            }
        }
    }
    cout << count << endl;
    return 0;
}