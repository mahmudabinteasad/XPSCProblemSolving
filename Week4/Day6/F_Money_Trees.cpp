#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], h[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> h[i];

    int ans = 0;
    int sum = 0;
    int len = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (i == n - 1 || h[i] % h[i + 1] == 0) {
            sum += a[i];
            len++;
            if (sum <= k) {
                ans = max(len, ans);
            }
            while (sum > k && j <= i) {
                sum -= a[j];
                j++;
                len--;
            }
        } else {
            j = i + 1;
            if (sum + a[i] <= k) {
                len++;
                ans = max(len, ans);
            }
            sum = 0;
            len = 0;
        }
    }

    if (sum <= k) {
        ans = max(len, ans);
    }

    cout << ans;
    return 0;
}
