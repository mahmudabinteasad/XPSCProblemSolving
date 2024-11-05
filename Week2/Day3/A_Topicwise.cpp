#include<bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin >> s;
    queue<char> q;
    for (int i = 0; i < s.size(); i++) {
        if (q.empty()) {
            q.push(s[i]);
        } else {
            if (s[i] == '/' && q.back() != '/') q.push(s[i]);
            else if (s[i] != '/') q.push(s[i]);
        }
    }
    if (q.size() >= 2 && q.back() == '/') {
        q.pop();
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    return 0;
}
