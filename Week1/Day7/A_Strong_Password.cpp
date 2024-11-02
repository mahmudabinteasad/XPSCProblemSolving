// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//       string s;
//       cin >> s;
//       int n = s.size();
//       bool done = false;
//       for (int i = 0; i < n; i++) {
//          cout << s[i];
//          if (i < n - 1 && s[i] == s[i + 1] && !done) {
//             done = true;
//             if (s[i] != 'z') {
//                cout << char(s[i] + 1);
//             } else {
//                cout << 'a';
//             }
//          }
//       }
//       if (!done) {
//          if (s[n - 1] == 'a') {
//             cout << 'b';
//          } else {
//             cout << 'a';
//          }
//       }
//       cout << '\n';
//    }
//    return 0;
// }
 

#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    string s;
    cin >> s;
    vector<char> v;
    int n = s.size(), count = 0;
    for (int i = 0 ; i < n ; i++) {
        v.push_back(s[i]);
        if (i < n - 1 && s[i] == s[i + 1] && count == 0) {
            count = 1;
        for (char c = 'a' ; c <= 'z' ; c++) {
            if (s[i] != c) {
                v.push_back(c);
                break;
            }
        }
        }
    }
    if (count == 0) {
        for (char c = 'a' ; c <= 'z' ; c++) {
            if (s[n-1] != c) {
                v.push_back(c);
                break;
            }
        }
    }
    for (auto x : v) {
        cout << x;
    }
    cout << '\n';
   }
    return 0;
}

// accepted in codeforce