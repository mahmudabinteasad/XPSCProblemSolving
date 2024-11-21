#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> freq;
    int l = 0;
    long long result = 0;

    for (int r = 0; r < n; r++) {
        freq[a[r]]++;
        while (freq.size() > k) {
            freq[a[l]]--;
            if (freq[a[l]] == 0) {
                freq.erase(a[l]);
            }
            l++;
        }
        result += (r - l + 1);
    }
    cout << result << '\n';
    return 0;
}
