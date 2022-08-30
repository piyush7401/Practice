#include<bits/stdc++.h>
using namespace std;

int sumdigit(int v){
    if(v<10){
        return v;
    }
    else{
        return sumdigit(v/10);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<(v[i]%10 + sumdigit(v[i]))<<"\n";
    }
}
