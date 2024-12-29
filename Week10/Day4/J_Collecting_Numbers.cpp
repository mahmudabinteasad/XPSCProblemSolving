// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    for (ll i = 0; i < n; i++) {
//     cin >> a[i];
//    }
//    int ind = -1, round = 0;
//    for (ll i = 0; i < n - 1; i++) {
//        for (ll j = i + 1; j < n; j++) {
//         if (a[j] > a[i]) {
//             if (ind != i) {
//                 round++;
//                 ind = i;
//             }
//         }
//    }
//    }
//    cout << round;
//     return 0;
// } // thats not what they wanted


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int cur = 1, round = 0;
//     while (cur <= n) {
//         int count = 0;
//         for (ll i = 0; i < n; i++) {
//             if (a[i] == cur) {
//                 cur++;
//                 count++;
//             }
//         }
//         round++;
//     }
//     cout << round;
//     return 0;
// } // time limit


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<int, int> mp;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    int round = 1, pos = mp[1];
    for (ll i = 2; i <= n; i++) {
        if (mp[i] < pos) {
            round++;
        }
        pos = mp[i];
    }
    cout << round;
    return 0;
}