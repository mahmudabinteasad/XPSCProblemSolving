// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// ll gcd(ll a, ll b) {
//     return __gcd(a, b);
// }
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     int n;
//     cin >> n;
//     vector<ll> v;
//     ll mx = 1;
//     v.push_back(1);
//     for (ll i = 1; i < n; i++) {
//         for (ll j = i + 1; j <= n; j++) {
//             if (gcd(i, j) > mx) {
//                 mx = gcd(i, j);
//                 v.push_back(mx);
//             }
//         }
//     }
//     // for (ll a : v) {
//     //     cout << a << " ";
//     // }
//     sort(v.begin(), v.end());
//     // cout << '\n';
//     cout << v.back() << '\n';
//    }
//     return 0;
// } // time limit



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    cout << n / 2 << '\n';
   }
    return 0;
}