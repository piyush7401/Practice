#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int a,d,c;
            cin>>a>>d>>c;
            a = a*d;
            if(c <= b){
                m[a] = c;
            }
        }
        if(!m.empty()){
            auto it = --m.end();
            cout<<it->first<<"\n";
        }
        else{
            cout<<"no tablet"<<"\n";
        }
    }
}
