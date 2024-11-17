#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll lift1 = a - 1;
    ll lift2;
    if (b < c) {
        lift2 = (c - b) + (c - 1);
    } else if (b > c) {
        lift2 = (b - c) + (c - 1);
    }
    if (lift1 == lift2) {
        cout << "3" << '\n';
    } else if (lift1 < lift2) {
        cout << "1" << '\n';
    } else {
        cout << "2" << '\n';
    }
   }
    return 0;
}