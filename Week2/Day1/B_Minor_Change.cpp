#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s, t;
   cin >> s >> t;
   ll n = s.size(), count = 0;
   for (ll i = 0; i < n; i++) {
    if (s[i] != t[i]) {
        count++;
    }
   }
   cout << count;
    return 0;
}