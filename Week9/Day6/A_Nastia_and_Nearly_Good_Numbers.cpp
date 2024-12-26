#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (b != 1) {
            cout << "YES" << '\n';
            cout << (a * b) << " " << a << " " << (a * b) + a << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}