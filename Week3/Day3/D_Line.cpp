#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   int n;
   cin >> n;
   string s;
   cin >> s;
   if (n == 1) cout << "0" << '\n';
   else {
    int l = 0, r = 0;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == 'L') l++;
    }
   }
    return 0;
}