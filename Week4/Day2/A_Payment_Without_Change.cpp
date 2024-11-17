// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     ll a, b, n, s;
//     cin >> a >> b >> n >> s;
//     if (s <= b) {
//         cout << "YES" << endl;
//     } else {
//         ll give = min(a, s / n) * n;
//     if (give == s) {
//         cout << "YES" << endl;
//     } else if (give < s) {
//         int more = s - give;
//         if (more <= b) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     } else if (give > s) {
//         while (give > s) {
//             give -= n;
//         }
//         for (int i = 0; i < b; i++) {
//             give++;
//             if (give == s) {
//                 cout << "YES" << endl;
//             } else {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//     }
//    }
//     return 0;
// }



#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll give = min(a, s / n) * n;
        ll more = s - give;
        if (more <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
