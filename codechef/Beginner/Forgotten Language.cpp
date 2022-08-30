#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        set<string> s1;
        for(int i=0;i<k;i++){
            int m;
            cin>>m;
            for(int i=0;i<m;i++){
                string s;
                cin>>s;
                s1.insert(s);
            }
        }
        for(int i=0;i<n;i++){
            if(s1.find(p[i]) != s1.end()){
                cout<<"yes"<<" ";
            }
            else{
                cout<<"no"<<" ";
            }
        }
        
    }
}
