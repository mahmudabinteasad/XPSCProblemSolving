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
       map<ll, ll> mp;
       vector<ll> a(n);
       bool one = true;
       for (int i = 0; i < n; i++) {
           cin >> a[i];
           if (a[i] != 1) one = false;
           mp[a[i]]++;
       }
       if (n == 1 || one) {
           cout << "NO" << '\n';
       } else {
           ll one = 0, sum = 0;
           for (auto ele : mp) {
               if (ele.first == 1) {
                   one = ele.second;
               } else {
                   sum += (ele.first * ele.second);
               }
           }
           int notone = n - one;
           sum -= notone;
           if (sum >= one) {
               cout << "YES" << '\n';
           } else {
               cout << "NO" << '\n';
           }
       }
   }
    return 0;
}