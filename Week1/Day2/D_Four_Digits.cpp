#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, d, count = 0;
   cin >> n;
   string main = to_string(n);
   
   if(n < 10)
   {
    cout << "000" << main;
   }
   else if(n < 100)
   {
    cout << "00" << main;
   }
   else if(n < 1000)
   {
    cout << "0" << main;
   }
   else if(n >= 1000)
   {
    cout << main;
   }
    return 0;
}