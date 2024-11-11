#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.push(v[i]);
    }
    set<int> st;
    while (!s.empty()) {
        int top = s.top();
        s.pop();
        if (st.count(top)) {
            break;
        } else {
        st.insert(top);
        count++;
        }
    }
    cout << n - count << '\n';
    }
    return 0;
}