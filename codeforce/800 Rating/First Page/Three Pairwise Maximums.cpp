#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        sort(v[i].begin(),v[i].end());
        if(v[i][0] == v[i][1] && v[i][1] == v[i][2]){
            cout<<"YES"<<"\n";
            cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<"\n";
        }
        else if(v[i][0] != v[i][1] && v[i][1] == v[i][2]){
            cout<<"YES"<<"\n";
            cout<<v[i][1]<<" "<<v[i][0]<<" ";
            if(v[i][0]>1){
                cout<<v[i][0] - 1<<"\n";
            }
            else{
                cout<<1<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
