#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
        int x,y;
        cin>>x>>y;
 
        int cnt= (y+1)/2;
        int remain= ( (y/2)*7 ) + ( (y%2)*11 );
        int st= max(0, x-remain);
 
        cnt+= (st+14)/15;
        cout<<cnt<<endl;
   }
    return 0;
}