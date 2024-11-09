// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     int n, count1 = 0, count2 = 0;
//     cin >> n;
//     char c;
//     cin >> c;
//     string s;
//     cin >> s;

//     // int first = -1;
//     // for (int i = s.size() - 1; i >= 0; i--) {
//     //     if (s[i] == c) {
//     //         first = i;
//     //         break;
//     //     }
//     // }
//     int first1 = s.rfind(c);
//     int first2 = s.find(c);
//     for (int i = first2; i < s.size(); i++) {
//         if (s[i] == 'g') {
//             break;
//         } else {
//             count2++;
//         }
//     }
//     s = s + s;
//     for (int i = first1; i < s.size(); i++) {
//         if (s[i] == 'g') {
//             break;
//         } else {
//             count1++;
//         }
//     }

//     cout << max(count1, count2) << '\n';
//    }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (c == 'g') {
            cout << 0 << endl;
        } else{ 
            s =s + s;
            int mx = 0;
            int ind = -1;
            for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                ind = i;
            }
            if (s[i] == c && ind != -1) {
                mx = max(mx, ind - i);
            }
        }
     cout << mx << endl;
     }   
    }
    return 0;
}