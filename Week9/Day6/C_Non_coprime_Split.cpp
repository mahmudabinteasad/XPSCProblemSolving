#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int findDivisor(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) 
            return i;
    }
    return n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        if (l <= 3 && r <= 3) {
            cout << "-1" << '\n';
        } else if (r - l >= 1) {
            // if (r % 2 == 0) {
            //     cout << r / 2 << " " << r / 2 << '\n';
            // } else if (r % 2 != 0) {
            //     r--;
            // cout << r / 2 << " " << r / 2 << '\n'; 
            // }
            cout << r / 2 << " " << r / 2 << '\n';
        } else if (findDivisor(l) == l) {
            cout << -1 << endl; 
        } else {
                cout << findDivisor(l) << " " << l - findDivisor(l) << endl;
            }
    }
    return 0;
} // accepted

