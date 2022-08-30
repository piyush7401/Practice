#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        set<int> s;
        for(int i=0;i<n-1;i++){
            if(p[i+1] != p[i]){
                s.insert({i});
                s.insert({i+1});
            }
        }
        if(s.size()!=0){
            cout<<s.size()<<"\n";
        }
        else{
            cout<<0<<'\n';
        }
    }
}
