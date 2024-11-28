#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<ll> s(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++) {
            cin >> s[i];
        }
        
        vector<ll> a(n + 1);
        
        if (n == 1 || k == 1) {
            cout << "Yes" << endl;
            continue;
        }
        for (int i = n; i >= n - k + 2; i--) {
            a[i] = (s[i] - s[i - 1]);
        }
        
        bool possible = true;
        
        for (int i = n - k + 2; i <= n; i++) {
            if (i + 1 <= n && a[i + 1] < a[i]) {
                possible = false;
                break;
            }
        }
        
        if (!possible) {
            cout << "No" << endl;
            continue;
        }
        for (int i = n - k + 1; i > 1; i--) {
            a[i] = a[i + 1];
            s[i - 1] = s[i] - a[i];
        }
        
        a[1] = s[1];
        
        for (int i = 1; i <= n; i++) {
            if (i + 1 <= n && a[i + 1] < a[i]) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
