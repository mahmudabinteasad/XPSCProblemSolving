// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     int n;
//     cin >> n;
//     ll b_size = (n * (n - 1) / 2);
//     vector<ll> b(b_size);
//     set<ll> st;
//     for (ll i = 0; i < b_size; i++) {
//         cin >> b[i];
//         st.insert(b[i]);
//     }
//     // sort(b.begin(), b.end());
//     // ll size1 = st.size();
//     ll val = 0;
//     for (auto x: st) {
//         val = x;
//     }
//     if (st.size() == 1) {
//     for (ll i = 0; i < n; i++) {
//         cout << val << " ";
//     }    
//     } else {
//     for (auto x: st) {
//         val = x;
//         cout << x << " ";
//     }
//     for (ll i = st.size(); i < n; i++) {
//         cout << val << " ";
//         val++;
//     }
//     }
//     cout << '\n';
//    }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         ll b_size = (n * (n - 1)) / 2;
//         vector<ll> b(b_size);
//         for (ll i = 0; i < b_size; i++) {
//             cin >> b[i];
//         }
//         sort(b.begin(), b.end());
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) {
//             a[i] = b[b_size - n + i];
//         }
//         sort(a.begin(), a.end());
//         for (int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) / 2;
        vector<ll> b(m);
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<ll> a;
        ll index = 0;
        for (ll i = 0; i < n - 1; i++) {
            a.push_back(b[index]);
            index += n - i - 1;
        }
        a.push_back(1000000000); 
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

