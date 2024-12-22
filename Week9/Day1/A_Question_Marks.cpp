#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int countA = 0, countB = 0, countC = 0, countD = 0;
        for (char ch : s) {
            if (ch == 'A') countA++;
            else if (ch == 'B') countB++;
            else if (ch == 'C') countC++;
            else if (ch == 'D') countD++;
        }
        int takeA = min(n, countA);
        int takeB = min(n, countB);
        int takeC = min(n, countC);
        int takeD = min(n, countD);
        int total = takeA + takeB + takeC + takeD;
        cout << total << '\n';
    }
    return 0;
}