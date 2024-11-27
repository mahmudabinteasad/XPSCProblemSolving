#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, maxOdd = 0;
        vector<int> even;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int cur;
            cin >> cur;
            if (cur & 1) {
                maxOdd = max(maxOdd, cur); 
            } else {
                even.push_back(cur); 
            }
        }
        if (maxOdd == 0 || even.empty()) {
            cout << 0 << '\n';
            continue;
        }
        sort(even.begin(), even.end()); 
        for (int e : even) {
            if (maxOdd < e) {
                cout << even.size() + 1 << '\n';
                break;
            }
            maxOdd += e; 
            if (maxOdd > even.back()) {
                cout << even.size() << '\n';
                break;
            }
        }
    }
    return 0;
}
