#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        ll sum = 0;
        vector<ll> v(n);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                sum += (n - i - 1);
                v[i] = i - (n - i - 1);
            } else {
                sum += i;
                v[i] = (n - i - 1) - i;
            }
        }

        sort(v.begin(), v.end(), greater<ll>());

        vector<ll> result(n);
        ll sum2 = sum;
        for (int k = 0; k < n; k++) {
            if (v[k] > 0) { 
                sum2 += v[k];
            }
            result[k] = sum2;
        }

        for (int k = 0; k < n; k++) {
            cout << result[k] << " ";
        }
        cout << '\n'; 
    }
    return 0;
}
