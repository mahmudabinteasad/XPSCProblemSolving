#include<bits/stdc++.h>
using namespace std;
int main() {
   string s;
   cin >> s;

   for(char c = 'a' ; c <= 'z' ; c++)
   {
    if(s.find(c) == -1)
    {
        cout << c;
        return 0;
    }
   }
   cout << "None";
    return 0;
}