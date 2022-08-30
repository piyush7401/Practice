#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        int sum =0;
        sum = p[i][0] + p[i][2];
        if(sum==180){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    
}
