#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
    	int n, count, start = 1;
        cin >> n;
        count = n / 2 + n % 2;
        int end = 3 * n;
        cout << count << '\n';
        for(int i = 0 ; i < count ; i++) {
            cout << start << " " << end << '\n';
            start += 3;
            end -= 3;
        }
    }
    return 0;
} // accepted