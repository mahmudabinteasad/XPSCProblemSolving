// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     ll n;
//     cin >> n;
//     cout << "2" << '\n';
//     cout << n << " " << n - 1 << '\n';
//     ll x = n;
//     ll y = n - 2;
//     while (x >= 3 && y >= 1) {
//         cout << x << " " << y << '\n';
//         x--;
//         y--;
//     }
//    }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll n;
    cin >> n;
    stack<ll> s;
    for (ll i = 1; i <= n; i++) {
        s.push(i);
    }
    cout << "2" << '\n';
    while (s.size() != 1) {
        int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
        cout << x << " " << y << '\n'; 
        if ((x + y) % 2 == 0) {
            s.push((x + y) / 2);
        } else {
            s.push(x);
        }
    }
   }
    return 0;
} // accepted