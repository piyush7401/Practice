#include<bits/stdc++.h>
using namespace std;

void count(string v){
    int count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]=='4'){
            count ++;
        }
    }
    cout<<count<<"\n";
}

int main(){
    int t;
    cin>>t;
    vector<string>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        count(v[i]);
    }
}
