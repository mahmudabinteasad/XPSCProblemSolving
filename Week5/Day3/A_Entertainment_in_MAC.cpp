#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s <= rev) {
        cout << s << "\n";
    } else {
        cout << rev << s << "\n";
    }
    }
    return 0;
}
