#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int left = a[0], right = a[0];
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (a[i] == left - 1) {
                left--;
            } else if (a[i] == right + 1) {
                right++;
            } else {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}