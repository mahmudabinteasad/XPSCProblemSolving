#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        vector<char> b(c);
        for (int j = 0; j < c; j++) {
            cin >> b[j];
            if (b[j] == 'D') {
                if (a[i] == 9) a[i] = 0;
                else a[i]++;
            } else if (b[j] == 'U') {
                if (a[i] == 0) a[i] = 9;
                else a[i]--;
            }
        }
        cout << a[i] << " ";
    }
    cout << '\n';
   }
    return 0;
}