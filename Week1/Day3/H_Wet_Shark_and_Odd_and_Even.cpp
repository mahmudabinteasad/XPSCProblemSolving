#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   vector<long long int> a(n);
   long long int sum = 0;
   for(int i = 0 ; i < n ; i++)
   {
    cin >> a[i];
    sum +=a[i];
   }
   sort(a.begin(), a.end());
   if(sum % 2 == 0)
   {
    cout << sum;
   }
   else
   {
   for(int i = 0 ; i < n ; i++)
   {
    if(a[i] % 2 != 0)
    {
        sum -=a[i];
        cout << sum;
        break;
    }
   } 
   }
    return 0;
}