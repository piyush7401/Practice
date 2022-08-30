#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto value: m){
            if(value.second ==2){
                cout<<value.first<<value.first;
            }
        }
        for(auto v: m){
            if(v.second == 1){
            cout<<v.first;
            }
        }
        cout<<"\n";
    }
}
