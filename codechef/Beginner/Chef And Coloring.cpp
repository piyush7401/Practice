#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int max =0;
        for(auto value: m){
            if(max < value.second){
                max = value.second;
            }
        }
        cout<<n-max<<"\n";
    }
}
