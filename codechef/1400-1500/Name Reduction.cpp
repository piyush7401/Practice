#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b;
        map<char,int> m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            m[b[i]]++;
        }
        int n;
        int flag =0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>c;
            for(int j=0;j<c.size();j++){
                m[c[j]]--;
                if(m[c[j]] < 0){
                    flag =1;
                }
            }
        }
        if(flag ==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
   
