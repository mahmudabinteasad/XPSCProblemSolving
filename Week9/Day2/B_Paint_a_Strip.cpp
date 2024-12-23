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
    int sum = 1, count = 1;
    while (sum < n) {
        sum++;
        sum *= 2;
        count++;
    }
    cout << count << '\n';
   }
    return 0;
}