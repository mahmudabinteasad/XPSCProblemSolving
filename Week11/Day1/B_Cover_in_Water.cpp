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
   int count = 0, three = 0;
   bool flag = false;
   for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') {
    count++;
    three++;
    } else {
        three = 0;
    }
    if (three == 3) {
        flag = true;
        break;
    }
   }
   if (flag) {
    cout << "2" << '\n';
   } else {
    cout << count << '\n';
   }
   }
    return 0;
}
