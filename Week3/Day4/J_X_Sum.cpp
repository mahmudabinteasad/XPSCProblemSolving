#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        long long mx = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long sum2 = a[i][j];

                for (int k = 0; k < 4; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    while (x >= 0 && x < n && y >= 0 && y < m) {
                        sum2 += a[x][y];
                        x += dx[k];
                        y += dy[k];
                    }
                }

                mx = max(mx, sum2);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
