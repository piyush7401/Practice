#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<p[i].size()/2;j++)
        {
            {
            cout<<p[i][j]<<" "<<p[i][p[i].size() -1 - j]<<" ";
            }
        }
        if(p[i].size()%2==1){
            cout<<p[i][p[i].size()/2]<<" ";
        }
        cout<<"\n";
    }
} 
