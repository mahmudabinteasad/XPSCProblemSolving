#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    // set<char> st;
    // vector<char> v;
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    // for (int i = 0 ; i < n ; i++) {
    //     st.insert(s[i]);
    //     v.push_back(s[i]);
    // }
    set<char> st(s.begin(), s.end());
    vector<char> v(st.begin(), st.end());

    map<char, char> mp;
    for (int i = 0 ; i < v.size() ; i++) {
        mp[v[i]] = v[v.size() - 1 - i];
    }
    for (int i = 0 ; i < n ; i++) {
        s[i] = mp[s[i]];
    }
    cout << s << '\n';
   }
    return 0;
}