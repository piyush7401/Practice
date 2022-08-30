#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum = sum + v[i][j];
        }
        if(sum==180){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
