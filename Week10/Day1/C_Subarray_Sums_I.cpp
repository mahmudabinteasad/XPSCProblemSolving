#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, x;
   cin >> n >> x;
   vector<ll> p(n);
   for (ll i = 0; i < n; i++) {
    cin >> p[i];
    }
    int  count = 0, j = 0;
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
    }
    cout << count << endl;
    return 0;
}