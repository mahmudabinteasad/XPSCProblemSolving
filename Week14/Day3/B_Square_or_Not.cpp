#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int root = sqrt(n);
        if (root * root != n) {
            cout << "No" << '\n';
        } else {
        int count1 = 0;
        for (char ch : s) {
            if (ch == '1') {
                count1++;
            }
        }
        int want = 2 * root + 2 * (root - 2);
        if (count1 == want) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
        }
    }
    return 0;
}
