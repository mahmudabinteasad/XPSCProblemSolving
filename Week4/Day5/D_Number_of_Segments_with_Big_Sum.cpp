#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    long long sum = 0;
    long long result = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum >= s) {
            sum -= a[l];
            l++;
        result += n - r;
        }
    }
    cout << result << '\n';
    return 0;
}
