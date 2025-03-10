#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
   int n, k;
   cin >> n >> k;
   vector<int> v(n);
   for (int i = 0; i < n; i++) {
       cin >> v[i];
   }
   int prev = 0;
   for (int i = 0; i < n; i++) {
       if (prev + 1 == v[i]) 
           prev = v[i];
   }
   cout << (n - prev + k - 1) / k << "\n";
   }
    return 0;
}