#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;
    cin >> n;
    if (n <= 2) {
    for (ll i = 0; i < n; i++) {
            cout << 'a';
        }
    } else {
        if (n % 2 == 0) {
            for (ll i = 0; i < n / 2; i++) {
                if (i % 2 == 0) {
                    cout << 'a';
                    cout << 'a';
                } else {
                    cout << 'b';
                    cout << 'b';
                }
            }
        } else {
            for (ll i = 0; i < n / 2; i++) {
                if (i % 2 == 0) {
                    cout << 'a';
                    cout << 'a';
                } else {
                    cout << 'b';
                    cout << 'b';
                }
            }
            if ((n / 2) % 2 == 0) {
                cout << 'a';
            } else {
                cout << 'b';
            }
        }
    }
    return 0;
}
// accepted

