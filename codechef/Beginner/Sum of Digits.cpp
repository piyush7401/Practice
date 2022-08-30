#include<bits/stdc++.h>
using namespace std;

int sumdigit(int v){
    if(v<10){
        return v;
    }
    return sumdigit(v/10) + v%10;
}
int main(){
    int t;
    cin>>t;
    vector<int> v(t,0);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        cout<<sumdigit(v[i])<<"\n";
    }
}
