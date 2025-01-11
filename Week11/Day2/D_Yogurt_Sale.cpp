#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    if ((a * 2) <= b) {
        cout << n * a << '\n';
    } else {
        if (n < 2) {
            cout << n * a << '\n';
        } else {
            if (n % 2 == 0) {
                cout << (n / 2) * b << '\n';
            } else {
                cout << ((n - 1) / 2 * b) + a << '\n';
            }
        }
    }
   }
    return 0;
}