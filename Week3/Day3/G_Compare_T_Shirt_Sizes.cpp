#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    string a, b;
    cin >> a >> b;
    if (a.back() != b.back()) {
        int x = a.back(), y = b.back();
        if (x == 'L' && y == 'M') {
            cout << ">" << '\n';
        } else if (x == 'M' && y == 'S') {
            cout << ">" << '\n';
        } else if (x == 'L' && y == 'S') {
            cout << ">" << '\n';
        }  else if (x == 'S' && y == 'M') {
            cout << "<" << '\n';
        } else if (x == 'M' && y == 'L') {
            cout << "<" << '\n';
        } else if (x == 'S' && y == 'L') {
            cout << "<" << '\n';
        }
    } else {
        int pos1 = a.size() - 1;
        int pos2 = b.size() - 1;
        int x = a.back();
        if (x == 'S') {
        if (pos1 > pos2) {
            cout << "<" << '\n';
        } else if (pos1 < pos2) {
            cout << ">" << '\n';
        } else {
            cout << "=" << '\n';
        }
    } else {
        if (pos1 > pos2) {
            cout << ">" << '\n';
        } else if (pos1 < pos2) {
            cout << "<" << '\n';
        } else {
            cout << "=" << '\n';
        }
    }
    }
   }
    return 0;
}