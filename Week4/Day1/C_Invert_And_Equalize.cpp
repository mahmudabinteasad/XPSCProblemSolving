#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int count_0_groups = 0;
        int count_1_groups = 0;
        char current_char = S[0];
        if (current_char == '0') count_0_groups++;
        else count_1_groups++;
        for (int i = 0; i < N; ++i) {
            if (S[i] != current_char) {
                current_char = S[i];
                if (current_char == '0') count_0_groups++;
                else count_1_groups++;
            }
        }
        cout << min(count_0_groups, count_1_groups) << '\n';
    }
    return 0;
}