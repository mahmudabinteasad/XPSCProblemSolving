#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            if (b % 2 == 0) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else {
            if (a % 2 == 0) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
