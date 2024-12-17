#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int a, b;
    cin >> a >> b;
    if (a >= b) {
        int c = a - b;
        if (c % 2 == 0) {
            cout << "Yes" << '\n'; 
        } else {
            cout << "No" << '\n';
        }
    } else{
        cout << "No" << '\n';
    }
   }
    return 0;
}