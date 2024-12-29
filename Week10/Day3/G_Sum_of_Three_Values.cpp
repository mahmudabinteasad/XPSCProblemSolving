// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     ll x;
//     cin >> n >> x;
//     vector<ll> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     bool found = false;
//     for (int i = 0; i < n - 2; i++) {
//         for (int j = i + 1; j < n - 1; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 if (a[i] + a[j] + a[k] == x) {
//                     cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
//                     found = true;
//                     break;
//                 }
//             }
//             if (found) break;
//         }
//         if (found) break;
//     }
//     if (!found) {
//         cout << "IMPOSSIBLE" << endl;
//     }
//     return 0;
// } //time limit

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     ll x;
//     cin >> n >> x;
//     vector<ll> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     bool found = false;
//     for (int i = 0; i < n - 2; i++) {
//         map<ll, int> seen;
//         ll target = x - a[i];
//         for (int j = i + 1; j < n; j++) {
//             ll needed = target - a[j];
//             if (seen.find(needed) != seen.end()) {
//                 cout << i + 1 << " " << seen[needed] + 1 << " " << j + 1 << endl;
//                 found = true;
//                 break;
//             }
//             seen[a[j]] = j;
//         }
//         if (found) break;
//     }
//     if (!found) {
//         cout << "IMPOSSIBLE" << endl;
//     }
//     return 0;
// } //time limit

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        ll target = x - a[i].first;
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            ll sum = a[left].first + a[right].first;
            if (sum == target) {
                cout << a[left].second << " " << a[right].second <<  " " << a[i].second << '\n';
                found = true;
                break;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        if (found) break;
    }
    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}



