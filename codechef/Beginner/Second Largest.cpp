#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    
    for(int i=0;i<t;i++){
        sort(v[i].begin(),v[i].end());
        cout<<v[i][1]<<"\n";
    }
}
