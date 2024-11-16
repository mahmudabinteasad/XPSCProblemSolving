#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int x, y, z;
   cin >> x >> y >> z;
   int ans1 = 0, ans2 = 0;
   int left = 4 - (x + y + z);
   while (x--) {
    ans1++;
   }
   while (y--) {
    ans1 += 0.5;
    ans2 += 0.5;
   }
   while (z--) {
    ans2++;
   }
   if ((ans1 + left) > ans2) {
    cout << "Yes" << '\n';
   } else {
    cout << "No" << '\n';
   }
    return 0;
}