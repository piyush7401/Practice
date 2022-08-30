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
        if(s.size()%2==0){
            if(m.find('B')->second == s.size()/2){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
