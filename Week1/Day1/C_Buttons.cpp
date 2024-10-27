#include<bits/stdc++.h>
using namespace std;
int main() {
   int a, b, c, res = 0;
   cin >> a >> b;
   if(a == b)
   {
    res = a + b;
   }
   else
   {
    c = max(a, b);
    res = c + (c -1);
   }
   cout << res;
    return 0;
}