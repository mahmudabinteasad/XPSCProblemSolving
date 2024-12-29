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
//    vector<vector<ll>> v;
//     for (ll i = 0; i < n; i++) {
//         bool flag = false;
//         for (auto& tower : v) {
//             if (!tower.empty() && tower.back() > a[i]) {
//                 tower.push_back(a[i]);
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag) {
//             v.push_back({a[i]});
//         }
//     }
//     cout << v.size() << '\n';
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
   for (ll i = 0; i < n; i++) {
    cin >> a[i];
   }
   multiset<int> st;
   for (ll i = 0; i < n; i++) {
    if (st.size() == 0) {
        st.insert(a[i]);
    } else {
        auto it = st.upper_bound(a[i]);
        if (it == st.end()) {
            st.insert(a[i]);
        } else {
            st.erase(it);
            st.insert(a[i]);
        }
    }
   }
   cout << st.size();
    return 0;
}