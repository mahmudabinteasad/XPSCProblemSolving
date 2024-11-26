#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n * n);
        for (int i = 0; i < n * n; i++) {
            if (i % 2 == 0) {
                a[i] = i / 2 + 1;
            }
            else {
                a[i] = n * n - i / 2;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    cout << a[i * n + j] << " ";
                }
                else {
                    cout << a[i * n + n - 1 - j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
} // accepted
