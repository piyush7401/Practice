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
        int flag =0;
        for(auto value: m){
            if(value.second == s.size() -1){
                cout<<"Yes"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<"No"<<"\n";
        }
    }
}
