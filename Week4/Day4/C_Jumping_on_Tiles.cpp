#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        char first = s[0], last = s[n - 1];
        int d;
        if (first < last) {
           d = 1;
        } else {
           d = -1;
        }  
        int moves = 0; 
        string result = "";  
        for (char c = first; c != last + d; c += d) {
            for (int i = 0; i < n; ++i) {
                if (s[i] == c) {
                    result += to_string(i + 1) + " ";  
                    ++moves;
                }
            }
        }
        cout << abs(first - last) << " " << moves << "\n";
        cout << result << "\n";
    }
    return 0;
}
