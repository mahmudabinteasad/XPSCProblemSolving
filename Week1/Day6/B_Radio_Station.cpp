#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, m;
   cin >> n >> m;
   map<string, string> mp;
   while (n--) {
    string name, ip;
    cin >> name >> ip;
    mp[ip] = name;
   }
   while (m--) {
    string command, Ip;
    cin >> command >> Ip;
    Ip.pop_back();
    if (mp.find(Ip) != mp.end()) {
        string s = mp[Ip];
        cout << command << " " << Ip << "; #" << s << '\n';
    }
   }
    return 0;
}