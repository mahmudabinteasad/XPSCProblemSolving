#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, p1, p2, p3, t1, t2, l, r, sum = 0;
   cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
   while (n--) {
    cin >> l >> r;
    sum += p1*(r - l);
   }
    return 0;
}