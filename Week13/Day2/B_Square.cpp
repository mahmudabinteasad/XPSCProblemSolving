#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int a = min(a1, b1);
    int b = max(a1, b1);
    int c = min(a2, b2);
    int d = max(a2, b2);
    if (a + c == b && b == d) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
   }
    return 0;
}