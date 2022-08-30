#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int> s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(s.find(x) != s.end()){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
                s.insert(x);
            }
        }
    }
}
