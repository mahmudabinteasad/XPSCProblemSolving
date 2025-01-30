#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--){
        vector<vector<char>> grid(8,vector<char>(8,'.'));
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                cin>>grid[i][j];
            }
        }
        bool done=false;
        for(int i=0;i<8;i++){
            bool flag=true;
            for(int j=0;j<8;j++){
                if(grid[i][j]!='R'){
                    flag=false;
                    break;
                }
            }
            if(flag){
                done=true;
                cout<<"R"<<endl;
                break;
            }
        }
        if(!done){
            for (int i = 0; i < 8; i++)
            {
                bool flag = true;
                for (int j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    done = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}