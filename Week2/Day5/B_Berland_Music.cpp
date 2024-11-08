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
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    string s;
    cin >> s;
    map <int, int> zero, one;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zero[p[i]] = i;
        else one[p[i]] = i;
    }
    int q = 1;
    for (auto it : zero) p[it.second] = q++;
    for (auto it : one) p[it.second] = q++;
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    } 
    cout << '\n';
   }
    return 0;
}