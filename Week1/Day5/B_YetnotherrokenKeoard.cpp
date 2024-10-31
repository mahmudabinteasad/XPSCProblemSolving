// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     string s;
//     cin >> s;
//     vector<char> ch;
//     for (long long int i = 0; i < s.size(); i++) {
//         if (s[i] != 'b' && s[i] != 'B') {
//             ch.push_back(s[i]);
//         } else if (s[i] == 'b' && !ch.empty()) {
//             for (long long int j = ch.size() - 1; j >= 0; j--) {
//                 if (islower(ch[j])) {
//                     ch.erase(ch.begin() + j);
//                     break;
//                 }
//             }
//         } else if (s[i] == 'B' && !ch.empty()) {
//             for (long long int j = ch.size() - 1; j >= 0; j--) {
//                 if (isupper(ch[j])) {
//                     ch.erase(ch.begin() + j);
//                     break;
//                 }
//             }
//         }
//     }
//     for (char c : ch) {
//         cout << c;
//     }
//     cout << '\n';
//    }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) {
//     string s;
//     cin >> s;
//     vector<pair<int, char>> ch1, ch2;
//     for (long long int i = 0; i < s.size(); i++) {
//         if (s[i] != 'b' && s[i] != 'B') {
//             if (islower(s[i])) {
//               ch1.push_back({i, s[i]});  
//             } else {
//             ch2.push_back({i, s[i]});
//             }
//         } else if (s[i] == 'b' && !ch1.empty()) {
//                 ch1.pop_back();
//         } else if (s[i] == 'B' && !ch2.empty()) {
//                 ch2.pop_back();
//         }
//     }

//     // map<int, char> mp;

//     // for (long long int i = 0; i < ch1.size(); i++) {
//     //     mp[ch1[i].first] = ch1[i].second; 
//     // }
//     // for (long long int i = 0; i < ch2.size(); i++) {
//     //     mp[ch2[i].first] = ch2[i].second; 
//     // }
//     // for (long long int j = 0; j < mp.size(); j++) {
//     //     cout << mp[j]; 
//     // }

//     // cout << '\n';

//     // string result(s.size(), ' '); 
//     // for (int j = 0; j < ch1.size(); j++) {
//     //       int index = ch1[j].first;  
//     //       char character = ch1[j].second; 
//     //       result[index] = character;
//     //     // cout << character;
//     // }
//     // for (int j = 0; j < ch2.size(); j++) {
//     //       int index = ch2[j].first;  
//     //       char character = ch2[j].second; 
//     //       result[index] = character;
//     //     // cout << character;
//     // }
//     // if (!result.empty()) {
//     // cout << result << '\n';
//     // }
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
    string s;
    cin >> s;
    stack<int> ch1, ch2;
    for (long long int i = 0; i < s.size(); i++) {
        if (s[i] != 'b' && s[i] != 'B') {
            if (islower(s[i])) {
              ch1.push(i);  
            } else {
            ch2.push(i);
            }
        } else if (s[i] == 'b' && !ch1.empty()) {
                s[ch1.top()] = '0';
                ch1.pop();
        } else if (s[i] == 'B' && !ch2.empty()) {
                s[ch2.top()] = '0';
                ch2.pop();
        }
    }
    for (long long int i = 0; i < s.size(); i++) {
        if (s[i] != 'b' && s[i] != 'B' && s[i] != '0') {
            cout << s[i];
  
   }   
   }
   cout << '\n';
   }
    return 0;
}