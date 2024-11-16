#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int T;                     
   cin >> T;
   while (T--) {
      ll n, k, q;               
      cin >> n >> k >> q;
      vector<ll> a(n);
      for (int i = 0; i < n; i++) {
         cin >> a[i];
      }

      ll ans = 0;
      ll count = 0; 

      for (int i = 0; i < n; i++) {
         if (a[i] <= q) { 
            count++;
            if (i == n - 1 || a[i + 1] > q) { 
               if (count >= k) {  
                  ll x = count - k + 1LL; 
                  ll add = (x * (x + 1LL)) / 2LL; 
                  ans += add; 
               }
               count = 0;  
            }
         }
      }
      cout << ans << endl;  
   }
   return 0;
}
