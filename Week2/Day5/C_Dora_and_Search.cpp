#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll mn = 1, mx = n, flag = 0;
    for (ll i = 0, j = n - 1; i < n && j >= 0; ) {
        if ((a[i] != mn && a[i] != mx) && (a[j] != mn && a[j] != mx)){
            cout << i + 1 << " " << j + 1 << '\n';
            flag = 1;
            break;
        } else if (a[i] == mn || a[i] == mx) {
            if (a[i] == mn) {
                mn++;
            } else {
                mx--;
            }
            i++;
        } else if (a[j] == mn || a[j] == mx) {
            if (a[j] == mn) {
                mn++;
            } else {
                mx--;
            }
            j--;
        }
    } 
    if(flag == 0) {
        cout << "-1" << '\n';
    }
   }
    return 0;
}
