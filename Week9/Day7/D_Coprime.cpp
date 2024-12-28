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
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     ll ans = -1, c = -1, d = -1, mx = LLONG_MIN;
//     for (ll i = 0; i < n; i++) {
//         for (ll j = 0; j < n; j++) {
//             if (__gcd(a[i], a[j]) == 1) {
//                 mx = max(mx, i + j);
//                 ans = mx + 2;
//             }
//     }
//     }
//     // cout << c << " " << d << '\n';
//     cout << ans << '\n';
//    }
//     return 0;
// }// time limit

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
        vector<int> v(1001,0);
        int n;
        cin>>n;
        int maxo=-1;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            v[temp]=i;
        }
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(v[i] && v[j] && int(__gcd(i,j))==1){
                    maxo=max(maxo,v[i]+v[j]);
                }
            }
        }
        cout<<maxo<<endl;
   }
    return 0;
}
