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
        
        ll sum = 0;
        int count = 0, count2 = 0;
        
        for (int i = 0; i < n; i++) {
            sum += abs(a[i]); 
            if (a[i] == 0 && count == 0) continue;
            if (a[i] <= 0) {
                count++;
            } else {
                if (count > 0) {
                    count2++;
                } 
                count = 0;
            }
        }
        if (count) {
            count2++;
        }
        cout << sum << " " << count2 << endl;
    }
    return 0;
}