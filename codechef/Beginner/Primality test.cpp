#include<bits/stdc++.h>
using namespace std;

void check(int v){
    int n = v/2;
    for(int i=2;i<=n;i++){
        if(v%i==0){
            cout<<"no"<<"\n";
            return;
        }
    }
    cout<<"yes"<<"\n";
}


int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        check(v[i]);
    }
}
