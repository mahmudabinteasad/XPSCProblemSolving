#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
        for (int i = 0; i < n / 2; i++) {
            if (i % 2 == 0) cout << "MM";
            else cout << "AA";
        }
        cout << '\n';
    }
   }
    return 0;
} // accepted