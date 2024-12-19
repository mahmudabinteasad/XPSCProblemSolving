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
    string s;
    cin >> s;
    int count1 = 0, count0 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1++;
        } else {
            count0++;
        }
    }
    int mn = min(count1, count0);
    if (mn % 2 == 0) {
        cout << "Ramos" << '\n';
    } else {
        cout << "Zlatan" << '\n';
    }
   }
    return 0;
}