#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x<3 && y<3){
	        cout<<x<<endl;
	    }
	    else if(x==y && x%3==0){
	        cout<<"0"<<endl;
	    }
	    else if(x>y){
	        cout<<x%3<<endl;
	    }
	    else{
	        cout<<y%3<<endl;
	    }
	}
}