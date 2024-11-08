#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    vector<ll> v(n);
    priority_queue<ll> s;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            if (!s.empty()) {
                ans += s.top();
                s.pop();
            }
        } else {
            s.push(v[i]);
        }
    }
    cout << ans << '\n';
   }
    return 0;
}