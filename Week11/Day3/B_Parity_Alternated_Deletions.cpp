#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end(), greater<int>());
    sort(c.begin(), c.end(), greater<int>());
    int sum = 0;
    if (b.size() == c.size()) {
        cout << "0";
    } else {
        if (b.size() == 0 || c.size() == 0) {
            if (b.size() == 0) {
                for (int i = 0; i < c.size(); i++) {
                    c[0] = 0;
                    sum += c[i];
                }
            } else {
                for (int i = 0; i < b.size(); i++) {
                    b[0] = 0;
                    sum += b[i];
                }
            }
        } else {
            int mn = (b.size(), c.size());
                for (int i = 0; i < mn; i++) {
                    b[i] = 0;
                    c[i] = 0;
                }
            if (b.size() == 0) {
                for (int i = mn + 1; i < c.size(); i++) {
                    sum += c[i];
                }
            } else {
                for (int i = mn + 1; i < b.size(); i++) {
                    sum += b[i];
                }
            }
        }
        cout << sum;
    }
    return 0;
}