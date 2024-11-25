#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    int count = 0, greater = 0, one = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            count++;
        }
        if (x == 1) {
            one = 1;
        }
        if (x > 1) {
            greater = 1;
        }
    }
    int no = n - count;
    if (count > no + 1) {
        if (one == 0) {
            cout << 1 << endl;
        } else {
            if (greater) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    } else {
        cout << 0 << endl;
    }
}
    return 0;
}