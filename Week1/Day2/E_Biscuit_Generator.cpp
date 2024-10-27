#include<bits/stdc++.h>
using namespace std;
int main() {
   int a, b, t, count = 0;
   cin >> a >> b >> t;
//    double c = t + 0.5;
//    cout << c;
    for(int i = 1 ; i <= 20 ; i++)
    {
        if(a * i <= t)
        {
            count++;
        }
    }
    cout << (count * b);
    return 0;
}