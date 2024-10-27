#include<bits/stdc++.h>
using namespace std;
int main() {
   int a, b, c, d;
   cin >> a >> b >> c;
    for(int i = 1 ; i <= 1000 ; i++)
    {
        d = c * i;
        if(d >= a && d <= b)
        {
            cout << d;
            return 0;
        }
    }
    if(d > b)
    {
        cout << "-1";
    }
    return 0;
}