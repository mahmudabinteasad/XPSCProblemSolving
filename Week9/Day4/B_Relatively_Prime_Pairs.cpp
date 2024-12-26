#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll l, r;
   cin >> l >> r;
   ll len = ((r - l) + 1) / 2;
   ll count = 0;
   for (ll i = l; i <= r; i += 2) {
    count++;
   }
//    cout << len << '\n';
//    cout << count << '\n';
   if (count >= len) {
    cout << "YES" << '\n';
   for (ll i = 1; i <= len; i++) {
    cout << l << " " << l + 1 << '\n';
    l += 2;
   }
   } else {
    cout << "NO" << '\n';
   }
    return 0;
}