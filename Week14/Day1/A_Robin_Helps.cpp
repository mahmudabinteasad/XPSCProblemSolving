#include<bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
    int n,k,gold=0,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=k)
        {
            gold+=a[i];
        }
        else if(gold>0 && a[i]==0)
        {
            gold--;
            count++;
        }
    }
    cout<<count<<endl;
   }
    return 0;
}