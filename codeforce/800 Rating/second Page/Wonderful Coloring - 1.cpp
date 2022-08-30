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
        int sum =0;
        for(auto value : m){
            if(value.second <= 2){
                sum = sum + value.second;
            }
            else{
                sum = sum +2;
            }
        }
        cout<<sum/2<<"\n";
    }
}
