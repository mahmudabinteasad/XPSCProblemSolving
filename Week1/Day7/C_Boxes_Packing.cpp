#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   map<long long int, long long int> mp;
   long long int mx = 0, a;
   while (n--) {
    cin >> a;
    mp[a]++;
    mx = max(mx, mp[a]);
   }
   cout << mx;
    return 0;
}