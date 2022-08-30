#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        if(p[i][2]%2==1){
            p[i][0] = 2*p[i][0];
            if(p[i][0] >= p[i][1]){
                cout<<p[i][0]/p[i][1]<<"\n";
            }
            else{
                cout<<p[i][1]/p[i][0]<<"\n";
            }
        }
        else{
            if(p[i][0] >= p[i][1]){
                cout<<p[i][0]/p[i][1]<<"\n";
            }
            else{
                cout<<p[i][1]/p[i][0]<<"\n";
            }
        }
    }
}
