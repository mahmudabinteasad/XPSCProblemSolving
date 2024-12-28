#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s;
   cin >> s;
   map<char, ll> mp;
   for (char ch : s) {
    mp[ch]++;
   }
   ll q;
   vector<char> a;
   for (auto& x : mp) {
    if (x.second % 2 != 0) {
        a.push_back(x.first);
        a.push_back(x.second);
        q = x.second;
    }
   }
   if (a.size() > 2) {
    cout << "NO SOLUTION";
   } else {
   vector<char> v;
   for (auto& x : mp) {
    if (x.second % 2 == 0) {
        for (ll i = 0; i < x.second / 2; i++) {
        v.push_back(x.first);
        }
    }
   }
   for (ll i = 0; i < v.size(); i++) {
    cout << v[i];
   }
   reverse(v.begin(), v.end());
   for (ll i = 0; i < q; i++) {
    cout << a[0];
   }
   for (ll i = 0; i < v.size(); i++) {
    cout << v[i];
   }
   }
    return 0;
} //accepted