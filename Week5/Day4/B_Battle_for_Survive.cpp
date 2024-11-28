#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n, last2, sum = 0, last;
        cin >> n;
        vector < ll > v(n);
        for (ll i = 0 ; i < n - 2; i++) {
            cin >> v[i];
            sum += v[i];
        }
        cin >> last2;
        last2 -= sum;
        cin >> last;
        last -= last2;
        cout << last << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n, sum = 0;
//         cin >> n;
//         vector < ll > v(n);
//         for (ll i = 0 ; i < n; i++) {
//             cin >> v[i];
//             sum += v[i];
//         }
//         cout << sum - 2 * v[n - 2] << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n, sum = 0, last;
//         cin >> n;
//         vector < ll > v(n), a(n);
//         for (ll i = 0 ; i < n; i++) {
//             cin >> v[i];
//         }
//         // sort(v.begin(), v.end());
//         for (ll i = 1 ; i < n; i++) {
//             v[i] = v[i] - v[i - 1];
//             last = v[i];
//         }
//         cout << last << endl;
//     }
//     return 0;
// } //wrong