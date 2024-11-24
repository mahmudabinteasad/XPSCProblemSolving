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
        int start = n - k;
        for (int i = start; i >= 1; i--) {
            cout << i << " ";
        }
        for (int i = start + 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << '\n';
   }
    return 0;
} // accepted