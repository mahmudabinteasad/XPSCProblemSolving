#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n), brr(q);
        for (ll i = 0; i < n; i++) cin >> arr[i];

        for (ll i = 0; i < q; i++) cin >> brr[i];

        set<ll> hs;
        for (ll i = 0; i < q; i++) {
            if (hs.count(brr[i])) continue;
            hs.insert(brr[i]);
            for (ll j = 0; j < n; j++) {
                if (arr[j] % (1 << brr[i]) == 0) 
                    arr[j] += (1 << (brr[i] - 1));
            }
        }
        for (auto i : arr) cout << i << " ";
        cout << '\n';
    }
    return 0;
}