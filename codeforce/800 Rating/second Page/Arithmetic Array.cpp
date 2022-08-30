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
        int sum =0;
        for(int j=0;j<p[i].size();j++){
            sum =sum + p[i][j];
        }
        int a = p[i].size();
        if(sum >= a){
            cout<<sum - a<<"\n";
        }
        else if(sum < a){
            cout<<1<<"\n";
        }
    }
}
