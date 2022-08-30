#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        if(v[i]%4==0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}
